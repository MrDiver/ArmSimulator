
// Generated from H:/MyStuff/PrivateProjects/CPPProjects/ArmSimulator/src/armparser/grammar\ARMParser.g4 by ANTLR 4.8


#include "ARMParserListener.h"
#include "ARMParserVisitor.h"

#include "ARMParser.h"


using namespace antlrcpp;
using namespace assembler;
using namespace antlr4;

ARMParser::ARMParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

ARMParser::~ARMParser() {
  delete _interpreter;
}

std::string ARMParser::getGrammarFileName() const {
  return "ARMParser.g4";
}

const std::vector<std::string>& ARMParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& ARMParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- CompilationUnitContext ------------------------------------------------------------------

ARMParser::CompilationUnitContext::CompilationUnitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ARMParser::ProgramContext* ARMParser::CompilationUnitContext::program() {
  return getRuleContext<ARMParser::ProgramContext>(0);
}

tree::TerminalNode* ARMParser::CompilationUnitContext::EOF() {
  return getToken(ARMParser::EOF, 0);
}


size_t ARMParser::CompilationUnitContext::getRuleIndex() const {
  return ARMParser::RuleCompilationUnit;
}

void ARMParser::CompilationUnitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ARMParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompilationUnit(this);
}

void ARMParser::CompilationUnitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ARMParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompilationUnit(this);
}


antlrcpp::Any ARMParser::CompilationUnitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ARMParserVisitor*>(visitor))
    return parserVisitor->visitCompilationUnit(this);
  else
    return visitor->visitChildren(this);
}

ARMParser::CompilationUnitContext* ARMParser::compilationUnit() {
  CompilationUnitContext *_localctx = _tracker.createInstance<CompilationUnitContext>(_ctx, getState());
  enterRule(_localctx, 0, ARMParser::RuleCompilationUnit);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(16);
    program();
    setState(17);
    match(ARMParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProgramContext ------------------------------------------------------------------

ARMParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ARMParser::StatementContext *> ARMParser::ProgramContext::statement() {
  return getRuleContexts<ARMParser::StatementContext>();
}

ARMParser::StatementContext* ARMParser::ProgramContext::statement(size_t i) {
  return getRuleContext<ARMParser::StatementContext>(i);
}


size_t ARMParser::ProgramContext::getRuleIndex() const {
  return ARMParser::RuleProgram;
}

void ARMParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ARMParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void ARMParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ARMParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}


antlrcpp::Any ARMParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ARMParserVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

ARMParser::ProgramContext* ARMParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 2, ARMParser::RuleProgram);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(20); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(19);
      statement();
      setState(22); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ARMParser::ADD)
      | (1ULL << ARMParser::LABEL)
      | (1ULL << ARMParser::LOCALLABEL))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

ARMParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ARMParser::InstructionContext* ARMParser::StatementContext::instruction() {
  return getRuleContext<ARMParser::InstructionContext>(0);
}

ARMParser::LabelContext* ARMParser::StatementContext::label() {
  return getRuleContext<ARMParser::LabelContext>(0);
}


size_t ARMParser::StatementContext::getRuleIndex() const {
  return ARMParser::RuleStatement;
}

void ARMParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ARMParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void ARMParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ARMParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}


antlrcpp::Any ARMParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ARMParserVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

ARMParser::StatementContext* ARMParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 4, ARMParser::RuleStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(26);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ARMParser::ADD: {
        enterOuterAlt(_localctx, 1);
        setState(24);
        instruction();
        break;
      }

      case ARMParser::LABEL:
      case ARMParser::LOCALLABEL: {
        enterOuterAlt(_localctx, 2);
        setState(25);
        label();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InstructionContext ------------------------------------------------------------------

ARMParser::InstructionContext::InstructionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ARMParser::InstructionContext::ADD() {
  return getToken(ARMParser::ADD, 0);
}

tree::TerminalNode* ARMParser::InstructionContext::SPACE() {
  return getToken(ARMParser::SPACE, 0);
}

std::vector<ARMParser::RegContext *> ARMParser::InstructionContext::reg() {
  return getRuleContexts<ARMParser::RegContext>();
}

ARMParser::RegContext* ARMParser::InstructionContext::reg(size_t i) {
  return getRuleContext<ARMParser::RegContext>(i);
}

tree::TerminalNode* ARMParser::InstructionContext::COMMA() {
  return getToken(ARMParser::COMMA, 0);
}


size_t ARMParser::InstructionContext::getRuleIndex() const {
  return ARMParser::RuleInstruction;
}

void ARMParser::InstructionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ARMParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInstruction(this);
}

