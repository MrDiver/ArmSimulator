
// Generated from H:/MyStuff/PrivateProjects/CPPProjects/ArmSimulator/src/asmeditor/AsmEditor/armparser/grammar\ARMLexer.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"


namespace assembler {


class  ARMLexer : public antlr4::Lexer {
public:
  enum {
    GLOBAL = 1, DATA = 2, TEXT = 3, AND = 4, EOR = 5, SUB = 6, RSB = 7, 
    ADD = 8, ADC = 9, SBC = 10, RSC = 11, TST = 12, TEQ = 13, CMP = 14, 
    CMN = 15, ORR = 16, MOV = 17, BIC = 18, MVN = 19, MUL = 20, MLA = 21, 
    SMULL = 22, UMULL = 23, SMLAL = 24, UMLAL = 25, LDR = 26, STR = 27, 
    PUSH = 28, POP = 29, FB = 30, BL = 31, BLX = 32, BX = 33, BXJ = 34, 
    NOP = 35, EQ = 36, NE = 37, CS = 38, CC = 39, MI = 40, PL = 41, VS = 42, 
    VC = 43, HI = 44, LS = 45, GE = 46, LT = 47, GT = 48, LE = 49, AL = 50, 
    UPDATEFLAG = 51, PRIVILEGE = 52, DOUBLEWORD = 53, HALFWORD = 54, SIGNEDHALFWORD = 55, 
    SIGNEDBYTE = 56, LABEL = 57, LOCALLABEL = 58, SPACE = 59, TOSKIP = 60, 
    NL = 61, WORD = 62, BYTE = 63, R0 = 64, R1 = 65, R2 = 66, R3 = 67, R4 = 68, 
    R5 = 69, R6 = 70, R7 = 71, R8 = 72, R9 = 73, R10 = 74, R11 = 75, R12 = 76, 
    R13 = 77, R14 = 78, R15 = 79, LSLI = 80, LSRI = 81, ASRI = 82, RORI = 83, 
    RRXI = 84, HASH = 85, HEX = 86, NUMBER = 87, WSPARAM = 88, NEWLINE = 89, 
    COMMA = 90, LBRACKET = 91, RBRACKET = 92, LBRACE = 93, RBRACE = 94, 
    SPECIALRBRACKET = 95, LABELREF = 96, STRING = 97
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
