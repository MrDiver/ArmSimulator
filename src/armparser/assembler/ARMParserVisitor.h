
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

    virtual antlrcpp::Any visitCond(ARMParser::CondContext *context) = 0;

    virtual antlrcpp::Any visitReg(ARMParser::RegContext *context) = 0;

    virtual antlrcpp::Any visitImmediate(ARMParser::ImmediateContext *context) = 0;

    virtual antlrcpp::Any visitLabel(ARMParser::LabelContext *context) = 0;


};

}  // namespace assembler