void ARMParser::InstructionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ARMParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInstruction(this);
}


antlrcpp::Any ARMParser::InstructionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ARMParserVisitor*>(visitor))
    return parserVisitor->visitInstruction(this);
  else
    return visitor->visitChildren(this);
}

ARMParser::InstructionContext* ARMParser::instruction() {
  InstructionContext *_localctx = _tracker.createInstance<InstructionContext>(_ctx, getState());
  enterRule(_localctx, 6, ARMParser::RuleInstruction);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(28);
    match(ARMParser::ADD);
    setState(29);
    match(ARMParser::SPACE);
    setState(30);
    reg();
    setState(31);
    match(ARMParser::COMMA);
    setState(32);
    reg();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CondContext ------------------------------------------------------------------

ARMParser::CondContext::CondContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ARMParser::CondContext::EQ() {
  return getToken(ARMParser::EQ, 0);
}

tree::TerminalNode* ARMParser::CondContext::NE() {
  return getToken(ARMParser::NE, 0);
}

tree::TerminalNode* ARMParser::CondContext::CS() {
  return getToken(ARMParser::CS, 0);
}

tree::TerminalNode* ARMParser::CondContext::CC() {
  return getToken(ARMParser::CC, 0);
}

tree::TerminalNode* ARMParser::CondContext::MI() {
  return getToken(ARMParser::MI, 0);
}

tree::TerminalNode* ARMParser::CondContext::PL() {
  return getToken(ARMParser::PL, 0);
}

tree::TerminalNode* ARMParser::CondContext::VS() {
  return getToken(ARMParser::VS, 0);
}

tree::TerminalNode* ARMParser::CondContext::VC() {
  return getToken(ARMParser::VC, 0);
}

tree::TerminalNode* ARMParser::CondContext::HI() {
  return getToken(ARMParser::HI, 0);
}

tree::TerminalNode* ARMParser::CondContext::LS() {
  return getToken(ARMParser::LS, 0);
}

tree::TerminalNode* ARMParser::CondContext::GE() {
  return getToken(ARMParser::GE, 0);
}

tree::TerminalNode* ARMParser::CondContext::LT() {
  return getToken(ARMParser::LT, 0);
}

tree::TerminalNode* ARMParser::CondContext::GT() {
  return getToken(ARMParser::GT, 0);
}

tree::TerminalNode* ARMParser::CondContext::LE() {
  return getToken(ARMParser::LE, 0);
}

tree::TerminalNode* ARMParser::CondContext::AL() {
  return getToken(ARMParser::AL, 0);
}


size_t ARMParser::CondContext::getRuleIndex() const {
  return ARMParser::RuleCond;
}

void ARMParser::CondContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ARMParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCond(this);
}

void ARMParser::CondContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ARMParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCond(this);
}


antlrcpp::Any ARMParser::CondContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ARMParserVisitor*>(visitor))
    return parserVisitor->visitCond(this);
  else
    return visitor->visitChildren(this);
}

ARMParser::CondContext* ARMParser::cond() {
  CondContext *_localctx = _tracker.createInstance<CondContext>(_ctx, getState());
  enterRule(_localctx, 8, ARMParser::RuleCond);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(34);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ARMParser::EQ)
      | (1ULL << ARMParser::NE)
      | (1ULL << ARMParser::CS)
      | (1ULL << ARMParser::CC)
      | (1ULL << ARMParser::MI)
      | (1ULL << ARMParser::PL)
      | (1ULL << ARMParser::VS)
      | (1ULL << ARMParser::VC)
      | (1ULL << ARMParser::HI)
      | (1ULL << ARMParser::LS)
      | (1ULL << ARMParser::GE)
      | (1ULL << ARMParser::LT)
      | (1ULL << ARMParser::GT)
      | (1ULL << ARMParser::LE)
      | (1ULL << ARMParser::AL))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RegContext ------------------------------------------------------------------

