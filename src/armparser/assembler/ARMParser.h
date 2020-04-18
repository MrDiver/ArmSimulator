
// Generated from H:/MyStuff/PrivateProjects/CPPProjects/TEST - Kopie/grammar\ARMParser.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"


namespace assembler {


class  ARMParser : public antlr4::Parser {
public:
  enum {
    AND = 1, EOR = 2, SUB = 3, RSB = 4, ADD = 5, ADC = 6, SBC = 7, RSC = 8, 
    TST = 9, TEQ = 10, CMP = 11, CMN = 12, ORR = 13, MOV = 14, BIC = 15, 
    MVN = 16, MUL = 17, MLA = 18, SMULL = 19, UMULL = 20, SMLAL = 21, UMLAL = 22, 
    LDR = 23, STR = 24, PUSH = 25, POP = 26, FB = 27, BL = 28, BLX = 29, 
    BX = 30, BXJ = 31, NOP = 32, EQ = 33, NE = 34, CS = 35, CC = 36, MI = 37, 
    PL = 38, VS = 39, VC = 40, HI = 41, LS = 42, GE = 43, LT = 44, GT = 45, 
    LE = 46, AL = 47, UPDATEFLAG = 48, PRIVILEGE = 49, DOUBLEWORD = 50, 
    HALFWORD = 51, SIGNEDHALFWORD = 52, SIGNEDBYTE = 53, LABEL = 54, LOCALLABEL = 55, 
    SPACE = 56, TOSKIP = 57, NL = 58, R0 = 59, R1 = 60, R2 = 61, R3 = 62, 
    R4 = 63, R5 = 64, R6 = 65, R7 = 66, R8 = 67, R9 = 68, R10 = 69, R11 = 70, 
    R12 = 71, R13 = 72, R14 = 73, R15 = 74, LSLI = 75, LSRI = 76, ASRI = 77, 
    RORI = 78, RRXI = 79, HASH = 80, HEX = 81, NUMBER = 82, WSPARAM = 83, 
    NEWLINE = 84, COMMA = 85, LBRACKET = 86, RBRACKET = 87, LBRACE = 88, 
    RBRACE = 89, SPECIALRBRACKET = 90, LABELREF = 91
  };

  enum {
    RuleCompilationUnit = 0, RuleProgram = 1, RuleStatement = 2, RuleInstruction = 3, 
    RuleNop = 4, RuleCond = 5, RuleReg = 6, RuleImmediate = 7, RuleLabel = 8, 
    RuleBranch_instruction = 9, RuleData_processing_instruction = 10, RuleShifter_operand = 11, 
    RuleShift_operation = 12, RuleShiftopcode = 13, RuleMultiply_instruction = 14, 
    RuleLoad_store_instruction = 15, RuleAddressing_mode = 16
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
  class NopContext;
  class CondContext;
  class RegContext;
  class ImmediateContext;
  class LabelContext;
  class Branch_instructionContext;
  class Data_processing_instructionContext;
  class Shifter_operandContext;
  class Shift_operationContext;
  class ShiftopcodeContext;
  class Multiply_instructionContext;
  class Load_store_instructionContext;
  class Addressing_modeContext; 

