#ifndef PROCESSOR_H
#define PROCESSOR_H

#include <vector>
#include <map>
#include "armprocessor/architecture/CurrentProgramStatusRegister.h"
#include "armprocessor/architecture/ALU.h"
#include "armprocessor/instructions/Instruction.h"
class Processor
{
public:
    Processor();
    ~Processor();
    CPSR* cpsr;
    ALU* alu;
    unsigned int regs[16];
    unsigned int memory[1024];
    //std::vector<std::pair<std::string,SourceLocation>> errors;
    std::vector<Instruction> program;
    std::vector<std::pair<std::string,SourceLocation>> errors;
    std::map<std::string,unsigned int> labels;
    unsigned int startInstruction = 0;
    void load(std::vector<Instruction> program,std::map<std::string,unsigned int> labels,std::string startLabel);
    int tick();
    void reset();
    unsigned int getCurrentLine();
    bool isDone = false;
};

#endif // PROCESSOR_H
