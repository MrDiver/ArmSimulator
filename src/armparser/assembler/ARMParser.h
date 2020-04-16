
// Generated from H:/MyStuff/PrivateProjects/CPPProjects/ArmSimulator/src/armparser/grammar\ARMParser.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"


namespace assembler {


class  ARMParser : public antlr4::Parser {
public:
  enum {
    WSSTD = 1, EQ = 2, NE = 3, CS = 4, CC = 5, MI = 6, PL = 7, VS = 8, VC = 9, 
    HI = 10, LS = 11, GE = 12, LT = 13, GT = 14, LE = 15, AL = 16, UPDATEFLAG = 17, 
    BYTEACCESS = 18, PRIVILEGE = 19, DOUBLEWORD = 20, HALFWORD = 21, SIGNEDHALFWORD = 22, 
    SIGNEDBYTE = 23, AND = 24, EOR = 25, SUB = 26, RSB = 27, ADD = 28, ADC = 29, 
    SBC = 30, RSC = 31, TST = 32, TEQ = 33, CMP = 34, CMN = 35, ORR = 36, 
    MOV = 37, BIC = 38, MVN = 39, MUL = 40, MLA = 41, SMULL = 42, UMULL = 43, 
    SMLAL = 44, UMLAL = 45, LDR = 46, STR = 47, Branch = 48, BranchAndLink = 49, 
    BLX = 50, BX = 51, BXJ = 52, LABEL = 53, LOCALLABEL = 54, COLON = 55, 
    SPACE = 56, R0 = 57, R1 = 58, R2 = 59, R3 = 60, R4 = 61, R5 = 62, R6 = 63, 
    R7 = 64, R8 = 65, R9 = 66, R10 = 67, R11 = 68, R12 = 69, R13 = 70, R14 = 71, 
    R15 = 72, LSLI = 73, LSRI = 74, ASRI = 75, RORI = 76, RRXI = 77, HASH = 78, 
    HEX = 79, NUMBER = 80, WSPARAM = 81, NEWLINE = 82, COMMA = 83, LBRACKET = 84, 
    RBRACKET = 85, SPECIALRBRACKET = 86, LABELREF = 87
  };

  enum {
    RuleCompilationUnit = 0, RuleProgram = 1, RuleStatement = 2, RuleInstruction = 3, 
    RuleCond = 4, RuleReg = 5, RuleImmediate = 6, RuleLabel = 7
  };

  ARMParser(antlr4::TokenStream *input);
  ~ARMParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class CompilationUnitContext;
  class ProgramContext;
  class StatementContext;
  class InstructionContext;
  class CondContext;
  class RegContext;
  class ImmediateContext;
  class LabelContext; 

  class  CompilationUnitContext : public antlr4::ParserRuleContext {
  public:
    CompilationUnitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ProgramContext *program();
    antlr4::tree::TerminalNode *EOF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CompilationUnitContext* compilationUnit();

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgramContext* program();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InstructionContext *instruction();
    LabelContext *label();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class  InstructionContext : public antlr4::ParserRuleContext {
  public:
    InstructionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *SPACE();
    std::vector<RegContext *> reg();
    RegContext* reg(size_t i);
    antlr4::tree::TerminalNode *COMMA();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InstructionContext* instruction();

  class  CondContext : public antlr4::ParserRuleContext {
  public:
    CondContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EQ();
    antlr4::tree::TerminalNode *NE();
    antlr4::tree::TerminalNode *CS();
    antlr4::tree::TerminalNode *CC();
    antlr4::tree::TerminalNode *MI();
    antlr4::tree::TerminalNode *PL();
    antlr4::tree::TerminalNode *VS();
    antlr4::tree::TerminalNode *VC();
    antlr4::tree::TerminalNode *HI();
    antlr4::tree::TerminalNode *LS();
    antlr4::tree::TerminalNode *GE();
    antlr4::tree::TerminalNode *LT();
    antlr4::tree::TerminalNode *GT();
    antlr4::tree::TerminalNode *LE();
    antlr4::tree::TerminalNode *AL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CondContext* cond();

  class  RegContext : public antlr4::ParserRuleContext {
  public:
    RegContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *R0();
    antlr4::tree::TerminalNode *R1();
    antlr4::tree::TerminalNode *R2();
    antlr4::tree::TerminalNode *R3();
    antlr4::tree::TerminalNode *R4();
    antlr4::tree::TerminalNode *R5();
    antlr4::tree::TerminalNode *R6();
    antlr4::tree::TerminalNode *R7();
    antlr4::tree::TerminalNode *R8();
    antlr4::tree::TerminalNode *R9();
    antlr4::tree::TerminalNode *R10();
    antlr4::tree::TerminalNode *R11();
    antlr4::tree::TerminalNode *R12();
    antlr4::tree::TerminalNode *R13();
    antlr4::tree::TerminalNode *R14();
    antlr4::tree::TerminalNode *R15();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RegContext* reg();

  class  ImmediateContext : public antlr4::ParserRuleContext {
  public:
    ImmediateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HASH();
    antlr4::tree::TerminalNode *HEX();
    antlr4::tree::TerminalNode *NUMBER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ImmediateContext* immediate();

  class  LabelContext : public antlr4::ParserRuleContext {
  public:
    LabelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *LOCALLABEL();
    antlr4::tree::TerminalNode *LABEL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LabelContext* label();


private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

}  // namespace assembler
