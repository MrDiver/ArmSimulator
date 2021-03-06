#include "processormanager.h"
#include "antlr4-runtime.h"
#include <set>
#include <iostream>
#include "highlighter.h"
using namespace antlr4;
using namespace assembler;

template< typename T >
std::string int_to_hex( T i )
{
    std::stringstream stream;
    stream << "0x"
           << std::setfill ('0') << std::setw(sizeof(T)*2)
           << std::hex << i;
    return stream.str();
}


ProcessorManager::ProcessorManager(CodeArea* ca,ConsoleWindow* cw,QListWidget* errorList,QTableWidget* regsTable,QTableWidget* memoryTable) :ca(ca),cw(cw),errorList(errorList),regsTable(regsTable),memoryTable(memoryTable)
{
    p = new Processor;
    cw->print("Initialized Successfully");
    currentLines = QSet<int>();
    memoryTable->setRowCount(MEMSIZE);
    QList<QString> sl;
    for(int i = 0;i < MEMSIZE; i++){
        std::string rhex = int_to_hex(i*4);
        sl.append(QString::fromStdString(rhex));
    }
    memoryTable->setVerticalHeaderLabels(QStringList(sl));
    hitBreakpoint = false;
}

ProcessorManager::~ProcessorManager()
{
    delete p;
    //currentLines;
}

QSet<int> ProcessorManager::getActiveCodelines(){
    return currentLines;
}


std::string trim(const std::string& line)
{
    if(line.size()==0)
        return line;
    const char* WhiteSpace = " \t\v";
    std::size_t start = line.find_first_not_of(WhiteSpace);
    //std::cout << start << " : " << line.size() << " : " << line << std::endl;
    if(start >= line.size())
        return "";
    return start == line.size() ? std::string() : line.substr(start, line.size() - start + 1);
}

std::vector<std::string> split(const std::string& s, char delimiter)
{
    std::vector<std::string> tokens;
    std::string token;
    std::istringstream tokenStream(s);
    while (std::getline(tokenStream, token, delimiter))
    {
        tokens.push_back(token);
    }
    return tokens;
}

void ProcessorManager::cursorVisibility(int line){
    //TODO: Fix cursor movement
    QTextCursor cursor = ca->textCursor();
    cursor.setVerticalMovementX(line);
    ca->setTextCursor(cursor);
    ca->ensureCursorVisible();
}

void ProcessorManager::lint(){
    std::string tmp = ca->toPlainText().toStdString();
    std::vector<std::string> tmp2 = split(tmp,'\n');
    std::string tmp3;
    for (std::string s:tmp2) {
        s = trim(s);
        tmp3.append(s);
        tmp3.append("\n");
    }

        ANTLRInputStream input(tmp3);
        ARMLexer lexer(&input);
        CommonTokenStream tokens(&lexer);
        ARMParser parser(&tokens);
        //TODO: add error listener
        ca->highlighter->currentLine = 0;
        if(parser.getNumberOfSyntaxErrors()>0){
            return;
        }
        tree::ParseTree *tree = parser.compilationUnit();
        CommandVisitor cv;
        cv.visit(tree);
        std::vector<Instruction> program = cv.program;
        if(cv.labels.find(cv.startLabel) == cv.labels.end()){
            cw->clear();
            cw->print("Start label was not found:"+std::to_string(program.size())+" Labels:"+std::to_string(cv.labels.size()));
            ca->highlighter->rehighlight();
            return;
        }

        if( program.size()<=0||cv.labels.size()<=0){
            cw->clear();
            cw->print("No viable program found Commands:"+std::to_string(program.size())+" Labels:"+std::to_string(cv.labels.size()));
            ca->highlighter->rehighlight();
            return;
        }
        cw->clear();
        cw->print("Output:");

        currentLines.clear();
        for(Instruction i: program) {
            currentLines.insert(i.sourceLocation.startline);
        }

        p->load(program,cv.labels,cv.startLabel,cv.dataToValue,cv.dataToReference);
        resetProgram();
}

void ProcessorManager::runProgram(){
    errorOccured = false;
    unsigned int i = 0;
    unsigned int startingLine = p->getCurrentLine()-1;
    running = true;
    while((!p->isDone)&&(!errorOccured)){
        if(ca->getBreakpoints().contains(p->getCurrentLine()-1)&&p->getCurrentLine()-1!=startingLine)
        {
            cw->print("Hit breakpoint");
            break;
        }
        stepProgram();
        i++;
        if(i>1000)
            break;
    }
    running = false;

    updateRegs();
    updateMemory();
    updateError();
    //ca->highlighter->currentLine = p->program.at(p->regs[15]).sourceLocation.startline;
    //ca->highlighter->rehighlight();

    if(i>1000)
        cw->print("Program didnt finish yet. Maybe you have an infinite loop");
    //cw->clear();
    //cw->print("Return Value: "+ std::to_string(p->regs[0]));
}


