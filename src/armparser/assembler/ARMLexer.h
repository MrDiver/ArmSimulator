
// Generated from H:/MyStuff/PrivateProjects/CPPProjects/ArmSimulator/src/armparser/grammar\ARMLexer.g4 by ANTLR 4.8

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
    BX = 30, BXJ = 31, EQ = 32, NE = 33, CS = 34, CC = 35, MI = 36, PL = 37, 
    VS = 38, VC = 39, HI = 40, LS = 41, GE = 42, LT = 43, GT = 44, LE = 45, 
    AL = 46, UPDATEFLAG = 47, PRIVILEGE = 48, DOUBLEWORD = 49, HALFWORD = 50, 
    SIGNEDHALFWORD = 51, SIGNEDBYTE = 52, LABEL = 53, LOCALLABEL = 54, SPACE = 55, 
    TOSKIP = 56, R0 = 57, R1 = 58, R2 = 59, R3 = 60, R4 = 61, R5 = 62, R6 = 63, 
    R7 = 64, R8 = 65, R9 = 66, R10 = 67, R11 = 68, R12 = 69, R13 = 70, R14 = 71, 
    R15 = 72, LSLI = 73, LSRI = 74, ASRI = 75, RORI = 76, RRXI = 77, HASH = 78, 
    HEX = 79, NUMBER = 80, WSPARAM = 81, NEWLINE = 82, COMMA = 83, LBRACKET = 84, 
    RBRACKET = 85, LBRACE = 86, RBRACE = 87, SPECIALRBRACKET = 88, LABELREF = 89
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
