
// Generated from H:/MyStuff/PrivateProjects/CPPProjects/ArmSimulator/src/armparser/grammar\ARMParser.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "ARMParser.h"


namespace assembler {

/**
 * This class defines an abstract visitor for a parse tree
 * produced by ARMParser.
 */
class  ARMParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by ARMParser.
   */
    virtual antlrcpp::Any visitCompilationUnit(ARMParser::CompilationUnitContext *context) = 0;

    virtual antlrcpp::Any visitProgram(ARMParser::ProgramContext *context) = 0;

    virtual antlrcpp::Any visitStatement(ARMParser::StatementContext *context) = 0;

    virtual antlrcpp::Any visitInstruction(ARMParser::InstructionContext *context) = 0;

    virtual antlrcpp::Any visitNop(ARMParser::NopContext *context) = 0;

    virtual antlrcpp::Any visitCond(ARMParser::CondContext *context) = 0;

    virtual antlrcpp::Any visitReg(ARMParser::RegContext *context) = 0;

    virtual antlrcpp::Any visitImmediate(ARMParser::ImmediateContext *context) = 0;

    virtual antlrcpp::Any visitLabel(ARMParser::LabelContext *context) = 0;

    virtual antlrcpp::Any visitBranchToLabel(ARMParser::BranchToLabelContext *context) = 0;

    virtual antlrcpp::Any visitBranchToRegister(ARMParser::BranchToRegisterContext *context) = 0;

    virtual antlrcpp::Any visitMoveOp(ARMParser::MoveOpContext *context) = 0;

    virtual antlrcpp::Any visitCompareOp(ARMParser::CompareOpContext *context) = 0;

    virtual antlrcpp::Any visitArithmeticOp(ARMParser::ArithmeticOpContext *context) = 0;

    virtual antlrcpp::Any visitOp2immediate(ARMParser::Op2immediateContext *context) = 0;

    virtual antlrcpp::Any visitOp2register(ARMParser::Op2registerContext *context) = 0;

    virtual antlrcpp::Any visitOp2inlineShift(ARMParser::Op2inlineShiftContext *context) = 0;

    virtual antlrcpp::Any visitShiftByImmediate(ARMParser::ShiftByImmediateContext *context) = 0;

    virtual antlrcpp::Any visitShiftByRegister(ARMParser::ShiftByRegisterContext *context) = 0;

    virtual antlrcpp::Any visitRotateWithExtend(ARMParser::RotateWithExtendContext *context) = 0;

    virtual antlrcpp::Any visitShiftopcode(ARMParser::ShiftopcodeContext *context) = 0;

    virtual antlrcpp::Any visitNormalMul(ARMParser::NormalMulContext *context) = 0;

    virtual antlrcpp::Any visitLongMul(ARMParser::LongMulContext *context) = 0;

    virtual antlrcpp::Any visitFirstLoadStore(ARMParser::FirstLoadStoreContext *context) = 0;

    virtual antlrcpp::Any visitSecondLoadStore(ARMParser::SecondLoadStoreContext *context) = 0;

    virtual antlrcpp::Any visitPushPopMakro(ARMParser::PushPopMakroContext *context) = 0;

    virtual antlrcpp::Any visitNormalAddressing(ARMParser::NormalAddressingContext *context) = 0;

    virtual antlrcpp::Any visitPreIndexedAddressing(ARMParser::PreIndexedAddressingContext *context) = 0;

    virtual antlrcpp::Any visitPostIndexedAddressing(ARMParser::PostIndexedAddressingContext *context) = 0;


};

}  // namespace assembler
