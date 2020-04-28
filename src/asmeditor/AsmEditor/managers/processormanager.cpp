#include "processormanager.h"
#include "antlr4-runtime.h"
#include <set>
#include <iostream>
#include "highlighter.h"
using namespace antlr4;
using namespace assembler;

ProcessorManager::ProcessorManager(CodeArea* ca,ConsoleWindow* cw,QListWidget* errorList,QTableWidget* regsTable) :ca(ca),cw(cw),errorList(errorList),regsTable(regsTable)
{
    p = new Processor;
    cw->print("Initialized Successfully");
    currentLines = QSet<int>();
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
    const char* WhiteSpace = " \t\v";
    std::size_t start = line.find_first_not_of(WhiteSpace);
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
        if(program.size()<=0||cv.labels.size()<=0){
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

        p->load(program,cv.labels,"main");
        resetProgram();
}

void ProcessorManager::runProgram(){
    unsigned int i = 0;
    while(!p->isDone){
        stepProgram();
        i++;
        if(i>1000)
            break;
    }
    if(i>1000)
        cw->print("Program didnt finish yet. Maybe you have an infinite loop");
    //cw->clear();
    //cw->print("Return Value: "+ std::to_string(p->regs[0]));
}

template< typename T >
std::string int_to_hex( T i )
{
    std::stringstream stream;
    stream << "0x"
           << std::setfill ('0') << std::setw(sizeof(T)*2)
           << std::hex << i;
    return stream.str();
}

void ProcessorManager::stepProgram(){
    p->tick();
    //updating the register table on the interface
    updateRegs();

    //stopping if program has finished
    if(p->regs[15]<0|| p->regs[15]>=p->program.size())
    {
        cw->clear();
        cw->print("Return Value: "+ std::to_string(p->regs[0]));
        ca->highlighter->rehighlight();
        return;
    }
    ca->highlighter->currentLine = p->program.at(p->regs[15]).sourceLocation.startline;
    ca->highlighter->rehighlight();
}
void ProcessorManager::resetProgram(){
    p->reset();
    updateRegs();
    if(p->program.size()==0){
        return;
    }
    ca->highlighter->currentLine = p->program.at(p->startInstruction).sourceLocation.startline;
    ca->highlighter->rehighlight();
    cw->clear();
    //TODO: Something is wrong here
    //cw->print("start:"+std::to_string(p->program.at(p->startInstruction).sourceLocation.startline));
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
