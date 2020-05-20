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
    std::map<std::string,std::vector<unsigned int>> dataToValue;
    std::map<std::string,std::string> dataToReference;
    std::string startLabel = "main";
    //sections
    antlrcpp::Any visitGlobalSection(assembler::ARMParser::GlobalSectionContext *ctx) override;

    //data_processing_instruction
    antlrcpp::Any visitMoveOp(assembler::ARMParser::MoveOpContext *ctx) override;
    antlrcpp::Any visitCompareOp(assembler::ARMParser::CompareOpContext *ctx) override;
    antlrcpp::Any visitArithmeticOp(assembler::ARMParser::ArithmeticOpContext *ctx) override;
    antlrcpp::Any visitShiftOp(assembler::ARMParser::ShiftOpContext *ctx) override;

    //branch_instruction
    antlrcpp::Any visitBranchToLabel(assembler::ARMParser::BranchToLabelContext *ctx) override;
    antlrcpp::Any visitBranchToRegister(assembler::ARMParser::BranchToRegisterContext *ctx) override;

    //load_and_store
    antlrcpp::Any visitFirstLoadStore(assembler::ARMParser::FirstLoadStoreContext *ctx) override;
    antlrcpp::Any visitSecondLoadStore(assembler::ARMParser::SecondLoadStoreContext *ctx) override;
    antlrcpp::Any visitPushPopMakro(assembler::ARMParser::PushPopMakroContext *ctx) override;

    antlrcpp::Any visitNormalAddressing(assembler::ARMParser::NormalAddressingContext *ctx) override;
    antlrcpp::Any visitPreIndexedAddressing(assembler::ARMParser::PreIndexedAddressingContext *ctx) override;
    antlrcpp::Any visitPostIndexedAddressing(assembler::ARMParser::PostIndexedAddressingContext *ctx) override;

    //variables
    antlrcpp::Any visitVariable(assembler::ARMParser::VariableContext *ctx) override;
    antlrcpp::Any visitNumberVal(assembler::ARMParser::NumberValContext *ctx) override;
    antlrcpp::Any visitLabelVal(assembler::ARMParser::LabelValContext *ctx) override;
    antlrcpp::Any visitStringVal(assembler::ARMParser::StringValContext *ctx) override;
    antlrcpp::Any visitDatatype(assembler::ARMParser::DatatypeContext *ctx) override;
    antlrcpp::Any visitNumber(assembler::ARMParser::NumberContext *ctx) override;

    //multiplication
    antlrcpp::Any visitNormalMul(assembler::ARMParser::NormalMulContext *ctx) override;

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
