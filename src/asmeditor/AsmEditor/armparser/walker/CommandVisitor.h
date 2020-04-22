//
// Created by Prodigy on 17.04.2020.
//

#ifndef ARMPARSER_COMMANDVISITOR_H
#define ARMPARSER_COMMANDVISITOR_H

#include "ARMParserBaseVisitor.h"
#include <vector>
#include "armprocessor/instructions/Instruction.h"
#include <string>
class CommandVisitor : public assembler::ARMParserBaseVisitor{
public:
    std::vector<Instruction> program;
    std::map<std::string,unsigned int> labels;

    //data_processing_instruction
    antlrcpp::Any visitMoveOp(assembler::ARMParser::MoveOpContext *ctx) override;

    //shifter_operand
    antlrcpp::Any visitOp2immediate(assembler::ARMParser::Op2immediateContext *ctx) override;
    antlrcpp::Any visitOp2register(assembler::ARMParser::Op2registerContext *ctx) override;
    antlrcpp::Any visitOp2inlineShift(assembler::ARMParser::Op2inlineShiftContext *ctx) override;
    //shift_operation
    antlrcpp::Any visitShiftByImmediate(assembler::ARMParser::ShiftByImmediateContext *ctx) override;
    antlrcpp::Any visitShiftByRegister(assembler::ARMParser::ShiftByRegisterContext *ctx) override;
    antlrcpp::Any visitRotateWithExtend(assembler::ARMParser::RotateWithExtendContext *ctx) override;

    antlrcpp::Any visitShiftopcode(assembler::ARMParser::ShiftopcodeContext *ctx) override;

    antlrcpp::Any visitImmediate(assembler::ARMParser::ImmediateContext *ctx) override;

    antlrcpp::Any visitReg(assembler::ARMParser::RegContext *ctx) override;
    antlrcpp::Any visitCond(assembler::ARMParser::CondContext *ctx) override;
    antlrcpp::Any visitLabel(assembler::ARMParser::LabelContext *ctx) override;
};


#endif //ARMPARSER_COMMANDVISITOR_H
