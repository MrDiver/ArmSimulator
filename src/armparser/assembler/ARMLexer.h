
// Generated from H:/MyStuff/PrivateProjects/CPPProjects/ArmSimulator/src/armparser/grammar\ARMLexer.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"


namespace assembler {


class  ARMLexer : public antlr4::Lexer {
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
    CommandMode = 1, ParameterMode = 2
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
