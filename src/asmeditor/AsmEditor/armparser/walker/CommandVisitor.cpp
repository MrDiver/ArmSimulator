//
// Created by Prodigy on 17.04.2020.
//

#include "CommandVisitor.h"
#include <functional>
#include <iostream>
SourceLocation toSL(antlr4::ParserRuleContext* ctx){
    return SourceLocation(ctx->getStart()->getLine(),ctx->getStart()->getCharPositionInLine(),ctx->getStop()->getLine(),ctx->getStop()->getCharPositionInLine());
}

antlrcpp::Any CommandVisitor::visitMoveOp(assembler::ARMParser::MoveOpContext *ctx){
    std::cout << "\n\n\n\n" << std::endl;
    Condition cond = Condition::AL;
    if(ctx->cond())
        cond = CommandVisitor::visit(ctx->cond()).as<Condition>();

    bool updateFlag = ctx->UPDATEFLAG()!=nullptr;
    Set::Opcode opcode;
    if(ctx->MOV())
        opcode = Set::Opcode::MOV;
    else
        opcode = Set::Opcode::MVN;

    if(!ctx->reg())
        return -1;
    if(!ctx->shifter_operand())
        return -1;

    unsigned int rd = CommandVisitor::visitReg(ctx->reg());
    if(rd == 16)
        return -1;

    antlrcpp::Any test = CommandVisitor::visit(ctx->shifter_operand());
    if(!test.is<ShiftOperand>())
        return -1;
    ShiftOperand op2 = test.as<ShiftOperand>();
    Instruction inst = Set::moveOp(opcode,cond,updateFlag,rd,op2,toSL(ctx),ctx->getText());
    program.push_back(inst);
    return inst;
}

/*==================
 *
 *  Shift operand
 *
 ===================*/

antlrcpp::Any CommandVisitor::visitOp2immediate(assembler::ARMParser::Op2immediateContext *ctx){
    std::cout << "visitOp2immediate" << std::endl;
    unsigned int op2 = CommandVisitor::visitImmediate(ctx->immediate());
    return Set::shifter::immediate(op2);
}
antlrcpp::Any CommandVisitor::visitOp2register(assembler::ARMParser::Op2registerContext *ctx){
    std::cout << "visitOp2Reg" << std::endl;
    unsigned int op2 = CommandVisitor::visitReg(ctx->reg());
    return Set::shifter::reg(op2);
}

antlrcpp::Any CommandVisitor::visitOp2inlineShift(assembler::ARMParser::Op2inlineShiftContext *ctx){
    std::cout << "visitOp2inlineShift" << std::endl;
    unsigned int op2 = CommandVisitor::visitReg(ctx->reg());

    antlrcpp::Any test = CommandVisitor::visit(ctx->shift_operation());
    if(!test.is<std::function<ShiftOperand (unsigned int)>>()){
        std::cerr << "Shift operation not found" << std::endl;
        return std::error_condition();
    }

    std::function<ShiftOperand (unsigned int)> tmp = test.as<std::function<ShiftOperand (unsigned int)>>();
    ShiftOperand shift_operation = tmp.operator()(op2);
    return shift_operation;
}

antlrcpp::Any CommandVisitor::visitShiftByImmediate(assembler::ARMParser::ShiftByImmediateContext *ctx){
    std::cout << "visitShiftByImmediate" << std::endl;
    Aluops shiftopcode = CommandVisitor::visitShiftopcode(ctx->shiftopcode());
    unsigned int imm = CommandVisitor::visit(ctx->immediate()).as<unsigned int>();
    return (std::function<ShiftOperand (unsigned int)>)[imm,shiftopcode](unsigned int index){return Set::shifter::inlineShift(index,shiftopcode,imm);};
}