ARMParser::RegContext::RegContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ARMParser::RegContext::R0() {
  return getToken(ARMParser::R0, 0);
}

tree::TerminalNode* ARMParser::RegContext::R1() {
  return getToken(ARMParser::R1, 0);
}

tree::TerminalNode* ARMParser::RegContext::R2() {
  return getToken(ARMParser::R2, 0);
}

tree::TerminalNode* ARMParser::RegContext::R3() {
  return getToken(ARMParser::R3, 0);
}

tree::TerminalNode* ARMParser::RegContext::R4() {
  return getToken(ARMParser::R4, 0);
}

tree::TerminalNode* ARMParser::RegContext::R5() {
  return getToken(ARMParser::R5, 0);
}

tree::TerminalNode* ARMParser::RegContext::R6() {
  return getToken(ARMParser::R6, 0);
}

tree::TerminalNode* ARMParser::RegContext::R7() {
  return getToken(ARMParser::R7, 0);
}

tree::TerminalNode* ARMParser::RegContext::R8() {
  return getToken(ARMParser::R8, 0);
}

tree::TerminalNode* ARMParser::RegContext::R9() {
  return getToken(ARMParser::R9, 0);
}

tree::TerminalNode* ARMParser::RegContext::R10() {
  return getToken(ARMParser::R10, 0);
}

tree::TerminalNode* ARMParser::RegContext::R11() {
  return getToken(ARMParser::R11, 0);
}

tree::TerminalNode* ARMParser::RegContext::R12() {
  return getToken(ARMParser::R12, 0);
}

tree::TerminalNode* ARMParser::RegContext::R13() {
  return getToken(ARMParser::R13, 0);
}

tree::TerminalNode* ARMParser::RegContext::R14() {
  return getToken(ARMParser::R14, 0);
}

tree::TerminalNode* ARMParser::RegContext::R15() {
  return getToken(ARMParser::R15, 0);
}


size_t ARMParser::RegContext::getRuleIndex() const {
  return ARMParser::RuleReg;
}

void ARMParser::RegContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ARMParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReg(this);
}

void ARMParser::RegContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ARMParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReg(this);
}


antlrcpp::Any ARMParser::RegContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ARMParserVisitor*>(visitor))
    return parserVisitor->visitReg(this);
  else
    return visitor->visitChildren(this);
}

