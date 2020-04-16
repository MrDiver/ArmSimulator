
// Generated from H:/MyStuff/PrivateProjects/CPPProjects/ArmSimulator/src/armparser/grammar\ARMParser.g4 by ANTLR 4.8

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


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

}  // namespace assembler
