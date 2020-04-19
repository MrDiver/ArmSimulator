
// Generated from H:/MyStuff/PrivateProjects/CPPProjects/TEST - Kopie/grammar\ARMParser.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "ARMParser.h"


namespace assembler {

/**
 * This interface defines an abstract listener for a parse tree produced by ARMParser.
 */
class  ARMParserListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterCompilationUnit(ARMParser::CompilationUnitContext *ctx) = 0;
  virtual void exitCompilationUnit(ARMParser::CompilationUnitContext *ctx) = 0;

  virtual void enterProgram(ARMParser::ProgramContext *ctx) = 0;
  virtual void exitProgram(ARMParser::ProgramContext *ctx) = 0;

  virtual void enterStatement(ARMParser::StatementContext *ctx) = 0;
  virtual void exitStatement(ARMParser::StatementContext *ctx) = 0;

  virtual void enterInstruction(ARMParser::InstructionContext *ctx) = 0;
  virtual void exitInstruction(ARMParser::InstructionContext *ctx) = 0;

  virtual void enterNop(ARMParser::NopContext *ctx) = 0;
  virtual void exitNop(ARMParser::NopContext *ctx) = 0;

  virtual void enterCond(ARMParser::CondContext *ctx) = 0;
  virtual void exitCond(ARMParser::CondContext *ctx) = 0;

  virtual void enterReg(ARMParser::RegContext *ctx) = 0;
  virtual void exitReg(ARMParser::RegContext *ctx) = 0;

  virtual void enterImmediate(ARMParser::ImmediateContext *ctx) = 0;
  virtual void exitImmediate(ARMParser::ImmediateContext *ctx) = 0;

  virtual void enterLabel(ARMParser::LabelContext *ctx) = 0;
  virtual void exitLabel(ARMParser::LabelContext *ctx) = 0;

  virtual void enterBranchToLabel(ARMParser::BranchToLabelContext *ctx) = 0;
  virtual void exitBranchToLabel(ARMParser::BranchToLabelContext *ctx) = 0;

  virtual void enterBranchToRegister(ARMParser::BranchToRegisterContext *ctx) = 0;
  virtual void exitBranchToRegister(ARMParser::BranchToRegisterContext *ctx) = 0;

  virtual void enterMoveOp(ARMParser::MoveOpContext *ctx) = 0;
  virtual void exitMoveOp(ARMParser::MoveOpContext *ctx) = 0;

  virtual void enterCompareOp(ARMParser::CompareOpContext *ctx) = 0;
  virtual void exitCompareOp(ARMParser::CompareOpContext *ctx) = 0;

  virtual void enterArithmeticOp(ARMParser::ArithmeticOpContext *ctx) = 0;
  virtual void exitArithmeticOp(ARMParser::ArithmeticOpContext *ctx) = 0;

  virtual void enterOp2immediate(ARMParser::Op2immediateContext *ctx) = 0;
  virtual void exitOp2immediate(ARMParser::Op2immediateContext *ctx) = 0;

  virtual void enterOp2register(ARMParser::Op2registerContext *ctx) = 0;
  virtual void exitOp2register(ARMParser::Op2registerContext *ctx) = 0;

  virtual void enterOp2inlineShift(ARMParser::Op2inlineShiftContext *ctx) = 0;
  virtual void exitOp2inlineShift(ARMParser::Op2inlineShiftContext *ctx) = 0;

  virtual void enterShiftByImmediate(ARMParser::ShiftByImmediateContext *ctx) = 0;
  virtual void exitShiftByImmediate(ARMParser::ShiftByImmediateContext *ctx) = 0;

  virtual void enterShiftByRegister(ARMParser::ShiftByRegisterContext *ctx) = 0;
  virtual void exitShiftByRegister(ARMParser::ShiftByRegisterContext *ctx) = 0;

  virtual void enterRotateWithExtend(ARMParser::RotateWithExtendContext *ctx) = 0;
  virtual void exitRotateWithExtend(ARMParser::RotateWithExtendContext *ctx) = 0;

  virtual void enterShiftopcode(ARMParser::ShiftopcodeContext *ctx) = 0;
  virtual void exitShiftopcode(ARMParser::ShiftopcodeContext *ctx) = 0;

  virtual void enterNormalMul(ARMParser::NormalMulContext *ctx) = 0;
  virtual void exitNormalMul(ARMParser::NormalMulContext *ctx) = 0;

  virtual void enterLongMul(ARMParser::LongMulContext *ctx) = 0;
  virtual void exitLongMul(ARMParser::LongMulContext *ctx) = 0;

  virtual void enterFirstLoadStore(ARMParser::FirstLoadStoreContext *ctx) = 0;
  virtual void exitFirstLoadStore(ARMParser::FirstLoadStoreContext *ctx) = 0;

  virtual void enterSecondLoadStore(ARMParser::SecondLoadStoreContext *ctx) = 0;
  virtual void exitSecondLoadStore(ARMParser::SecondLoadStoreContext *ctx) = 0;

  virtual void enterPushPopMakro(ARMParser::PushPopMakroContext *ctx) = 0;
  virtual void exitPushPopMakro(ARMParser::PushPopMakroContext *ctx) = 0;

  virtual void enterNormalAddressing(ARMParser::NormalAddressingContext *ctx) = 0;
  virtual void exitNormalAddressing(ARMParser::NormalAddressingContext *ctx) = 0;

  virtual void enterPreIndexedAddressing(ARMParser::PreIndexedAddressingContext *ctx) = 0;
  virtual void exitPreIndexedAddressing(ARMParser::PreIndexedAddressingContext *ctx) = 0;

  virtual void enterPostIndexedAddressing(ARMParser::PostIndexedAddressingContext *ctx) = 0;
  virtual void exitPostIndexedAddressing(ARMParser::PostIndexedAddressingContext *ctx) = 0;


};

}  // namespace assembler
