#include "processor.h"

#include <armprocessor/instructions/Instruction.h>
#include "armprocessor/architecture/CurrentProgramStatusRegister.h"
#include "armprocessor/architecture/ALU.h"
#include <iostream>
Processor::Processor(){
    cpsr = new CPSR();
    alu = new ALU(cpsr);
}

Processor::~Processor() {
    delete cpsr;
    delete alu;
}

void Processor::load(std::vector<Instruction> program,std::map<std::string,unsigned int> labels,std::string startLabel){
    this->labels = labels;
    this->program = program;
    this->isDone = false;
    this->startInstruction = -1;
//    for(Instruction i: program) {
//        std::cout << std::to_string(i.sourceLocation.startline)+" "+i.spelling << std::endl;
//    }

//    for(std::pair<std::string,unsigned int> l : labels){
//        std::cout << std::to_string(l.second)+":"+l.first << std::endl;
//    }

    for(std::pair<std::string,unsigned int> l: this->labels){
//        std::cout << "STARTING INSTRUCTION " << l.first << l.second << " " << l.first.compare(startLabel);
        if(l.first.compare(startLabel)==0){
            startInstruction = l.second;
        }
    }
}
//returns a negative pc if the instruction was not found
int Processor::tick(){
    //fetch
    std::cout << "isDone "<< isDone << std::endl;
    std::cout << "regs[15] " << regs[15] << std::endl;
    std::cout << "program size " << program.size() << std::endl;

    if(isDone)
        return regs[15];
    if(regs[15]>=0 && regs[15]<program.size()){
        //fetch and decode
        Instruction inst = program.at(regs[15]);
        std::cout << "fetching" << std::endl;
        regs[15]= regs[15]+1;
        std::cout << "incr pc" << std::endl;
        inst.execute(this);
        std::cout << "executed" << std::endl;
        return 0;
    }else{
        std::cout << "pc no valid instruction" << std::endl;
        isDone = true;
        return -regs[15];
    }
}

unsigned int Processor::getCurrentLine(){
    if(regs[15]>=0 && regs[15]<program.size()){
        //fetch and decode
        Instruction inst = program.at(regs[15]);
        return inst.sourceLocation.startline;
    }else{
        isDone = true;
        return -1;
    }
}

void Processor::reset(){
    cpsr->reset();
    alu->reset();

    for(unsigned int i = 0; i < 16; i++){
        regs[i]=0;
    }
    regs[15] = startInstruction;
    for(unsigned int i = 0; i < sizeof(memory)/sizeof(unsigned int); i++){
        memory[i]=0;
    }
    isDone = false;
}