void ProcessorManager::stepProgram(){
    if(ca->getBreakpoints().contains(p->getCurrentLine()))
    errorOccured = false;
    unsigned int oldval = p->regs[15];
    p->tick();
    unsigned int newval = p->regs[15];
    if(oldval == newval){
        errorOccured = true;
    }
    //updating the register table on the interface
    if(!running){
        updateRegs();
        updateMemory();
        updateError();
    }

    if(errorOccured)
        return;
    //stopping if program has finished
    if(p->isDone)
    {
        ca->highlighter->currentLine = p->program.at(oldval).sourceLocation.startline;
        cw->clear();
        cw->print("Return Value: "+ std::to_string(p->regs[0]));
        ca->highlighter->rehighlight();
        return;
    }

    if(newval<0|| newval>=p->program.size())
    {
        errorOccured = true;
        cw->clear();
        cw->print("Something went terribly wrong. No instruction found at "+std::to_string(p->regs[15]));
        return;
    }

    if(!running)
    {
        ca->highlighter->currentLine = p->program.at(newval).sourceLocation.startline;
        //cursorVisibility(ca->highlighter->currentLine);
        ca->highlighter->rehighlight();
    }
}
void ProcessorManager::resetProgram(){
    errorOccured = false;
    p->reset();
    updateMemory();
    updateRegs();
    errorList->clear();
    updateError();
    if(p->program.size()==0){
        return;
    }
    ca->highlighter->currentLine = p->program.at(p->startInstruction).sourceLocation.startline;
    //cursorVisibility(ca->highlighter->currentLine);
    ca->highlighter->rehighlight();
    cw->clear();
    //TODO: Something is wrong here
    //cw->print("start:"+std::to_string(p->program.at(p->startInstruction).sourceLocation.startline));
}

void ProcessorManager::updateError(){
    if(errorList->count() != (int)p->errors.size()){
        errorList->clear();
        for(std::pair<std::string,SourceLocation> e: p->errors){
            errorList->addItem(QString::fromStdString(e.first+" at "+e.second.toString()));
        }
    }
}

void ProcessorManager::updateMemory(){
    unsigned int sp = p->regs[13];
    for(int i = 0; i < MEMSIZE; i++){
        unsigned int r = p->memory[i];
        std::string rhex = int_to_hex(r);
        QTableWidgetItem* tmp1 = new QTableWidgetItem(QString::fromStdString(std::to_string(r)));
        QTableWidgetItem* tmp2 = new QTableWidgetItem(QString::fromStdString(rhex));
        QTableWidgetItem* tmp3 = new QTableWidgetItem(QString::fromStdString(std::bitset<32>(r).to_string()));

        if(i==sp/4){
            tmp1->setTextColor(QColor(255,20,20));
            tmp2->setTextColor(QColor(255,20,20));
            tmp3->setTextColor(QColor(255,20,20));
        }

        memoryTable->setItem(i,0,tmp1);
        memoryTable->setItem(i,1,tmp2);
        memoryTable->setItem(i,2,tmp3);
    }
}

void ProcessorManager::updateRegs(){
    for(int i = 0; i < 15; i++){
        unsigned int r = p->regs[i];
        std::string rhex = int_to_hex(r);
        regsTable->setItem(i,0,new QTableWidgetItem(QString::fromStdString(std::to_string(r))));
        regsTable->setItem(i,1,new QTableWidgetItem(QString::fromStdString(rhex)));
        regsTable->setItem(i,2,new QTableWidgetItem(QString::fromStdString(std::bitset<32>(r).to_string())));
    }
    {
        unsigned int r = p->regs[15]*4;
        std::string rhex = int_to_hex(r);
        regsTable->setItem(15,0,new QTableWidgetItem(QString::fromStdString(std::to_string(r))));
        regsTable->setItem(15,1,new QTableWidgetItem(QString::fromStdString(rhex)));
        regsTable->setItem(15,2,new QTableWidgetItem(QString::fromStdString(std::bitset<32>(r).to_string())));
    }

    {
        unsigned int f = p->cpsr->C;
        int tmp = 16;
        std::string rhex = int_to_hex(f);
        regsTable->setItem(tmp,0,new QTableWidgetItem(QString::fromStdString(std::to_string(f))));
        regsTable->setItem(tmp,1,new QTableWidgetItem(QString::fromStdString(rhex)));
        regsTable->setItem(tmp,2,new QTableWidgetItem(QString::fromStdString(std::bitset<32>(f).to_string())));
    }

    {
        unsigned int f = p->cpsr->V;
        int tmp = 17;
        std::string rhex = int_to_hex(f);
        regsTable->setItem(tmp,0,new QTableWidgetItem(QString::fromStdString(std::to_string(f))));
        regsTable->setItem(tmp,1,new QTableWidgetItem(QString::fromStdString(rhex)));
        regsTable->setItem(tmp,2,new QTableWidgetItem(QString::fromStdString(std::bitset<32>(f).to_string())));
    }

    {
        unsigned int f = p->cpsr->Z;
        int tmp = 18;
        std::string rhex = int_to_hex(f);
        regsTable->setItem(tmp,0,new QTableWidgetItem(QString::fromStdString(std::to_string(f))));
        regsTable->setItem(tmp,1,new QTableWidgetItem(QString::fromStdString(rhex)));
        regsTable->setItem(tmp,2,new QTableWidgetItem(QString::fromStdString(std::bitset<32>(f).to_string())));
    }

    {
        unsigned int f = p->cpsr->N;
        int tmp = 19;
        std::string rhex = int_to_hex(f);
        regsTable->setItem(tmp,0,new QTableWidgetItem(QString::fromStdString(std::to_string(f))));
        regsTable->setItem(tmp,1,new QTableWidgetItem(QString::fromStdString(rhex)));
        regsTable->setItem(tmp,2,new QTableWidgetItem(QString::fromStdString(std::bitset<32>(f).to_string())));
    }
}
