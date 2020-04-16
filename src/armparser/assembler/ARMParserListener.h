
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


};

}  // namespace assembler
