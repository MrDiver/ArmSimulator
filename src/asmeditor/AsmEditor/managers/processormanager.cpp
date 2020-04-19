#include "processormanager.h"
#include "antlr4-runtime.h"

using namespace antlr4;
using namespace assembler;

ProcessorManager::ProcessorManager(CodeArea* ca,ConsoleWindow* cw,QListWidget* errorList) :ca(ca),cw(cw),errorList(errorList)
{
    p = new Processor;
    cw->print("Initialized Successfully");
    currentLines = new QSet<int>;
}

ProcessorManager::~ProcessorManager()
{
    delete p;
    delete currentLines;
}

QSet<int>* ProcessorManager::getActiveCodelines(){
    return currentLines;
}

void ProcessorManager::lint(){
        ANTLRInputStream input(ca->toPlainText().toStdString());
        ARMLexer lexer(&input);
        CommonTokenStream tokens(&lexer);
        ARMParser parser(&tokens);
        tree::ParseTree *tree = parser.compilationUnit();
        CommandVisitor cv;
        cv.visit(tree);
        std::vector<Instruction> program = cv.program;
        cw->clear();
        cw->print("Output:");
        cw->print(std::to_string(program.size()));
        currentLines->clear();
        for(Instruction i: program) {
            currentLines->insert(i.sourceLocation.startline);
            cw->print(i.spelling);
            cw->print(std::to_string(i.sourceLocation.startline));
        }
}
