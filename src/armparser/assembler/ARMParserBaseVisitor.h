
// Generated from H:/MyStuff/PrivateProjects/CPPProjects/ArmSimulator/src/armparser/grammar\ARMParser.g4 by ANTLR 4.8

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


};

}  // namespace assembler
