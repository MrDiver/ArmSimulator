#include "processor.h"

#include <armprocessor/instructions/Instruction.h>
#include "armprocessor/architecture/CurrentProgramStatusRegister.h"
#include "armprocessor/architecture/ALU.h"
Processor::Processor(){
    cpsr = new CPSR();
    alu = new ALU(cpsr);
}

Processor::~Processor() {
    delete cpsr;
    delete alu;
}
