
// Generated from H:/MyStuff/PrivateProjects/CPPProjects/ArmSimulator/src/asmeditor/AsmEditor/armparser/grammar\ARMParser.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "ARMParserListener.h"


namespace assembler {

/**
 * This class provides an empty implementation of ARMParserListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  ARMParserBaseListener : public ARMParserListener {
public:

  virtual void enterCompilationUnit(ARMParser::CompilationUnitContext * /*ctx*/) override { }
  virtual void exitCompilationUnit(ARMParser::CompilationUnitContext * /*ctx*/) override { }

  virtual void enterProgram(ARMParser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(ARMParser::ProgramContext * /*ctx*/) override { }

  virtual void enterStatement(ARMParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(ARMParser::StatementContext * /*ctx*/) override { }

  virtual void enterInstruction(ARMParser::InstructionContext * /*ctx*/) override { }
  virtual void exitInstruction(ARMParser::InstructionContext * /*ctx*/) override { }

  virtual void enterNop(ARMParser::NopContext * /*ctx*/) override { }
  virtual void exitNop(ARMParser::NopContext * /*ctx*/) override { }

  virtual void enterCond(ARMParser::CondContext * /*ctx*/) override { }
  virtual void exitCond(ARMParser::CondContext * /*ctx*/) override { }

  virtual void enterReg(ARMParser::RegContext * /*ctx*/) override { }
  virtual void exitReg(ARMParser::RegContext * /*ctx*/) override { }

  virtual void enterImmediate(ARMParser::ImmediateContext * /*ctx*/) override { }
  virtual void exitImmediate(ARMParser::ImmediateContext * /*ctx*/) override { }

  virtual void enterLabel(ARMParser::LabelContext * /*ctx*/) override { }
  virtual void exitLabel(ARMParser::LabelContext * /*ctx*/) override { }

  virtual void enterGlobalSection(ARMParser::GlobalSectionContext * /*ctx*/) override { }
  virtual void exitGlobalSection(ARMParser::GlobalSectionContext * /*ctx*/) override { }

  virtual void enterDataSection(ARMParser::DataSectionContext * /*ctx*/) override { }
  virtual void exitDataSection(ARMParser::DataSectionContext * /*ctx*/) override { }

  virtual void enterTextSection(ARMParser::TextSectionContext * /*ctx*/) override { }
  virtual void exitTextSection(ARMParser::TextSectionContext * /*ctx*/) override { }

  virtual void enterVariable(ARMParser::VariableContext * /*ctx*/) override { }
  virtual void exitVariable(ARMParser::VariableContext * /*ctx*/) override { }

  virtual void enterDatatype(ARMParser::DatatypeContext * /*ctx*/) override { }
  virtual void exitDatatype(ARMParser::DatatypeContext * /*ctx*/) override { }

  virtual void enterValue(ARMParser::ValueContext * /*ctx*/) override { }
  virtual void exitValue(ARMParser::ValueContext * /*ctx*/) override { }

  virtual void enterBranchToLabel(ARMParser::BranchToLabelContext * /*ctx*/) override { }
  virtual void exitBranchToLabel(ARMParser::BranchToLabelContext * /*ctx*/) override { }

  virtual void enterBranchToRegister(ARMParser::BranchToRegisterContext * /*ctx*/) override { }
  virtual void exitBranchToRegister(ARMParser::BranchToRegisterContext * /*ctx*/) override { }

  virtual void enterMoveOp(ARMParser::MoveOpContext * /*ctx*/) override { }
  virtual void exitMoveOp(ARMParser::MoveOpContext * /*ctx*/) override { }

  virtual void enterCompareOp(ARMParser::CompareOpContext * /*ctx*/) override { }
  virtual void exitCompareOp(ARMParser::CompareOpContext * /*ctx*/) override { }

  virtual void enterArithmeticOp(ARMParser::ArithmeticOpContext * /*ctx*/) override { }
  virtual void exitArithmeticOp(ARMParser::ArithmeticOpContext * /*ctx*/) override { }

  virtual void enterOp2immediate(ARMParser::Op2immediateContext * /*ctx*/) override { }
  virtual void exitOp2immediate(ARMParser::Op2immediateContext * /*ctx*/) override { }

  virtual void enterOp2register(ARMParser::Op2registerContext * /*ctx*/) override { }
  virtual void exitOp2register(ARMParser::Op2registerContext * /*ctx*/) override { }

  virtual void enterOp2inlineShift(ARMParser::Op2inlineShiftContext * /*ctx*/) override { }
  virtual void exitOp2inlineShift(ARMParser::Op2inlineShiftContext * /*ctx*/) override { }

  virtual void enterShiftByImmediate(ARMParser::ShiftByImmediateContext * /*ctx*/) override { }
  virtual void exitShiftByImmediate(ARMParser::ShiftByImmediateContext * /*ctx*/) override { }

  virtual void enterShiftByRegister(ARMParser::ShiftByRegisterContext * /*ctx*/) override { }
  virtual void exitShiftByRegister(ARMParser::ShiftByRegisterContext * /*ctx*/) override { }

  virtual void enterRotateWithExtend(ARMParser::RotateWithExtendContext * /*ctx*/) override { }
  virtual void exitRotateWithExtend(ARMParser::RotateWithExtendContext * /*ctx*/) override { }

  virtual void enterShiftopcode(ARMParser::ShiftopcodeContext * /*ctx*/) override { }
  virtual void exitShiftopcode(ARMParser::ShiftopcodeContext * /*ctx*/) override { }

  virtual void enterNormalMul(ARMParser::NormalMulContext * /*ctx*/) override { }
  virtual void exitNormalMul(ARMParser::NormalMulContext * /*ctx*/) override { }

  virtual void enterLongMul(ARMParser::LongMulContext * /*ctx*/) override { }
  virtual void exitLongMul(ARMParser::LongMulContext * /*ctx*/) override { }

  virtual void enterFirstLoadStore(ARMParser::FirstLoadStoreContext * /*ctx*/) override { }
  virtual void exitFirstLoadStore(ARMParser::FirstLoadStoreContext * /*ctx*/) override { }

  virtual void enterSecondLoadStore(ARMParser::SecondLoadStoreContext * /*ctx*/) override { }
  virtual void exitSecondLoadStore(ARMParser::SecondLoadStoreContext * /*ctx*/) override { }

  virtual void enterPushPopMakro(ARMParser::PushPopMakroContext * /*ctx*/) override { }
  virtual void exitPushPopMakro(ARMParser::PushPopMakroContext * /*ctx*/) override { }

  virtual void enterNormalAddressing(ARMParser::NormalAddressingContext * /*ctx*/) override { }
  virtual void exitNormalAddressing(ARMParser::NormalAddressingContext * /*ctx*/) override { }

  virtual void enterPreIndexedAddressing(ARMParser::PreIndexedAddressingContext * /*ctx*/) override { }
  virtual void exitPreIndexedAddressing(ARMParser::PreIndexedAddressingContext * /*ctx*/) override { }

  virtual void enterPostIndexedAddressing(ARMParser::PostIndexedAddressingContext * /*ctx*/) override { }
  virtual void exitPostIndexedAddressing(ARMParser::PostIndexedAddressingContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

}  // namespace assembler
