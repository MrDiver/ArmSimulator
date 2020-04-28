//
// Created by Prodigy on 18.04.2020.
//

#ifndef ASMEDITOR_INSTRUCTION_H
#define ASMEDITOR_INSTRUCTION_H
#include <string>
#include <functional>
#include <bitset>
#include <iostream>
#include <utility>
#include "SourceLocation.h"
#include "Condition.h"
#include "armprocessor/architecture/Aluops.h"

class Processor;

#define ShiftOperand std::function<unsigned int (Processor*)>
#define Routine std::function<void (Processor*)>
class Instruction{
public:
    Condition cond;
    Routine routine = [](Processor* p){};
    SourceLocation sourceLocation;
    std::string spelling;

    Instruction(Condition cond, Routine routine, const SourceLocation &sourceLocation,
                std::string spelling) : cond(cond), routine(std::move(routine)), sourceLocation(sourceLocation),
                                               spelling(std::move(spelling))
    {
        std::bitset<32> c(cond);
        c = c<<28;
        bits = bits | c;
    }

    void execute(Processor* p);
    std::bitset<32> bits;
};

namespace Set{
    enum Opcode{
        MOV,MVN,
        CMP,CMN,TST,TEQ,
        ADD,SUB,RSB,ADC,SBC,RSC,AND,BIC,EOR,ORR,
        B,BL,BX
    };
    Instruction moveOp(Opcode op,Condition cond,bool updateFlags,unsigned int rd,const ShiftOperand& rm,SourceLocation sl,std::string spelling ="");
    Instruction compareOp(Opcode op,Condition cond,unsigned int rn,const ShiftOperand& rm,SourceLocation sl,std::string spelling ="");
    Instruction arithmeticOp(Opcode op, Condition cond, bool updateFlags, unsigned int rd,unsigned int rn, const ShiftOperand &rm, SourceLocation sl,std::string spelling);
    Instruction branchToLabel(Opcode op, Condition cond,std::string label, SourceLocation sl,std::string spelling);
    Instruction branchToRegister(Opcode op, Condition cond,unsigned int rd, SourceLocation sl,std::string spelling);

    namespace shifter{
        ShiftOperand immediate(unsigned int imm);
        ShiftOperand reg(unsigned int index);
        ShiftOperand inlineShift(unsigned int index,Aluops shiftop,unsigned val);
        ShiftOperand inlineShiftReg(unsigned int index,Aluops shiftop,unsigned int reg);
    }
}

#endif //ASMEDITOR_INSTRUCTION_H
