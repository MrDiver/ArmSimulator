
// Generated from H:/MyStuff/PrivateProjects/CPPProjects/ArmSimulator/src/asmeditor/AsmEditor/armparser/grammar\ARMLexer.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"


namespace assembler {


class  ARMLexer : public antlr4::Lexer {
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
    ParameterMode = 1
  };

  ARMLexer(antlr4::CharStream *input);
  ~ARMLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

}  // namespace assembler
