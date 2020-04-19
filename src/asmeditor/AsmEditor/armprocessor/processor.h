#ifndef PROCESSOR_H
#define PROCESSOR_H

#include <vector>
#include <iostream>

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
    unsigned int regs[16]{};
    unsigned int memory[1024]{};
    std::vector<std::pair<std::string,SourceLocation>> errors;
    std::vector<Instruction> program;
    //void load();
};

#endif // PROCESSOR_H
