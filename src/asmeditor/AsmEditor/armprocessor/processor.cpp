#include "processor.h"

#include <armprocessor/instructions/Instruction.h>
#include "armprocessor/architecture/CurrentProgramStatusRegister.h"
#include "armprocessor/architecture/ALU.h"
#include <iostream>
Processor::Processor(){
    cpsr = new CPSR();
    alu = new ALU(cpsr);
    this-> dataToAddress = std::map<std::string,unsigned int>();
}

Processor::~Processor() {
    delete cpsr;
    delete alu;
}

void Processor::load(std::vector<Instruction> program,std::map<std::string,unsigned int> labels,std::string startLabel,std::map<std::string,std::vector<unsigned int>> dataToValue,std::map<std::string,std::string> dataToReference){
    this->labels = labels;
    this->program = program;
    this->isDone = false;
    this->startInstruction = -1;
    this->dataToValue = dataToValue;
    this->dataToReference = dataToReference;
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
    //std::cout << "isDone "<< isDone << std::endl;
    //std::cout << "regs[15] " << regs[15] << std::endl;
    //std::cout << "program size " << program.size() << std::endl;

    if(isDone)
        return regs[15];
    if(regs[15]>=0 && regs[15]<program.size()){
        //fetch and decode
        Instruction inst = program.at(regs[15]);
        //std::cout << "fetching" << std::endl;
        regs[15]= regs[15]+1;
        //std::cout << "incr pc" << std::endl;
        inst.execute(this);
        //std::cout << "executed" << std::endl;
        return 0;
    }else{
        std::cout << "pc no valid instruction" << std::endl;
        //isDone = true;
        return -regs[15];
    }
}

unsigned int Processor::getCurrentLine(){
    if(regs[15]>=0 && regs[15]<program.size()){
        //fetch and decode
        Instruction inst = program.at(regs[15]);
        return inst.sourceLocation.startline;
    }else{
        //isDone = true;
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
    this->regs[13] = 4*(MEMSIZE>>1);
    for(unsigned int i = 0; i < sizeof(memory)/sizeof(unsigned int); i++){
        memory[i]=0;
    }
    isDone = false;

    for(unsigned int i = 0; i < program.size(); i++){
        //TODO: find error in conversion
        //std::cout << "Instruction" << program.at(i).bits << std::endl;
        memory[i] = (unsigned int)program.at(i).bits.to_ulong();
    }
    unsigned int i = 0;
    for(std::pair<std::string,std::vector<unsigned int>> pair : dataToValue){
        unsigned int addr = MEMSIZE-i-1;
        std::string label = pair.first;
        label = label.substr(0,label.length()-1);
        std::vector<unsigned int> values = pair.second;
        //std::cout << label << std::endl;
        for(int j = 0; j < (int)values.size(); j++){
            //std::cout << values.at(j) << ",";
            memory[addr-(values.size()-1-j)] = values.at(j);
            i++;
        }
        addr = MEMSIZE-i;
        //std::cout << std::endl;
        dataToAddress.emplace(std::pair<std::string,unsigned int>(label,addr));
        i++;
    }

    unsigned int endofprogram = program.size();
    i=0;
    for(std::pair<std::string,std::string> pair: dataToReference){
        unsigned int addressTo = dataToAddress.at(pair.second)*4;
        memory[endofprogram+i] = addressTo;
        std::string label = pair.first;
        label = label.substr(0,label.size()-1);
        dataToAddress.emplace(label,(endofprogram+i));
        i++;
    }

    for(std::pair<std::string,unsigned int> pair : dataToAddress){
        std::cout << pair.first << ":"<< pair.second << std::endl;
    }
}
