
// Generated from H:/MyStuff/PrivateProjects/CPPProjects/ArmSimulator/src/asmeditor/AsmEditor/armparser/grammar\ARMLexer.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"


namespace assembler {


class  ARMLexer : public antlr4::Lexer {
public:
  enum {
    COMMENTM = 1, COMMENT = 2, GLOBAL = 3, DATA = 4, TEXT = 5, AND = 6, 
    EOR = 7, SUB = 8, RSB = 9, ADD = 10, ADC = 11, SBC = 12, RSC = 13, TST = 14, 
    TEQ = 15, CMP = 16, CMN = 17, ORR = 18, MOV = 19, BIC = 20, MVN = 21, 
    MUL = 22, MLA = 23, SMULL = 24, UMULL = 25, SMLAL = 26, UMLAL = 27, 
    LDR = 28, STR = 29, PUSH = 30, POP = 31, FB = 32, LINK = 33, BLX = 34, 
    BX = 35, BXJ = 36, NOP = 37, EQ = 38, NE = 39, CS = 40, CC = 41, MI = 42, 
    PL = 43, VS = 44, VC = 45, HI = 46, LS = 47, GE = 48, LT = 49, GT = 50, 
    LE = 51, AL = 52, UPDATEFLAG = 53, PRIVILEGE = 54, DOUBLEWORD = 55, 
    HALFWORD = 56, SIGNEDHALFWORD = 57, SIGNEDBYTE = 58, LABEL = 59, LOCALLABEL = 60, 
    SPACE = 61, NL = 62, WORD = 63, BYTE = 64, ASCIZ = 65, R0 = 66, R1 = 67, 
    R2 = 68, R3 = 69, R4 = 70, R5 = 71, R6 = 72, R7 = 73, R8 = 74, R9 = 75, 
    R10 = 76, R11 = 77, R12 = 78, R13 = 79, R14 = 80, R15 = 81, LSLI = 82, 
    LSRI = 83, ASRI = 84, RORI = 85, RRXI = 86, HASH = 87, HEX = 88, NUMBER = 89, 
    WSPARAM = 90, NEWLINE = 91, COMMA = 92, LBRACKET = 93, RBRACKET = 94, 
    LBRACE = 95, RBRACE = 96, SPECIALRBRACKET = 97, LABELREF = 98, STRING = 99
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
