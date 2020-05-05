
// Generated from H:/MyStuff/PrivateProjects/CPPProjects/ArmSimulator/src/asmeditor/AsmEditor/armparser/grammar\ARMParser.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "ARMParserVisitor.h"


namespace assembler {

/**
 * This class provides an empty implementation of ARMParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  ARMParserBaseVisitor : public ARMParserVisitor {
public:

  virtual antlrcpp::Any visitCompilationUnit(ARMParser::CompilationUnitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProgram(ARMParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatement(ARMParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInstruction(ARMParser::InstructionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNop(ARMParser::NopContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCond(ARMParser::CondContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReg(ARMParser::RegContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitImmediate(ARMParser::ImmediateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLabel(ARMParser::LabelContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGlobalSection(ARMParser::GlobalSectionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDataSection(ARMParser::DataSectionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTextSection(ARMParser::TextSectionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariable(ARMParser::VariableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDatatype(ARMParser::DatatypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitValue(ARMParser::ValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBranchToLabel(ARMParser::BranchToLabelContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBranchToRegister(ARMParser::BranchToRegisterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMoveOp(ARMParser::MoveOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCompareOp(ARMParser::CompareOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArithmeticOp(ARMParser::ArithmeticOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOp2immediate(ARMParser::Op2immediateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOp2register(ARMParser::Op2registerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOp2inlineShift(ARMParser::Op2inlineShiftContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShiftByImmediate(ARMParser::ShiftByImmediateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShiftByRegister(ARMParser::ShiftByRegisterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRotateWithExtend(ARMParser::RotateWithExtendContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShiftopcode(ARMParser::ShiftopcodeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNormalMul(ARMParser::NormalMulContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLongMul(ARMParser::LongMulContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFirstLoadStore(ARMParser::FirstLoadStoreContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSecondLoadStore(ARMParser::SecondLoadStoreContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPushPopMakro(ARMParser::PushPopMakroContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNormalAddressing(ARMParser::NormalAddressingContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPreIndexedAddressing(ARMParser::PreIndexedAddressingContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPostIndexedAddressing(ARMParser::PostIndexedAddressingContext *ctx) override {
    return visitChildren(ctx);
  }


};

}  // namespace assembler
