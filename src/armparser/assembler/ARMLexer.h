
// Generated from H:/MyStuff/PrivateProjects/CPPProjects/TEST - Kopie/grammar\ARMLexer.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"


namespace assembler {


class  ARMLexer : public antlr4::Lexer {
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
