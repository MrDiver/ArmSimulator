
// Generated from H:/MyStuff/PrivateProjects/CPPProjects/ArmSimulator/src/armparser/grammar\ARMParser.g4 by ANTLR 4.8

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

  virtual void enterCond(ARMParser::CondContext *ctx) = 0;
  virtual void exitCond(ARMParser::CondContext *ctx) = 0;

  virtual void enterReg(ARMParser::RegContext *ctx) = 0;
  virtual void exitReg(ARMParser::RegContext *ctx) = 0;

  virtual void enterImmediate(ARMParser::ImmediateContext *ctx) = 0;
  virtual void exitImmediate(ARMParser::ImmediateContext *ctx) = 0;

  virtual void enterLabel(ARMParser::LabelContext *ctx) = 0;
  virtual void exitLabel(ARMParser::LabelContext *ctx) = 0;


};

}  // namespace assembler