ARMParser::RegContext* ARMParser::reg() {
  RegContext *_localctx = _tracker.createInstance<RegContext>(_ctx, getState());
  enterRule(_localctx, 10, ARMParser::RuleReg);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(36);
    _la = _input->LA(1);
    if (!(((((_la - 57) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 57)) & ((1ULL << (ARMParser::R0 - 57))
      | (1ULL << (ARMParser::R1 - 57))
      | (1ULL << (ARMParser::R2 - 57))
      | (1ULL << (ARMParser::R3 - 57))
      | (1ULL << (ARMParser::R4 - 57))
      | (1ULL << (ARMParser::R5 - 57))
      | (1ULL << (ARMParser::R6 - 57))
      | (1ULL << (ARMParser::R7 - 57))
      | (1ULL << (ARMParser::R8 - 57))
      | (1ULL << (ARMParser::R9 - 57))
      | (1ULL << (ARMParser::R10 - 57))
      | (1ULL << (ARMParser::R11 - 57))
      | (1ULL << (ARMParser::R12 - 57))
      | (1ULL << (ARMParser::R13 - 57))
      | (1ULL << (ARMParser::R14 - 57))
      | (1ULL << (ARMParser::R15 - 57)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ImmediateContext ------------------------------------------------------------------

ARMParser::ImmediateContext::ImmediateContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ARMParser::ImmediateContext::HASH() {
  return getToken(ARMParser::HASH, 0);
}

tree::TerminalNode* ARMParser::ImmediateContext::HEX() {
  return getToken(ARMParser::HEX, 0);
}

tree::TerminalNode* ARMParser::ImmediateContext::NUMBER() {
  return getToken(ARMParser::NUMBER, 0);
}


size_t ARMParser::ImmediateContext::getRuleIndex() const {
  return ARMParser::RuleImmediate;
}

void ARMParser::ImmediateContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ARMParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterImmediate(this);
}

void ARMParser::ImmediateContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ARMParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitImmediate(this);
}


antlrcpp::Any ARMParser::ImmediateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ARMParserVisitor*>(visitor))
    return parserVisitor->visitImmediate(this);
  else
    return visitor->visitChildren(this);
}

ARMParser::ImmediateContext* ARMParser::immediate() {
  ImmediateContext *_localctx = _tracker.createInstance<ImmediateContext>(_ctx, getState());
  enterRule(_localctx, 12, ARMParser::RuleImmediate);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(38);
    match(ARMParser::HASH);
    setState(39);
    _la = _input->LA(1);
    if (!(_la == ARMParser::HEX

    || _la == ARMParser::NUMBER)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LabelContext ------------------------------------------------------------------

ARMParser::LabelContext::LabelContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ARMParser::LabelContext::COLON() {
  return getToken(ARMParser::COLON, 0);
}

tree::TerminalNode* ARMParser::LabelContext::LOCALLABEL() {
  return getToken(ARMParser::LOCALLABEL, 0);
}

tree::TerminalNode* ARMParser::LabelContext::LABEL() {
  return getToken(ARMParser::LABEL, 0);
}


size_t ARMParser::LabelContext::getRuleIndex() const {
  return ARMParser::RuleLabel;
}

void ARMParser::LabelContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ARMParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLabel(this);
}

void ARMParser::LabelContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ARMParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLabel(this);
}


antlrcpp::Any ARMParser::LabelContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ARMParserVisitor*>(visitor))
    return parserVisitor->visitLabel(this);
  else
    return visitor->visitChildren(this);
}

