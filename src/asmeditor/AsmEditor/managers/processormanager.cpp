#include "processormanager.h"
#include "antlr4-runtime.h"
#include <set>
#include "highlighter.h"
using namespace antlr4;
using namespace assembler;

ProcessorManager::ProcessorManager(CodeArea* ca,ConsoleWindow* cw,QListWidget* errorList) :ca(ca),cw(cw),errorList(errorList)
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

void ProcessorManager::lint(){
        ANTLRInputStream input(ca->toPlainText().toStdString());
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
    while(!p->isDone){
        stepProgram();
    }
}
void ProcessorManager::stepProgram(){
    p->tick();
    if(p->regs[15]<0|| p->regs[15]>=p->program.size())
    {
        return;
    }
    ca->highlighter->currentLine = p->program.at(p->regs[15]).sourceLocation.startline;
    ca->highlighter->rehighlight();
}
void ProcessorManager::resetProgram(){
    p->reset();
    ca->highlighter->currentLine = p->program.at(p->startInstruction).sourceLocation.startline;
    ca->highlighter->rehighlight();
    //TODO: Something is wrong here
    //cw->print("start:"+std::to_string(p->program.at(p->startInstruction).sourceLocation.startline));
}