  class  CompilationUnitContext : public antlr4::ParserRuleContext {
  public:
    CompilationUnitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    ProgramContext *program();

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
    antlr4::tree::TerminalNode *NL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class  InstructionContext : public antlr4::ParserRuleContext {
  public:
    InstructionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Data_processing_instructionContext *data_processing_instruction();
    Multiply_instructionContext *multiply_instruction();
    Branch_instructionContext *branch_instruction();
    Load_store_instructionContext *load_store_instruction();
    NopContext *nop();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InstructionContext* instruction();

  class  NopContext : public antlr4::ParserRuleContext {
  public:
    NopContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NOP();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NopContext* nop();

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
    antlr4::tree::TerminalNode *LOCALLABEL();
    antlr4::tree::TerminalNode *LABEL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LabelContext* label();

  class  Branch_instructionContext : public antlr4::ParserRuleContext {
  public:
    Branch_instructionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Branch_instructionContext() = default;
    void copyFrom(Branch_instructionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  BranchToRegisterContext : public Branch_instructionContext {
  public:
    BranchToRegisterContext(Branch_instructionContext *ctx);

    antlr4::Token *opcode = nullptr;
    antlr4::tree::TerminalNode *SPACE();
    RegContext *reg();
    antlr4::tree::TerminalNode *BX();
    CondContext *cond();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BranchToLabelContext : public Branch_instructionContext {
  public:
    BranchToLabelContext(Branch_instructionContext *ctx);

    antlr4::Token *opcode = nullptr;
    antlr4::tree::TerminalNode *SPACE();
    antlr4::tree::TerminalNode *LABELREF();
    antlr4::tree::TerminalNode *FB();
    antlr4::tree::TerminalNode *BL();
    CondContext *cond();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Branch_instructionContext* branch_instruction();

  class  Data_processing_instructionContext : public antlr4::ParserRuleContext {
  public:
    Data_processing_instructionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Data_processing_instructionContext() = default;
    void copyFrom(Data_processing_instructionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  MoveOpContext : public Data_processing_instructionContext {
  public:
    MoveOpContext(Data_processing_instructionContext *ctx);

    antlr4::Token *opcode = nullptr;
    antlr4::tree::TerminalNode *SPACE();
    RegContext *reg();
    antlr4::tree::TerminalNode *COMMA();
    Shifter_operandContext *shifter_operand();
    antlr4::tree::TerminalNode *MOV();
    antlr4::tree::TerminalNode *MVN();
    CondContext *cond();
    antlr4::tree::TerminalNode *UPDATEFLAG();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ArithmeticOpContext : public Data_processing_instructionContext {
  public:
    ArithmeticOpContext(Data_processing_instructionContext *ctx);

    antlr4::Token *opcode = nullptr;
    antlr4::tree::TerminalNode *SPACE();
    std::vector<RegContext *> reg();
    RegContext* reg(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    Shifter_operandContext *shifter_operand();
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *SUB();
    antlr4::tree::TerminalNode *RSB();
    antlr4::tree::TerminalNode *ADC();
    antlr4::tree::TerminalNode *SBC();
    antlr4::tree::TerminalNode *RSC();
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *BIC();
    antlr4::tree::TerminalNode *EOR();
    antlr4::tree::TerminalNode *ORR();
    CondContext *cond();
    antlr4::tree::TerminalNode *UPDATEFLAG();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CompareOpContext : public Data_processing_instructionContext {
  public:
    CompareOpContext(Data_processing_instructionContext *ctx);

    antlr4::Token *opcode = nullptr;
    antlr4::tree::TerminalNode *SPACE();
    RegContext *reg();
    antlr4::tree::TerminalNode *COMMA();
    Shifter_operandContext *shifter_operand();
    antlr4::tree::TerminalNode *CMP();
    antlr4::tree::TerminalNode *CMN();
    antlr4::tree::TerminalNode *TST();
    antlr4::tree::TerminalNode *TEQ();
    CondContext *cond();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Data_processing_instructionContext* data_processing_instruction();

  class  Shifter_operandContext : public antlr4::ParserRuleContext {
  public:
    Shifter_operandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Shifter_operandContext() = default;
    void copyFrom(Shifter_operandContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Op2registerContext : public Shifter_operandContext {
  public:
    Op2registerContext(Shifter_operandContext *ctx);

    RegContext *reg();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Op2immediateContext : public Shifter_operandContext {
  public:
    Op2immediateContext(Shifter_operandContext *ctx);

    ImmediateContext *immediate();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Op2inlineShiftContext : public Shifter_operandContext {
  public:
    Op2inlineShiftContext(Shifter_operandContext *ctx);

    RegContext *reg();
    antlr4::tree::TerminalNode *COMMA();
    Shift_operationContext *shift_operation();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Shifter_operandContext* shifter_operand();

  class  Shift_operationContext : public antlr4::ParserRuleContext {
  public:
    Shift_operationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Shift_operationContext() = default;
    void copyFrom(Shift_operationContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ShiftByImmediateContext : public Shift_operationContext {
  public:
    ShiftByImmediateContext(Shift_operationContext *ctx);

    ShiftopcodeContext *shiftopcode();
    ImmediateContext *immediate();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ShiftByRegisterContext : public Shift_operationContext {
  public:
    ShiftByRegisterContext(Shift_operationContext *ctx);

    ShiftopcodeContext *shiftopcode();
    RegContext *reg();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  RotateWithExtendContext : public Shift_operationContext {
  public:
    RotateWithExtendContext(Shift_operationContext *ctx);

    antlr4::tree::TerminalNode *RRXI();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Shift_operationContext* shift_operation();

  class  ShiftopcodeContext : public antlr4::ParserRuleContext {
  public:
    ShiftopcodeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LSLI();
    antlr4::tree::TerminalNode *LSRI();
    antlr4::tree::TerminalNode *ASRI();
    antlr4::tree::TerminalNode *RORI();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShiftopcodeContext* shiftopcode();

  class  Multiply_instructionContext : public antlr4::ParserRuleContext {
  public:
    Multiply_instructionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Multiply_instructionContext() = default;
    void copyFrom(Multiply_instructionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  LongMulContext : public Multiply_instructionContext {
  public:
    LongMulContext(Multiply_instructionContext *ctx);

    antlr4::Token *opcode = nullptr;
    antlr4::tree::TerminalNode *SPACE();
    std::vector<RegContext *> reg();
    RegContext* reg(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *MLA();
    antlr4::tree::TerminalNode *SMULL();
    antlr4::tree::TerminalNode *UMULL();
    antlr4::tree::TerminalNode *SMLAL();
    antlr4::tree::TerminalNode *UMLAL();
    CondContext *cond();
    antlr4::tree::TerminalNode *UPDATEFLAG();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NormalMulContext : public Multiply_instructionContext {
  public:
    NormalMulContext(Multiply_instructionContext *ctx);

    antlr4::Token *opcode = nullptr;
    antlr4::tree::TerminalNode *SPACE();
    std::vector<RegContext *> reg();
    RegContext* reg(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *MUL();
    CondContext *cond();
    antlr4::tree::TerminalNode *UPDATEFLAG();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Multiply_instructionContext* multiply_instruction();

  class  Load_store_instructionContext : public antlr4::ParserRuleContext {
  public:
    Load_store_instructionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Load_store_instructionContext() = default;
    void copyFrom(Load_store_instructionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  SecondLoadStoreContext : public Load_store_instructionContext {
  public:
    SecondLoadStoreContext(Load_store_instructionContext *ctx);

    antlr4::Token *opcode = nullptr;
    antlr4::tree::TerminalNode *SPACE();
    RegContext *reg();
    antlr4::tree::TerminalNode *COMMA();
    Addressing_modeContext *addressing_mode();
    antlr4::tree::TerminalNode *DOUBLEWORD();
    antlr4::tree::TerminalNode *HALFWORD();
    antlr4::tree::TerminalNode *SIGNEDHALFWORD();
    antlr4::tree::TerminalNode *SIGNEDBYTE();
    antlr4::tree::TerminalNode *LDR();
    antlr4::tree::TerminalNode *STR();
    CondContext *cond();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PushPopMakroContext : public Load_store_instructionContext {
  public:
    PushPopMakroContext(Load_store_instructionContext *ctx);

    antlr4::Token *makro = nullptr;
    antlr4::tree::TerminalNode *LBRACE();
    std::vector<RegContext *> reg();
    RegContext* reg(size_t i);
    antlr4::tree::TerminalNode *RBRACE();
    antlr4::tree::TerminalNode *PUSH();
    antlr4::tree::TerminalNode *POP();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FirstLoadStoreContext : public Load_store_instructionContext {
  public:
    FirstLoadStoreContext(Load_store_instructionContext *ctx);

    antlr4::Token *opcode = nullptr;
    antlr4::tree::TerminalNode *SPACE();
    RegContext *reg();
    antlr4::tree::TerminalNode *COMMA();
    Addressing_modeContext *addressing_mode();
    antlr4::tree::TerminalNode *LDR();
    antlr4::tree::TerminalNode *STR();
    CondContext *cond();
    antlr4::tree::TerminalNode *FB();
    antlr4::tree::TerminalNode *PRIVILEGE();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Load_store_instructionContext* load_store_instruction();

  class  Addressing_modeContext : public antlr4::ParserRuleContext {
  public:
    Addressing_modeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Addressing_modeContext() = default;
    void copyFrom(Addressing_modeContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  PostIndexedAddressingContext : public Addressing_modeContext {
  public:
    PostIndexedAddressingContext(Addressing_modeContext *ctx);

    ARMParser::RegContext *baseRegister = nullptr;
    antlr4::tree::TerminalNode *LBRACKET();
    antlr4::tree::TerminalNode *RBRACKET();
    antlr4::tree::TerminalNode *COMMA();
    Shifter_operandContext *shifter_operand();
    RegContext *reg();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PreIndexedAddressingContext : public Addressing_modeContext {
  public:
    PreIndexedAddressingContext(Addressing_modeContext *ctx);

    ARMParser::RegContext *baseRegister = nullptr;
    antlr4::tree::TerminalNode *LBRACKET();
    antlr4::tree::TerminalNode *SPECIALRBRACKET();
    RegContext *reg();
    antlr4::tree::TerminalNode *COMMA();
    Shifter_operandContext *shifter_operand();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NormalAddressingContext : public Addressing_modeContext {
  public:
    NormalAddressingContext(Addressing_modeContext *ctx);

    ARMParser::RegContext *baseRegister = nullptr;
    antlr4::tree::TerminalNode *LBRACKET();
    antlr4::tree::TerminalNode *RBRACKET();
    RegContext *reg();
    antlr4::tree::TerminalNode *COMMA();
    Shifter_operandContext *shifter_operand();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Addressing_modeContext* addressing_mode();


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