antlrcpp::Any CommandVisitor::visitShiftByRegister(assembler::ARMParser::ShiftByRegisterContext *ctx){
    std::cout << "visitShiftByRegister" << std::endl;
    Aluops shiftopcode = CommandVisitor::visit(ctx->shiftopcode()).as<Aluops>();
    unsigned int rm = CommandVisitor::visit(ctx->reg()).as<unsigned int>();
    return (std::function<ShiftOperand (unsigned int)>)[rm,shiftopcode](unsigned int index){return Set::shifter::inlineShiftReg(index,shiftopcode,rm);};
}
antlrcpp::Any CommandVisitor::visitRotateWithExtend(assembler::ARMParser::RotateWithExtendContext */*ctx*/){
    std::cout << "visitRotateWithExtend" << std::endl;
    return (std::function<ShiftOperand (unsigned int)>)[](unsigned int index){return Set::shifter::inlineShift(index,Aluops::RRX,0);};
}

antlrcpp::Any CommandVisitor::visitShiftopcode(assembler::ARMParser::ShiftopcodeContext *ctx) {
    std::cout << "visitShiftopcode" << std::endl;
    if(ctx->LSLI())
        return Aluops::LSL;
    else if(ctx->LSRI())
        return Aluops::LSR;
    else if(ctx->ASRI())
        return Aluops::ASR;
    else if(ctx->RORI())
        return Aluops::ROR;

    std::cerr << "Error in CommandVisitor.cpp in visitShiftopcode" << std::endl;
    return nullptr;
}



antlrcpp::Any CommandVisitor::visitImmediate(assembler::ARMParser::ImmediateContext *ctx){
    std::cout << "visitImmediate" << std::endl;
    if(ctx->HEX()){
        return (unsigned int)std::stoul(ctx->HEX()->getText(), nullptr, 16);
    }else if(ctx->NUMBER()){
        return (unsigned int)std::stoul(ctx->NUMBER()->getText());
    }
    std::cerr << "no immediate value found" << std::endl;
    return (unsigned int)0;
}

antlrcpp::Any CommandVisitor::visitCond(assembler::ARMParser::CondContext *ctx){
    std::cout << "visitCond" << std::endl;
    if(ctx->EQ())
        return Condition::EQ;
    else if (ctx->NE())
        return Condition::NE;
    else if (ctx->CS())
        return Condition::CS;
    else if (ctx->CC())
        return Condition::CC;
    else if (ctx->MI())
        return Condition::MI;
    else if (ctx->PL())
        return Condition::PL;
    else if (ctx->VS())
        return Condition::VS;
    else if (ctx->VC())
        return Condition::VC;
    else if (ctx->HI())
        return Condition::HI;
    else if (ctx->LS())
        return Condition::LS;
    else if (ctx->GE())
        return Condition::GE;
    else if (ctx->LT())
        return Condition::LT;
    else if (ctx->GT())
        return Condition::GT;
    else if (ctx->LE())
        return Condition::LE;
    else if (ctx->AL())
        return Condition::AL;
    else
        return Condition::AL;
}

antlrcpp::Any CommandVisitor::visitReg(assembler::ARMParser::RegContext *ctx) {
    std::cout << "visitReg" << std::endl;
    unsigned int n = 16;
    if(ctx->R0())
        n=0;
    else if(ctx->R1())
        n=1;
    else if(ctx->R2())
        n=2;
    else if(ctx->R3())
        n=3;
    else if(ctx->R4())
        n=4;
    else if(ctx->R5())
        n=5;
    else if(ctx->R6())
        n=6;
    else if(ctx->R7())
        n=7;
    else if(ctx->R8())
        n=8;
    else if(ctx->R9())
        n=9;
    else if(ctx->R10())
        n=10;
    else if(ctx->R11())
        n=11;
    else if(ctx->R12())
        n=12;
    else if(ctx->R13())
        n=13;
    else if(ctx->R14())
        n=14;
    else if(ctx->R15())
        n=15;
    std::cout << "visitReg returning (unsigned int)" << n << std::endl;
    return n;
}

antlrcpp::Any CommandVisitor::visitLabel(assembler::ARMParser::LabelContext *ctx){
    std::cout << "visitLabel" << std::endl;
    std::string label = ctx->LABEL()->getText();
    std::cout << "got label text" << std::endl;
    label = label.substr(0,label.length()-1);
    std::cout << "made substring" << std::endl;
    labels.insert(std::make_pair(label,program.size()));
    std::cout << "inserted label" << std::endl;
    return label;
}