ARMParser::LabelContext* ARMParser::label() {
  LabelContext *_localctx = _tracker.createInstance<LabelContext>(_ctx, getState());
  enterRule(_localctx, 14, ARMParser::RuleLabel);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(41);
    _la = _input->LA(1);
    if (!(_la == ARMParser::LABEL

    || _la == ARMParser::LOCALLABEL)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(42);
    match(ARMParser::COLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> ARMParser::_decisionToDFA;
atn::PredictionContextCache ARMParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN ARMParser::_atn;
std::vector<uint16_t> ARMParser::_serializedATN;

std::vector<std::string> ARMParser::_ruleNames = {
  "compilationUnit", "program", "statement", "instruction", "cond", "reg", 
  "immediate", "label"
};

std::vector<std::string> ARMParser::_literalNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "':'", "' '", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "'#'", "", "", "", "'\n'", "','", "'['", 
  "']'", "']!'"
};

std::vector<std::string> ARMParser::_symbolicNames = {
  "", "WSSTD", "EQ", "NE", "CS", "CC", "MI", "PL", "VS", "VC", "HI", "LS", 
  "GE", "LT", "GT", "LE", "AL", "UPDATEFLAG", "BYTEACCESS", "PRIVILEGE", 
  "DOUBLEWORD", "HALFWORD", "SIGNEDHALFWORD", "SIGNEDBYTE", "AND", "EOR", 
  "SUB", "RSB", "ADD", "ADC", "SBC", "RSC", "TST", "TEQ", "CMP", "CMN", 
  "ORR", "MOV", "BIC", "MVN", "MUL", "MLA", "SMULL", "UMULL", "SMLAL", "UMLAL", 
  "LDR", "STR", "Branch", "BranchAndLink", "BLX", "BX", "BXJ", "LABEL", 
  "LOCALLABEL", "COLON", "SPACE", "R0", "R1", "R2", "R3", "R4", "R5", "R6", 
  "R7", "R8", "R9", "R10", "R11", "R12", "R13", "R14", "R15", "LSLI", "LSRI", 
  "ASRI", "RORI", "RRXI", "HASH", "HEX", "NUMBER", "WSPARAM", "NEWLINE", 
  "COMMA", "LBRACKET", "RBRACKET", "SPECIALRBRACKET", "LABELREF"
};

dfa::Vocabulary ARMParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> ARMParser::_tokenNames;

ARMParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x59, 0x2f, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 
    0x3, 0x6, 0x3, 0x17, 0xa, 0x3, 0xd, 0x3, 0xe, 0x3, 0x18, 0x3, 0x4, 0x3, 
    0x4, 0x5, 0x4, 0x1d, 0xa, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x2, 0x2, 
    0xa, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x2, 0x6, 0x3, 0x2, 0x4, 
    0x12, 0x3, 0x2, 0x3b, 0x4a, 0x3, 0x2, 0x51, 0x52, 0x3, 0x2, 0x37, 0x38, 
    0x2, 0x28, 0x2, 0x12, 0x3, 0x2, 0x2, 0x2, 0x4, 0x16, 0x3, 0x2, 0x2, 
    0x2, 0x6, 0x1c, 0x3, 0x2, 0x2, 0x2, 0x8, 0x1e, 0x3, 0x2, 0x2, 0x2, 0xa, 
    0x24, 0x3, 0x2, 0x2, 0x2, 0xc, 0x26, 0x3, 0x2, 0x2, 0x2, 0xe, 0x28, 
    0x3, 0x2, 0x2, 0x2, 0x10, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x12, 0x13, 0x5, 
    0x4, 0x3, 0x2, 0x13, 0x14, 0x7, 0x2, 0x2, 0x3, 0x14, 0x3, 0x3, 0x2, 
    0x2, 0x2, 0x15, 0x17, 0x5, 0x6, 0x4, 0x2, 0x16, 0x15, 0x3, 0x2, 0x2, 
    0x2, 0x17, 0x18, 0x3, 0x2, 0x2, 0x2, 0x18, 0x16, 0x3, 0x2, 0x2, 0x2, 
    0x18, 0x19, 0x3, 0x2, 0x2, 0x2, 0x19, 0x5, 0x3, 0x2, 0x2, 0x2, 0x1a, 
    0x1d, 0x5, 0x8, 0x5, 0x2, 0x1b, 0x1d, 0x5, 0x10, 0x9, 0x2, 0x1c, 0x1a, 
    0x3, 0x2, 0x2, 0x2, 0x1c, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x1d, 0x7, 0x3, 
    0x2, 0x2, 0x2, 0x1e, 0x1f, 0x7, 0x1e, 0x2, 0x2, 0x1f, 0x20, 0x7, 0x3a, 
    0x2, 0x2, 0x20, 0x21, 0x5, 0xc, 0x7, 0x2, 0x21, 0x22, 0x7, 0x55, 0x2, 
    0x2, 0x22, 0x23, 0x5, 0xc, 0x7, 0x2, 0x23, 0x9, 0x3, 0x2, 0x2, 0x2, 
    0x24, 0x25, 0x9, 0x2, 0x2, 0x2, 0x25, 0xb, 0x3, 0x2, 0x2, 0x2, 0x26, 
    0x27, 0x9, 0x3, 0x2, 0x2, 0x27, 0xd, 0x3, 0x2, 0x2, 0x2, 0x28, 0x29, 
    0x7, 0x50, 0x2, 0x2, 0x29, 0x2a, 0x9, 0x4, 0x2, 0x2, 0x2a, 0xf, 0x3, 
    0x2, 0x2, 0x2, 0x2b, 0x2c, 0x9, 0x5, 0x2, 0x2, 0x2c, 0x2d, 0x7, 0x39, 
    0x2, 0x2, 0x2d, 0x11, 0x3, 0x2, 0x2, 0x2, 0x4, 0x18, 0x1c, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

ARMParser::Initializer ARMParser::_init;
