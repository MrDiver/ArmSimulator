
// Generated from H:/MyStuff/PrivateProjects/CPPProjects/ArmSimulator/src/asmeditor/AsmEditor/armparser/grammar\ARMParser.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"


namespace assembler {


class  ARMParser : public antlr4::Parser {
public:
  enum {
    COMMENTM = 1, COMMENT = 2, TABNEWLINE = 3, GLOBAL = 4, DATA = 5, TEXT = 6, 
    AND = 7, EOR = 8, SUB = 9, RSB = 10, ADD = 11, ADC = 12, SBC = 13, RSC = 14, 
    TST = 15, TEQ = 16, CMP = 17, CMN = 18, ORR = 19, MOV = 20, BIC = 21, 
    MVN = 22, LSL = 23, LSR = 24, ASR = 25, ROR = 26, RRX = 27, MUL = 28, 
    MLA = 29, SMULL = 30, UMULL = 31, SMLAL = 32, UMLAL = 33, LDR = 34, 
    STR = 35, PUSH = 36, POP = 37, FB = 38, LINK = 39, BLX = 40, BX = 41, 
    BXJ = 42, NOP = 43, EQ = 44, NE = 45, CS = 46, CC = 47, MI = 48, PL = 49, 
    VS = 50, VC = 51, HI = 52, LS = 53, GE = 54, LT = 55, GT = 56, LE = 57, 
    AL = 58, UPDATEFLAG = 59, PRIVILEGE = 60, DOUBLEWORD = 61, HALFWORD = 62, 
    SIGNEDHALFWORD = 63, SIGNEDBYTE = 64, LABEL = 65, LOCALLABEL = 66, SPACE = 67, 
    NL = 68, WORD = 69, BYTE = 70, ASCIZ = 71, R0 = 72, R1 = 73, R2 = 74, 
    R3 = 75, R4 = 76, R5 = 77, R6 = 78, R7 = 79, R8 = 80, R9 = 81, R10 = 82, 
    R11 = 83, R12 = 84, R13 = 85, R14 = 86, R15 = 87, LSLI = 88, LSRI = 89, 
    ASRI = 90, RORI = 91, RRXI = 92, HASH = 93, HEX = 94, NUMBER = 95, WSPARAM = 96, 
    NEWLINE = 97, COMMA = 98, LBRACKET = 99, RBRACKET = 100, LBRACE = 101, 
    RBRACE = 102, SPECIALRBRACKET = 103, LABELREF = 104, STRING = 105
  };

  enum {
    RuleCompilationUnit = 0, RuleProgram = 1, RuleStatement = 2, RuleInstruction = 3, 
    RuleNop = 4, RuleCond = 5, RuleReg = 6, RuleImmediate = 7, RuleLabel = 8, 
    RuleSection = 9, RuleVariable = 10, RuleDatatype = 11, RuleValue = 12, 
    RuleNumber = 13, RuleBranch_instruction = 14, RuleData_processing_instruction = 15, 
    RuleShifter_operand = 16, RuleShift_operation = 17, RuleShiftopcode = 18, 
    RuleMultiply_instruction = 19, RuleLoad_store_instruction = 20, RuleAddressing_mode = 21
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
  class SectionContext;
  class VariableContext;
  class DatatypeContext;
  class ValueContext;
  class NumberContext;
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
    SectionContext *section();
    VariableContext *variable();
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

  class  SectionContext : public antlr4::ParserRuleContext {
  public:
    SectionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    SectionContext() = default;
    void copyFrom(SectionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  GlobalSectionContext : public SectionContext {
  public:
    GlobalSectionContext(SectionContext *ctx);

    antlr4::tree::TerminalNode *GLOBAL();
    antlr4::tree::TerminalNode *SPACE();
    antlr4::tree::TerminalNode *LABELREF();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TextSectionContext : public SectionContext {
  public:
    TextSectionContext(SectionContext *ctx);

    antlr4::tree::TerminalNode *TEXT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DataSectionContext : public SectionContext {
  public:
    DataSectionContext(SectionContext *ctx);

    antlr4::tree::TerminalNode *DATA();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  SectionContext* section();

  class  VariableContext : public antlr4::ParserRuleContext {
  public:
    VariableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LABEL();
    DatatypeContext *datatype();
    ValueContext *value();
    std::vector<antlr4::tree::TerminalNode *> SPACE();
    antlr4::tree::TerminalNode* SPACE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariableContext* variable();

  class  DatatypeContext : public antlr4::ParserRuleContext {
  public:
    DatatypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WORD();
    antlr4::tree::TerminalNode *BYTE();
    antlr4::tree::TerminalNode *ASCIZ();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DatatypeContext* datatype();

  class  ValueContext : public antlr4::ParserRuleContext {
  public:
    ValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ValueContext() = default;
    void copyFrom(ValueContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  NumberValContext : public ValueContext {
  public:
    NumberValContext(ValueContext *ctx);

    std::vector<NumberContext *> number();
    NumberContext* number(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StringValContext : public ValueContext {
  public:
    StringValContext(ValueContext *ctx);

    antlr4::tree::TerminalNode *STRING();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LabelValContext : public ValueContext {
  public:
    LabelValContext(ValueContext *ctx);

    antlr4::tree::TerminalNode *LABELREF();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ValueContext* value();

  class  NumberContext : public antlr4::ParserRuleContext {
  public:
    NumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HEX();
    antlr4::tree::TerminalNode *NUMBER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NumberContext* number();

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
    antlr4::tree::TerminalNode *LINK();
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
    antlr4::tree::TerminalNode *UPDATEFLAG();
    CondContext *cond();
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

  class  ShiftOpContext : public Data_processing_instructionContext {
  public:
    ShiftOpContext(Data_processing_instructionContext *ctx);

    antlr4::Token *opcode = nullptr;
    antlr4::tree::TerminalNode *SPACE();
    std::vector<RegContext *> reg();
    RegContext* reg(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *ASR();
    antlr4::tree::TerminalNode *LSL();
    antlr4::tree::TerminalNode *LSR();
    antlr4::tree::TerminalNode *ROR();
    antlr4::tree::TerminalNode *UPDATEFLAG();
    CondContext *cond();
    ImmediateContext *immediate();
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

    antlr4::tree::TerminalNode *RRX();
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
    antlr4::tree::TerminalNode *UPDATEFLAG();
    CondContext *cond();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NormalMulContext : public Multiply_instructionContext {
  public:
    NormalMulContext(Multiply_instructionContext *ctx);

    antlr4::Token *opcode = nullptr;
    ARMParser::RegContext *rd = nullptr;
    ARMParser::RegContext *rn = nullptr;
    ARMParser::RegContext *rm = nullptr;
    antlr4::tree::TerminalNode *SPACE();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *MUL();
    std::vector<RegContext *> reg();
    RegContext* reg(size_t i);
    antlr4::tree::TerminalNode *UPDATEFLAG();
    CondContext *cond();
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
    antlr4::tree::TerminalNode *LDR();
    antlr4::tree::TerminalNode *STR();
    CondContext *cond();
    antlr4::tree::TerminalNode *PRIVILEGE();
    antlr4::tree::TerminalNode *DOUBLEWORD();
    antlr4::tree::TerminalNode *HALFWORD();
    antlr4::tree::TerminalNode *SIGNEDHALFWORD();
    antlr4::tree::TerminalNode *SIGNEDBYTE();
    antlr4::tree::TerminalNode *FB();
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
    antlr4::tree::TerminalNode *LABELREF();
    antlr4::tree::TerminalNode *LDR();
    antlr4::tree::TerminalNode *STR();
    CondContext *cond();
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
