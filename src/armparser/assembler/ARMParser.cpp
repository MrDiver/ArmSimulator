
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

tree::TerminalNode* ARMParser::CompilationUnitContext::EOF() {
  return getToken(ARMParser::EOF, 0);
}

ARMParser::ProgramContext* ARMParser::CompilationUnitContext::program() {
  return getRuleContext<ARMParser::ProgramContext>(0);
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
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(33);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ARMParser::AND)
      | (1ULL << ARMParser::EOR)
      | (1ULL << ARMParser::SUB)
      | (1ULL << ARMParser::RSB)
      | (1ULL << ARMParser::ADD)
      | (1ULL << ARMParser::ADC)
      | (1ULL << ARMParser::SBC)
      | (1ULL << ARMParser::RSC)
      | (1ULL << ARMParser::TST)
      | (1ULL << ARMParser::TEQ)
      | (1ULL << ARMParser::CMP)
      | (1ULL << ARMParser::CMN)
      | (1ULL << ARMParser::ORR)
      | (1ULL << ARMParser::MOV)
      | (1ULL << ARMParser::BIC)
      | (1ULL << ARMParser::MVN)
      | (1ULL << ARMParser::MUL)
      | (1ULL << ARMParser::MLA)
      | (1ULL << ARMParser::SMULL)
      | (1ULL << ARMParser::UMULL)
      | (1ULL << ARMParser::SMLAL)
      | (1ULL << ARMParser::UMLAL)
      | (1ULL << ARMParser::LDR)
      | (1ULL << ARMParser::STR)
      | (1ULL << ARMParser::PUSH)
      | (1ULL << ARMParser::POP)
      | (1ULL << ARMParser::FB)
      | (1ULL << ARMParser::BL)
      | (1ULL << ARMParser::BX)
      | (1ULL << ARMParser::LABEL)
      | (1ULL << ARMParser::LOCALLABEL))) != 0)) {
      setState(32);
      program();
    }
    setState(35);
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
    setState(38); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(37);
      statement();
      setState(40); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ARMParser::AND)
      | (1ULL << ARMParser::EOR)
      | (1ULL << ARMParser::SUB)
      | (1ULL << ARMParser::RSB)
      | (1ULL << ARMParser::ADD)
      | (1ULL << ARMParser::ADC)
      | (1ULL << ARMParser::SBC)
      | (1ULL << ARMParser::RSC)
      | (1ULL << ARMParser::TST)
      | (1ULL << ARMParser::TEQ)
      | (1ULL << ARMParser::CMP)
      | (1ULL << ARMParser::CMN)
      | (1ULL << ARMParser::ORR)
      | (1ULL << ARMParser::MOV)
      | (1ULL << ARMParser::BIC)
      | (1ULL << ARMParser::MVN)
      | (1ULL << ARMParser::MUL)
      | (1ULL << ARMParser::MLA)
      | (1ULL << ARMParser::SMULL)
      | (1ULL << ARMParser::UMULL)
      | (1ULL << ARMParser::SMLAL)
      | (1ULL << ARMParser::UMLAL)
      | (1ULL << ARMParser::LDR)
      | (1ULL << ARMParser::STR)
      | (1ULL << ARMParser::PUSH)
      | (1ULL << ARMParser::POP)
      | (1ULL << ARMParser::FB)
      | (1ULL << ARMParser::BL)
      | (1ULL << ARMParser::BX)
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
    setState(44);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ARMParser::AND:
      case ARMParser::EOR:
      case ARMParser::SUB:
      case ARMParser::RSB:
      case ARMParser::ADD:
      case ARMParser::ADC:
      case ARMParser::SBC:
      case ARMParser::RSC:
      case ARMParser::TST:
      case ARMParser::TEQ:
      case ARMParser::CMP:
      case ARMParser::CMN:
      case ARMParser::ORR:
      case ARMParser::MOV:
      case ARMParser::BIC:
      case ARMParser::MVN:
      case ARMParser::MUL:
      case ARMParser::MLA:
      case ARMParser::SMULL:
      case ARMParser::UMULL:
      case ARMParser::SMLAL:
      case ARMParser::UMLAL:
      case ARMParser::LDR:
      case ARMParser::STR:
      case ARMParser::PUSH:
      case ARMParser::POP:
      case ARMParser::FB:
      case ARMParser::BL:
      case ARMParser::BX: {
        enterOuterAlt(_localctx, 1);
        setState(42);
        instruction();
        break;
      }

      case ARMParser::LABEL:
      case ARMParser::LOCALLABEL: {
        enterOuterAlt(_localctx, 2);
        setState(43);
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

ARMParser::Data_processing_instructionContext* ARMParser::InstructionContext::data_processing_instruction() {
  return getRuleContext<ARMParser::Data_processing_instructionContext>(0);
}

ARMParser::Multiply_instructionContext* ARMParser::InstructionContext::multiply_instruction() {
  return getRuleContext<ARMParser::Multiply_instructionContext>(0);
}

ARMParser::Branch_instructionContext* ARMParser::InstructionContext::branch_instruction() {
  return getRuleContext<ARMParser::Branch_instructionContext>(0);
}

ARMParser::Load_store_instructionContext* ARMParser::InstructionContext::load_store_instruction() {
  return getRuleContext<ARMParser::Load_store_instructionContext>(0);
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
    setState(50);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ARMParser::AND:
      case ARMParser::EOR:
      case ARMParser::SUB:
      case ARMParser::RSB:
      case ARMParser::ADD:
      case ARMParser::ADC:
      case ARMParser::SBC:
      case ARMParser::RSC:
      case ARMParser::TST:
      case ARMParser::TEQ:
      case ARMParser::CMP:
      case ARMParser::CMN:
      case ARMParser::ORR:
      case ARMParser::MOV:
      case ARMParser::BIC:
      case ARMParser::MVN: {
        enterOuterAlt(_localctx, 1);
        setState(46);
        data_processing_instruction();
        break;
      }

      case ARMParser::MUL:
      case ARMParser::MLA:
      case ARMParser::SMULL:
      case ARMParser::UMULL:
      case ARMParser::SMLAL:
      case ARMParser::UMLAL: {
        enterOuterAlt(_localctx, 2);
        setState(47);
        multiply_instruction();
        break;
      }

      case ARMParser::FB:
      case ARMParser::BL:
      case ARMParser::BX: {
        enterOuterAlt(_localctx, 3);
        setState(48);
        branch_instruction();
        break;
      }

      case ARMParser::LDR:
      case ARMParser::STR:
      case ARMParser::PUSH:
      case ARMParser::POP: {
        enterOuterAlt(_localctx, 4);
        setState(49);
        load_store_instruction();
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
    setState(52);
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
    setState(54);
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
    setState(56);
    match(ARMParser::HASH);
    setState(57);
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
    setState(59);
    _la = _input->LA(1);
    if (!(_la == ARMParser::LABEL

    || _la == ARMParser::LOCALLABEL)) {
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

//----------------- Branch_instructionContext ------------------------------------------------------------------

ARMParser::Branch_instructionContext::Branch_instructionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ARMParser::Branch_instructionContext::getRuleIndex() const {
  return ARMParser::RuleBranch_instruction;
}

void ARMParser::Branch_instructionContext::copyFrom(Branch_instructionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- BranchToRegisterContext ------------------------------------------------------------------

tree::TerminalNode* ARMParser::BranchToRegisterContext::SPACE() {
  return getToken(ARMParser::SPACE, 0);
}

ARMParser::RegContext* ARMParser::BranchToRegisterContext::reg() {
  return getRuleContext<ARMParser::RegContext>(0);
}

tree::TerminalNode* ARMParser::BranchToRegisterContext::BX() {
  return getToken(ARMParser::BX, 0);
}

ARMParser::CondContext* ARMParser::BranchToRegisterContext::cond() {
  return getRuleContext<ARMParser::CondContext>(0);
}

ARMParser::BranchToRegisterContext::BranchToRegisterContext(Branch_instructionContext *ctx) { copyFrom(ctx); }

void ARMParser::BranchToRegisterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ARMParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBranchToRegister(this);
}
void ARMParser::BranchToRegisterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ARMParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBranchToRegister(this);
}

antlrcpp::Any ARMParser::BranchToRegisterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ARMParserVisitor*>(visitor))
    return parserVisitor->visitBranchToRegister(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BranchToLabelContext ------------------------------------------------------------------

tree::TerminalNode* ARMParser::BranchToLabelContext::SPACE() {
  return getToken(ARMParser::SPACE, 0);
}

tree::TerminalNode* ARMParser::BranchToLabelContext::LABELREF() {
  return getToken(ARMParser::LABELREF, 0);
}

tree::TerminalNode* ARMParser::BranchToLabelContext::FB() {
  return getToken(ARMParser::FB, 0);
}

tree::TerminalNode* ARMParser::BranchToLabelContext::BL() {
  return getToken(ARMParser::BL, 0);
}

ARMParser::CondContext* ARMParser::BranchToLabelContext::cond() {
  return getRuleContext<ARMParser::CondContext>(0);
}

ARMParser::BranchToLabelContext::BranchToLabelContext(Branch_instructionContext *ctx) { copyFrom(ctx); }

void ARMParser::BranchToLabelContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ARMParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBranchToLabel(this);
}
void ARMParser::BranchToLabelContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ARMParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBranchToLabel(this);
}

antlrcpp::Any ARMParser::BranchToLabelContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ARMParserVisitor*>(visitor))
    return parserVisitor->visitBranchToLabel(this);
  else
    return visitor->visitChildren(this);
}
ARMParser::Branch_instructionContext* ARMParser::branch_instruction() {
  Branch_instructionContext *_localctx = _tracker.createInstance<Branch_instructionContext>(_ctx, getState());
  enterRule(_localctx, 16, ARMParser::RuleBranch_instruction);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(73);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ARMParser::FB:
      case ARMParser::BL: {
        _localctx = dynamic_cast<Branch_instructionContext *>(_tracker.createInstance<ARMParser::BranchToLabelContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(61);
        dynamic_cast<BranchToLabelContext *>(_localctx)->opcode = _input->LT(1);
        _la = _input->LA(1);
        if (!(_la == ARMParser::FB

        || _la == ARMParser::BL)) {
          dynamic_cast<BranchToLabelContext *>(_localctx)->opcode = _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(63);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
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
          | (1ULL << ARMParser::AL))) != 0)) {
          setState(62);
          cond();
        }
        setState(65);
        match(ARMParser::SPACE);
        setState(66);
        match(ARMParser::LABELREF);
        break;
      }

      case ARMParser::BX: {
        _localctx = dynamic_cast<Branch_instructionContext *>(_tracker.createInstance<ARMParser::BranchToRegisterContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(67);
        dynamic_cast<BranchToRegisterContext *>(_localctx)->opcode = match(ARMParser::BX);
        setState(69);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
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
          | (1ULL << ARMParser::AL))) != 0)) {
          setState(68);
          cond();
        }
        setState(71);
        match(ARMParser::SPACE);
        setState(72);
        reg();
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

//----------------- Data_processing_instructionContext ------------------------------------------------------------------

ARMParser::Data_processing_instructionContext::Data_processing_instructionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ARMParser::Data_processing_instructionContext::getRuleIndex() const {
  return ARMParser::RuleData_processing_instruction;
}

void ARMParser::Data_processing_instructionContext::copyFrom(Data_processing_instructionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- MoveOpContext ------------------------------------------------------------------

tree::TerminalNode* ARMParser::MoveOpContext::SPACE() {
  return getToken(ARMParser::SPACE, 0);
}

ARMParser::RegContext* ARMParser::MoveOpContext::reg() {
  return getRuleContext<ARMParser::RegContext>(0);
}

tree::TerminalNode* ARMParser::MoveOpContext::COMMA() {
  return getToken(ARMParser::COMMA, 0);
}

ARMParser::Shifter_operandContext* ARMParser::MoveOpContext::shifter_operand() {
  return getRuleContext<ARMParser::Shifter_operandContext>(0);
}

tree::TerminalNode* ARMParser::MoveOpContext::MOV() {
  return getToken(ARMParser::MOV, 0);
}

tree::TerminalNode* ARMParser::MoveOpContext::MVN() {
  return getToken(ARMParser::MVN, 0);
}

ARMParser::CondContext* ARMParser::MoveOpContext::cond() {
  return getRuleContext<ARMParser::CondContext>(0);
}

tree::TerminalNode* ARMParser::MoveOpContext::UPDATEFLAG() {
  return getToken(ARMParser::UPDATEFLAG, 0);
}

ARMParser::MoveOpContext::MoveOpContext(Data_processing_instructionContext *ctx) { copyFrom(ctx); }

void ARMParser::MoveOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ARMParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMoveOp(this);
}
void ARMParser::MoveOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ARMParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMoveOp(this);
}

antlrcpp::Any ARMParser::MoveOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ARMParserVisitor*>(visitor))
    return parserVisitor->visitMoveOp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ArithmeticOpContext ------------------------------------------------------------------

tree::TerminalNode* ARMParser::ArithmeticOpContext::SPACE() {
  return getToken(ARMParser::SPACE, 0);
}

std::vector<ARMParser::RegContext *> ARMParser::ArithmeticOpContext::reg() {
  return getRuleContexts<ARMParser::RegContext>();
}

ARMParser::RegContext* ARMParser::ArithmeticOpContext::reg(size_t i) {
  return getRuleContext<ARMParser::RegContext>(i);
}

std::vector<tree::TerminalNode *> ARMParser::ArithmeticOpContext::COMMA() {
  return getTokens(ARMParser::COMMA);
}

tree::TerminalNode* ARMParser::ArithmeticOpContext::COMMA(size_t i) {
  return getToken(ARMParser::COMMA, i);
}

ARMParser::Shifter_operandContext* ARMParser::ArithmeticOpContext::shifter_operand() {
  return getRuleContext<ARMParser::Shifter_operandContext>(0);
}

tree::TerminalNode* ARMParser::ArithmeticOpContext::ADD() {
  return getToken(ARMParser::ADD, 0);
}

tree::TerminalNode* ARMParser::ArithmeticOpContext::SUB() {
  return getToken(ARMParser::SUB, 0);
}

tree::TerminalNode* ARMParser::ArithmeticOpContext::RSB() {
  return getToken(ARMParser::RSB, 0);
}

tree::TerminalNode* ARMParser::ArithmeticOpContext::ADC() {
  return getToken(ARMParser::ADC, 0);
}

tree::TerminalNode* ARMParser::ArithmeticOpContext::SBC() {
  return getToken(ARMParser::SBC, 0);
}

tree::TerminalNode* ARMParser::ArithmeticOpContext::RSC() {
  return getToken(ARMParser::RSC, 0);
}

tree::TerminalNode* ARMParser::ArithmeticOpContext::AND() {
  return getToken(ARMParser::AND, 0);
}

tree::TerminalNode* ARMParser::ArithmeticOpContext::BIC() {
  return getToken(ARMParser::BIC, 0);
}

tree::TerminalNode* ARMParser::ArithmeticOpContext::EOR() {
  return getToken(ARMParser::EOR, 0);
}

tree::TerminalNode* ARMParser::ArithmeticOpContext::ORR() {
  return getToken(ARMParser::ORR, 0);
}

ARMParser::CondContext* ARMParser::ArithmeticOpContext::cond() {
  return getRuleContext<ARMParser::CondContext>(0);
}

tree::TerminalNode* ARMParser::ArithmeticOpContext::UPDATEFLAG() {
  return getToken(ARMParser::UPDATEFLAG, 0);
}

ARMParser::ArithmeticOpContext::ArithmeticOpContext(Data_processing_instructionContext *ctx) { copyFrom(ctx); }

void ARMParser::ArithmeticOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ARMParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArithmeticOp(this);
}
void ARMParser::ArithmeticOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ARMParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArithmeticOp(this);
}

antlrcpp::Any ARMParser::ArithmeticOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ARMParserVisitor*>(visitor))
    return parserVisitor->visitArithmeticOp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CompareOpContext ------------------------------------------------------------------

tree::TerminalNode* ARMParser::CompareOpContext::SPACE() {
  return getToken(ARMParser::SPACE, 0);
}

ARMParser::RegContext* ARMParser::CompareOpContext::reg() {
  return getRuleContext<ARMParser::RegContext>(0);
}

tree::TerminalNode* ARMParser::CompareOpContext::COMMA() {
  return getToken(ARMParser::COMMA, 0);
}

ARMParser::Shifter_operandContext* ARMParser::CompareOpContext::shifter_operand() {
  return getRuleContext<ARMParser::Shifter_operandContext>(0);
}

tree::TerminalNode* ARMParser::CompareOpContext::CMP() {
  return getToken(ARMParser::CMP, 0);
}

tree::TerminalNode* ARMParser::CompareOpContext::CMN() {
  return getToken(ARMParser::CMN, 0);
}

tree::TerminalNode* ARMParser::CompareOpContext::TST() {
  return getToken(ARMParser::TST, 0);
}

tree::TerminalNode* ARMParser::CompareOpContext::TEQ() {
  return getToken(ARMParser::TEQ, 0);
}

ARMParser::CondContext* ARMParser::CompareOpContext::cond() {
  return getRuleContext<ARMParser::CondContext>(0);
}

ARMParser::CompareOpContext::CompareOpContext(Data_processing_instructionContext *ctx) { copyFrom(ctx); }

void ARMParser::CompareOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ARMParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompareOp(this);
}
void ARMParser::CompareOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ARMParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompareOp(this);
}

antlrcpp::Any ARMParser::CompareOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ARMParserVisitor*>(visitor))
    return parserVisitor->visitCompareOp(this);
  else
    return visitor->visitChildren(this);
}
ARMParser::Data_processing_instructionContext* ARMParser::data_processing_instruction() {
  Data_processing_instructionContext *_localctx = _tracker.createInstance<Data_processing_instructionContext>(_ctx, getState());
  enterRule(_localctx, 18, ARMParser::RuleData_processing_instruction);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(110);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ARMParser::MOV:
      case ARMParser::MVN: {
        _localctx = dynamic_cast<Data_processing_instructionContext *>(_tracker.createInstance<ARMParser::MoveOpContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(75);
        dynamic_cast<MoveOpContext *>(_localctx)->opcode = _input->LT(1);
        _la = _input->LA(1);
        if (!(_la == ARMParser::MOV

        || _la == ARMParser::MVN)) {
          dynamic_cast<MoveOpContext *>(_localctx)->opcode = _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(77);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
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
          | (1ULL << ARMParser::AL))) != 0)) {
          setState(76);
          cond();
        }
        setState(80);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == ARMParser::UPDATEFLAG) {
          setState(79);
          match(ARMParser::UPDATEFLAG);
        }
        setState(82);
        match(ARMParser::SPACE);
        setState(83);
        reg();
        setState(84);
        match(ARMParser::COMMA);
        setState(85);
        shifter_operand();
        break;
      }

      case ARMParser::TST:
      case ARMParser::TEQ:
      case ARMParser::CMP:
      case ARMParser::CMN: {
        _localctx = dynamic_cast<Data_processing_instructionContext *>(_tracker.createInstance<ARMParser::CompareOpContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(87);
        dynamic_cast<CompareOpContext *>(_localctx)->opcode = _input->LT(1);
        _la = _input->LA(1);
        if (!((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << ARMParser::TST)
          | (1ULL << ARMParser::TEQ)
          | (1ULL << ARMParser::CMP)
          | (1ULL << ARMParser::CMN))) != 0))) {
          dynamic_cast<CompareOpContext *>(_localctx)->opcode = _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(89);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
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
          | (1ULL << ARMParser::AL))) != 0)) {
          setState(88);
          cond();
        }
        setState(91);
        match(ARMParser::SPACE);
        setState(92);
        reg();
        setState(93);
        match(ARMParser::COMMA);
        setState(94);
        shifter_operand();
        break;
      }

      case ARMParser::AND:
      case ARMParser::EOR:
      case ARMParser::SUB:
      case ARMParser::RSB:
      case ARMParser::ADD:
      case ARMParser::ADC:
      case ARMParser::SBC:
      case ARMParser::RSC:
      case ARMParser::ORR:
      case ARMParser::BIC: {
        _localctx = dynamic_cast<Data_processing_instructionContext *>(_tracker.createInstance<ARMParser::ArithmeticOpContext>(_localctx));
        enterOuterAlt(_localctx, 3);
        setState(96);
        dynamic_cast<ArithmeticOpContext *>(_localctx)->opcode = _input->LT(1);
        _la = _input->LA(1);
        if (!((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << ARMParser::AND)
          | (1ULL << ARMParser::EOR)
          | (1ULL << ARMParser::SUB)
          | (1ULL << ARMParser::RSB)
          | (1ULL << ARMParser::ADD)
          | (1ULL << ARMParser::ADC)
          | (1ULL << ARMParser::SBC)
          | (1ULL << ARMParser::RSC)
          | (1ULL << ARMParser::ORR)
          | (1ULL << ARMParser::BIC))) != 0))) {
          dynamic_cast<ArithmeticOpContext *>(_localctx)->opcode = _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(98);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
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
          | (1ULL << ARMParser::AL))) != 0)) {
          setState(97);
          cond();
        }
        setState(101);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == ARMParser::UPDATEFLAG) {
          setState(100);
          match(ARMParser::UPDATEFLAG);
        }
        setState(103);
        match(ARMParser::SPACE);
        setState(104);
        reg();
        setState(105);
        match(ARMParser::COMMA);
        setState(106);
        reg();
        setState(107);
        match(ARMParser::COMMA);
        setState(108);
        shifter_operand();
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

//----------------- Shifter_operandContext ------------------------------------------------------------------

ARMParser::Shifter_operandContext::Shifter_operandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ARMParser::Shifter_operandContext::getRuleIndex() const {
  return ARMParser::RuleShifter_operand;
}

void ARMParser::Shifter_operandContext::copyFrom(Shifter_operandContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Op2registerContext ------------------------------------------------------------------

ARMParser::RegContext* ARMParser::Op2registerContext::reg() {
  return getRuleContext<ARMParser::RegContext>(0);
}

ARMParser::Op2registerContext::Op2registerContext(Shifter_operandContext *ctx) { copyFrom(ctx); }

void ARMParser::Op2registerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ARMParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOp2register(this);
}
void ARMParser::Op2registerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ARMParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOp2register(this);
}

antlrcpp::Any ARMParser::Op2registerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ARMParserVisitor*>(visitor))
    return parserVisitor->visitOp2register(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Op2immediateContext ------------------------------------------------------------------

ARMParser::ImmediateContext* ARMParser::Op2immediateContext::immediate() {
  return getRuleContext<ARMParser::ImmediateContext>(0);
}

ARMParser::Op2immediateContext::Op2immediateContext(Shifter_operandContext *ctx) { copyFrom(ctx); }

void ARMParser::Op2immediateContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ARMParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOp2immediate(this);
}
void ARMParser::Op2immediateContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ARMParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOp2immediate(this);
}

antlrcpp::Any ARMParser::Op2immediateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ARMParserVisitor*>(visitor))
    return parserVisitor->visitOp2immediate(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Op2inlineShiftContext ------------------------------------------------------------------

ARMParser::RegContext* ARMParser::Op2inlineShiftContext::reg() {
  return getRuleContext<ARMParser::RegContext>(0);
}

tree::TerminalNode* ARMParser::Op2inlineShiftContext::COMMA() {
  return getToken(ARMParser::COMMA, 0);
}

ARMParser::Shift_operationContext* ARMParser::Op2inlineShiftContext::shift_operation() {
  return getRuleContext<ARMParser::Shift_operationContext>(0);
}

ARMParser::Op2inlineShiftContext::Op2inlineShiftContext(Shifter_operandContext *ctx) { copyFrom(ctx); }

void ARMParser::Op2inlineShiftContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ARMParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOp2inlineShift(this);
}
void ARMParser::Op2inlineShiftContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ARMParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOp2inlineShift(this);
}

antlrcpp::Any ARMParser::Op2inlineShiftContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ARMParserVisitor*>(visitor))
    return parserVisitor->visitOp2inlineShift(this);
  else
    return visitor->visitChildren(this);
}
ARMParser::Shifter_operandContext* ARMParser::shifter_operand() {
  Shifter_operandContext *_localctx = _tracker.createInstance<Shifter_operandContext>(_ctx, getState());
  enterRule(_localctx, 20, ARMParser::RuleShifter_operand);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(118);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<Shifter_operandContext *>(_tracker.createInstance<ARMParser::Op2immediateContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(112);
      immediate();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<Shifter_operandContext *>(_tracker.createInstance<ARMParser::Op2registerContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(113);
      reg();
      break;
    }

    case 3: {
      _localctx = dynamic_cast<Shifter_operandContext *>(_tracker.createInstance<ARMParser::Op2inlineShiftContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(114);
      reg();
      setState(115);
      match(ARMParser::COMMA);
      setState(116);
      shift_operation();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Shift_operationContext ------------------------------------------------------------------

ARMParser::Shift_operationContext::Shift_operationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ARMParser::Shift_operationContext::getRuleIndex() const {
  return ARMParser::RuleShift_operation;
}

void ARMParser::Shift_operationContext::copyFrom(Shift_operationContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ShiftByImmediateContext ------------------------------------------------------------------

ARMParser::ShiftopcodeContext* ARMParser::ShiftByImmediateContext::shiftopcode() {
  return getRuleContext<ARMParser::ShiftopcodeContext>(0);
}

ARMParser::ImmediateContext* ARMParser::ShiftByImmediateContext::immediate() {
  return getRuleContext<ARMParser::ImmediateContext>(0);
}

ARMParser::ShiftByImmediateContext::ShiftByImmediateContext(Shift_operationContext *ctx) { copyFrom(ctx); }

void ARMParser::ShiftByImmediateContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ARMParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterShiftByImmediate(this);
}
void ARMParser::ShiftByImmediateContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ARMParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitShiftByImmediate(this);
}

antlrcpp::Any ARMParser::ShiftByImmediateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ARMParserVisitor*>(visitor))
    return parserVisitor->visitShiftByImmediate(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ShiftByRegisterContext ------------------------------------------------------------------

ARMParser::ShiftopcodeContext* ARMParser::ShiftByRegisterContext::shiftopcode() {
  return getRuleContext<ARMParser::ShiftopcodeContext>(0);
}

ARMParser::RegContext* ARMParser::ShiftByRegisterContext::reg() {
  return getRuleContext<ARMParser::RegContext>(0);
}

ARMParser::ShiftByRegisterContext::ShiftByRegisterContext(Shift_operationContext *ctx) { copyFrom(ctx); }

void ARMParser::ShiftByRegisterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ARMParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterShiftByRegister(this);
}
void ARMParser::ShiftByRegisterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ARMParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitShiftByRegister(this);
}

antlrcpp::Any ARMParser::ShiftByRegisterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ARMParserVisitor*>(visitor))
    return parserVisitor->visitShiftByRegister(this);
  else
    return visitor->visitChildren(this);
}
//----------------- RotateWithExtendContext ------------------------------------------------------------------

tree::TerminalNode* ARMParser::RotateWithExtendContext::RRXI() {
  return getToken(ARMParser::RRXI, 0);
}

ARMParser::RotateWithExtendContext::RotateWithExtendContext(Shift_operationContext *ctx) { copyFrom(ctx); }

void ARMParser::RotateWithExtendContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ARMParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRotateWithExtend(this);
}
void ARMParser::RotateWithExtendContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ARMParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRotateWithExtend(this);
}

antlrcpp::Any ARMParser::RotateWithExtendContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ARMParserVisitor*>(visitor))
    return parserVisitor->visitRotateWithExtend(this);
  else
    return visitor->visitChildren(this);
}
ARMParser::Shift_operationContext* ARMParser::shift_operation() {
  Shift_operationContext *_localctx = _tracker.createInstance<Shift_operationContext>(_ctx, getState());
  enterRule(_localctx, 22, ARMParser::RuleShift_operation);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(127);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<Shift_operationContext *>(_tracker.createInstance<ARMParser::ShiftByImmediateContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(120);
      shiftopcode();
      setState(121);
      immediate();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<Shift_operationContext *>(_tracker.createInstance<ARMParser::ShiftByRegisterContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(123);
      shiftopcode();
      setState(124);
      reg();
      break;
    }

    case 3: {
      _localctx = dynamic_cast<Shift_operationContext *>(_tracker.createInstance<ARMParser::RotateWithExtendContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(126);
      match(ARMParser::RRXI);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ShiftopcodeContext ------------------------------------------------------------------

ARMParser::ShiftopcodeContext::ShiftopcodeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ARMParser::ShiftopcodeContext::LSLI() {
  return getToken(ARMParser::LSLI, 0);
}

tree::TerminalNode* ARMParser::ShiftopcodeContext::LSRI() {
  return getToken(ARMParser::LSRI, 0);
}

tree::TerminalNode* ARMParser::ShiftopcodeContext::ASRI() {
  return getToken(ARMParser::ASRI, 0);
}

tree::TerminalNode* ARMParser::ShiftopcodeContext::RORI() {
  return getToken(ARMParser::RORI, 0);
}


size_t ARMParser::ShiftopcodeContext::getRuleIndex() const {
  return ARMParser::RuleShiftopcode;
}

void ARMParser::ShiftopcodeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ARMParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterShiftopcode(this);
}

void ARMParser::ShiftopcodeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ARMParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitShiftopcode(this);
}


antlrcpp::Any ARMParser::ShiftopcodeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ARMParserVisitor*>(visitor))
    return parserVisitor->visitShiftopcode(this);
  else
    return visitor->visitChildren(this);
}

ARMParser::ShiftopcodeContext* ARMParser::shiftopcode() {
  ShiftopcodeContext *_localctx = _tracker.createInstance<ShiftopcodeContext>(_ctx, getState());
  enterRule(_localctx, 24, ARMParser::RuleShiftopcode);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(129);
    _la = _input->LA(1);
    if (!(((((_la - 73) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 73)) & ((1ULL << (ARMParser::LSLI - 73))
      | (1ULL << (ARMParser::LSRI - 73))
      | (1ULL << (ARMParser::ASRI - 73))
      | (1ULL << (ARMParser::RORI - 73)))) != 0))) {
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

//----------------- Multiply_instructionContext ------------------------------------------------------------------

ARMParser::Multiply_instructionContext::Multiply_instructionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ARMParser::Multiply_instructionContext::getRuleIndex() const {
  return ARMParser::RuleMultiply_instruction;
}

void ARMParser::Multiply_instructionContext::copyFrom(Multiply_instructionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- LongMulContext ------------------------------------------------------------------

tree::TerminalNode* ARMParser::LongMulContext::SPACE() {
  return getToken(ARMParser::SPACE, 0);
}

std::vector<ARMParser::RegContext *> ARMParser::LongMulContext::reg() {
  return getRuleContexts<ARMParser::RegContext>();
}

ARMParser::RegContext* ARMParser::LongMulContext::reg(size_t i) {
  return getRuleContext<ARMParser::RegContext>(i);
}

std::vector<tree::TerminalNode *> ARMParser::LongMulContext::COMMA() {
  return getTokens(ARMParser::COMMA);
}

tree::TerminalNode* ARMParser::LongMulContext::COMMA(size_t i) {
  return getToken(ARMParser::COMMA, i);
}

tree::TerminalNode* ARMParser::LongMulContext::MLA() {
  return getToken(ARMParser::MLA, 0);
}

tree::TerminalNode* ARMParser::LongMulContext::SMULL() {
  return getToken(ARMParser::SMULL, 0);
}

tree::TerminalNode* ARMParser::LongMulContext::UMULL() {
  return getToken(ARMParser::UMULL, 0);
}

tree::TerminalNode* ARMParser::LongMulContext::SMLAL() {
  return getToken(ARMParser::SMLAL, 0);
}

tree::TerminalNode* ARMParser::LongMulContext::UMLAL() {
  return getToken(ARMParser::UMLAL, 0);
}

ARMParser::CondContext* ARMParser::LongMulContext::cond() {
  return getRuleContext<ARMParser::CondContext>(0);
}

tree::TerminalNode* ARMParser::LongMulContext::UPDATEFLAG() {
  return getToken(ARMParser::UPDATEFLAG, 0);
}

ARMParser::LongMulContext::LongMulContext(Multiply_instructionContext *ctx) { copyFrom(ctx); }

void ARMParser::LongMulContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ARMParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLongMul(this);
}
void ARMParser::LongMulContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ARMParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLongMul(this);
}

antlrcpp::Any ARMParser::LongMulContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ARMParserVisitor*>(visitor))
    return parserVisitor->visitLongMul(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NormalMulContext ------------------------------------------------------------------

tree::TerminalNode* ARMParser::NormalMulContext::SPACE() {
  return getToken(ARMParser::SPACE, 0);
}

std::vector<ARMParser::RegContext *> ARMParser::NormalMulContext::reg() {
  return getRuleContexts<ARMParser::RegContext>();
}

ARMParser::RegContext* ARMParser::NormalMulContext::reg(size_t i) {
  return getRuleContext<ARMParser::RegContext>(i);
}

std::vector<tree::TerminalNode *> ARMParser::NormalMulContext::COMMA() {
  return getTokens(ARMParser::COMMA);
}

tree::TerminalNode* ARMParser::NormalMulContext::COMMA(size_t i) {
  return getToken(ARMParser::COMMA, i);
}

tree::TerminalNode* ARMParser::NormalMulContext::MUL() {
  return getToken(ARMParser::MUL, 0);
}

ARMParser::CondContext* ARMParser::NormalMulContext::cond() {
  return getRuleContext<ARMParser::CondContext>(0);
}

tree::TerminalNode* ARMParser::NormalMulContext::UPDATEFLAG() {
  return getToken(ARMParser::UPDATEFLAG, 0);
}

ARMParser::NormalMulContext::NormalMulContext(Multiply_instructionContext *ctx) { copyFrom(ctx); }

void ARMParser::NormalMulContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ARMParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNormalMul(this);
}
void ARMParser::NormalMulContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ARMParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNormalMul(this);
}

antlrcpp::Any ARMParser::NormalMulContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ARMParserVisitor*>(visitor))
    return parserVisitor->visitNormalMul(this);
  else
    return visitor->visitChildren(this);
}
ARMParser::Multiply_instructionContext* ARMParser::multiply_instruction() {
  Multiply_instructionContext *_localctx = _tracker.createInstance<Multiply_instructionContext>(_ctx, getState());
  enterRule(_localctx, 26, ARMParser::RuleMultiply_instruction);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(161);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ARMParser::MUL: {
        _localctx = dynamic_cast<Multiply_instructionContext *>(_tracker.createInstance<ARMParser::NormalMulContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(131);
        dynamic_cast<NormalMulContext *>(_localctx)->opcode = match(ARMParser::MUL);
        setState(133);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
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
          | (1ULL << ARMParser::AL))) != 0)) {
          setState(132);
          cond();
        }
        setState(136);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == ARMParser::UPDATEFLAG) {
          setState(135);
          match(ARMParser::UPDATEFLAG);
        }
        setState(138);
        match(ARMParser::SPACE);
        setState(139);
        reg();
        setState(140);
        match(ARMParser::COMMA);
        setState(141);
        reg();
        setState(142);
        match(ARMParser::COMMA);
        setState(143);
        reg();
        break;
      }

      case ARMParser::MLA:
      case ARMParser::SMULL:
      case ARMParser::UMULL:
      case ARMParser::SMLAL:
      case ARMParser::UMLAL: {
        _localctx = dynamic_cast<Multiply_instructionContext *>(_tracker.createInstance<ARMParser::LongMulContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(145);
        dynamic_cast<LongMulContext *>(_localctx)->opcode = _input->LT(1);
        _la = _input->LA(1);
        if (!((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << ARMParser::MLA)
          | (1ULL << ARMParser::SMULL)
          | (1ULL << ARMParser::UMULL)
          | (1ULL << ARMParser::SMLAL)
          | (1ULL << ARMParser::UMLAL))) != 0))) {
          dynamic_cast<LongMulContext *>(_localctx)->opcode = _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(147);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
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
          | (1ULL << ARMParser::AL))) != 0)) {
          setState(146);
          cond();
        }
        setState(150);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == ARMParser::UPDATEFLAG) {
          setState(149);
          match(ARMParser::UPDATEFLAG);
        }
        setState(152);
        match(ARMParser::SPACE);
        setState(153);
        reg();
        setState(154);
        match(ARMParser::COMMA);
        setState(155);
        reg();
        setState(156);
        match(ARMParser::COMMA);
        setState(157);
        reg();
        setState(158);
        match(ARMParser::COMMA);
        setState(159);
        reg();
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

//----------------- Load_store_instructionContext ------------------------------------------------------------------

ARMParser::Load_store_instructionContext::Load_store_instructionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ARMParser::Load_store_instructionContext::getRuleIndex() const {
  return ARMParser::RuleLoad_store_instruction;
}

void ARMParser::Load_store_instructionContext::copyFrom(Load_store_instructionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- SecondLoadStoreContext ------------------------------------------------------------------

tree::TerminalNode* ARMParser::SecondLoadStoreContext::SPACE() {
  return getToken(ARMParser::SPACE, 0);
}

ARMParser::RegContext* ARMParser::SecondLoadStoreContext::reg() {
  return getRuleContext<ARMParser::RegContext>(0);
}

tree::TerminalNode* ARMParser::SecondLoadStoreContext::COMMA() {
  return getToken(ARMParser::COMMA, 0);
}

ARMParser::Addressing_modeContext* ARMParser::SecondLoadStoreContext::addressing_mode() {
  return getRuleContext<ARMParser::Addressing_modeContext>(0);
}

tree::TerminalNode* ARMParser::SecondLoadStoreContext::DOUBLEWORD() {
  return getToken(ARMParser::DOUBLEWORD, 0);
}

tree::TerminalNode* ARMParser::SecondLoadStoreContext::HALFWORD() {
  return getToken(ARMParser::HALFWORD, 0);
}

tree::TerminalNode* ARMParser::SecondLoadStoreContext::SIGNEDHALFWORD() {
  return getToken(ARMParser::SIGNEDHALFWORD, 0);
}

tree::TerminalNode* ARMParser::SecondLoadStoreContext::SIGNEDBYTE() {
  return getToken(ARMParser::SIGNEDBYTE, 0);
}

tree::TerminalNode* ARMParser::SecondLoadStoreContext::LDR() {
  return getToken(ARMParser::LDR, 0);
}

tree::TerminalNode* ARMParser::SecondLoadStoreContext::STR() {
  return getToken(ARMParser::STR, 0);
}

ARMParser::CondContext* ARMParser::SecondLoadStoreContext::cond() {
  return getRuleContext<ARMParser::CondContext>(0);
}

ARMParser::SecondLoadStoreContext::SecondLoadStoreContext(Load_store_instructionContext *ctx) { copyFrom(ctx); }

void ARMParser::SecondLoadStoreContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ARMParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSecondLoadStore(this);
}
void ARMParser::SecondLoadStoreContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ARMParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSecondLoadStore(this);
}

antlrcpp::Any ARMParser::SecondLoadStoreContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ARMParserVisitor*>(visitor))
    return parserVisitor->visitSecondLoadStore(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PushPopMakroContext ------------------------------------------------------------------

tree::TerminalNode* ARMParser::PushPopMakroContext::LBRACE() {
  return getToken(ARMParser::LBRACE, 0);
}

std::vector<ARMParser::RegContext *> ARMParser::PushPopMakroContext::reg() {
  return getRuleContexts<ARMParser::RegContext>();
}

ARMParser::RegContext* ARMParser::PushPopMakroContext::reg(size_t i) {
  return getRuleContext<ARMParser::RegContext>(i);
}

tree::TerminalNode* ARMParser::PushPopMakroContext::RBRACE() {
  return getToken(ARMParser::RBRACE, 0);
}

tree::TerminalNode* ARMParser::PushPopMakroContext::PUSH() {
  return getToken(ARMParser::PUSH, 0);
}

tree::TerminalNode* ARMParser::PushPopMakroContext::POP() {
  return getToken(ARMParser::POP, 0);
}

std::vector<tree::TerminalNode *> ARMParser::PushPopMakroContext::COMMA() {
  return getTokens(ARMParser::COMMA);
}

tree::TerminalNode* ARMParser::PushPopMakroContext::COMMA(size_t i) {
  return getToken(ARMParser::COMMA, i);
}

ARMParser::PushPopMakroContext::PushPopMakroContext(Load_store_instructionContext *ctx) { copyFrom(ctx); }

void ARMParser::PushPopMakroContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ARMParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPushPopMakro(this);
}
void ARMParser::PushPopMakroContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ARMParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPushPopMakro(this);
}

antlrcpp::Any ARMParser::PushPopMakroContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ARMParserVisitor*>(visitor))
    return parserVisitor->visitPushPopMakro(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FirstLoadStoreContext ------------------------------------------------------------------

tree::TerminalNode* ARMParser::FirstLoadStoreContext::SPACE() {
  return getToken(ARMParser::SPACE, 0);
}

ARMParser::RegContext* ARMParser::FirstLoadStoreContext::reg() {
  return getRuleContext<ARMParser::RegContext>(0);
}

tree::TerminalNode* ARMParser::FirstLoadStoreContext::COMMA() {
  return getToken(ARMParser::COMMA, 0);
}

ARMParser::Addressing_modeContext* ARMParser::FirstLoadStoreContext::addressing_mode() {
  return getRuleContext<ARMParser::Addressing_modeContext>(0);
}

tree::TerminalNode* ARMParser::FirstLoadStoreContext::LDR() {
  return getToken(ARMParser::LDR, 0);
}

tree::TerminalNode* ARMParser::FirstLoadStoreContext::STR() {
  return getToken(ARMParser::STR, 0);
}

ARMParser::CondContext* ARMParser::FirstLoadStoreContext::cond() {
  return getRuleContext<ARMParser::CondContext>(0);
}

tree::TerminalNode* ARMParser::FirstLoadStoreContext::FB() {
  return getToken(ARMParser::FB, 0);
}

tree::TerminalNode* ARMParser::FirstLoadStoreContext::PRIVILEGE() {
  return getToken(ARMParser::PRIVILEGE, 0);
}

ARMParser::FirstLoadStoreContext::FirstLoadStoreContext(Load_store_instructionContext *ctx) { copyFrom(ctx); }

void ARMParser::FirstLoadStoreContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ARMParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFirstLoadStore(this);
}
void ARMParser::FirstLoadStoreContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ARMParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFirstLoadStore(this);
}

antlrcpp::Any ARMParser::FirstLoadStoreContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ARMParserVisitor*>(visitor))
    return parserVisitor->visitFirstLoadStore(this);
  else
    return visitor->visitChildren(this);
}
ARMParser::Load_store_instructionContext* ARMParser::load_store_instruction() {
  Load_store_instructionContext *_localctx = _tracker.createInstance<Load_store_instructionContext>(_ctx, getState());
  enterRule(_localctx, 28, ARMParser::RuleLoad_store_instruction);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(200);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<Load_store_instructionContext *>(_tracker.createInstance<ARMParser::FirstLoadStoreContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(163);
      dynamic_cast<FirstLoadStoreContext *>(_localctx)->opcode = _input->LT(1);
      _la = _input->LA(1);
      if (!(_la == ARMParser::LDR

      || _la == ARMParser::STR)) {
        dynamic_cast<FirstLoadStoreContext *>(_localctx)->opcode = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(165);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
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
        | (1ULL << ARMParser::AL))) != 0)) {
        setState(164);
        cond();
      }
      setState(168);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == ARMParser::FB) {
        setState(167);
        match(ARMParser::FB);
      }
      setState(171);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == ARMParser::PRIVILEGE) {
        setState(170);
        match(ARMParser::PRIVILEGE);
      }
      setState(173);
      match(ARMParser::SPACE);
      setState(174);
      reg();
      setState(175);
      match(ARMParser::COMMA);
      setState(176);
      addressing_mode();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<Load_store_instructionContext *>(_tracker.createInstance<ARMParser::SecondLoadStoreContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(178);
      dynamic_cast<SecondLoadStoreContext *>(_localctx)->opcode = _input->LT(1);
      _la = _input->LA(1);
      if (!(_la == ARMParser::LDR

      || _la == ARMParser::STR)) {
        dynamic_cast<SecondLoadStoreContext *>(_localctx)->opcode = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(180);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
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
        | (1ULL << ARMParser::AL))) != 0)) {
        setState(179);
        cond();
      }
      setState(182);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << ARMParser::DOUBLEWORD)
        | (1ULL << ARMParser::HALFWORD)
        | (1ULL << ARMParser::SIGNEDHALFWORD)
        | (1ULL << ARMParser::SIGNEDBYTE))) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(183);
      match(ARMParser::SPACE);
      setState(184);
      reg();
      setState(185);
      match(ARMParser::COMMA);
      setState(186);
      addressing_mode();
      break;
    }

    case 3: {
      _localctx = dynamic_cast<Load_store_instructionContext *>(_tracker.createInstance<ARMParser::PushPopMakroContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(188);
      dynamic_cast<PushPopMakroContext *>(_localctx)->makro = _input->LT(1);
      _la = _input->LA(1);
      if (!(_la == ARMParser::PUSH

      || _la == ARMParser::POP)) {
        dynamic_cast<PushPopMakroContext *>(_localctx)->makro = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(189);
      match(ARMParser::LBRACE);
      setState(190);
      reg();
      setState(195);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == ARMParser::COMMA) {
        setState(191);
        match(ARMParser::COMMA);
        setState(192);
        reg();
        setState(197);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(198);
      match(ARMParser::RBRACE);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Addressing_modeContext ------------------------------------------------------------------

ARMParser::Addressing_modeContext::Addressing_modeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ARMParser::Addressing_modeContext::getRuleIndex() const {
  return ARMParser::RuleAddressing_mode;
}

void ARMParser::Addressing_modeContext::copyFrom(Addressing_modeContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- PostIndexedAddressingContext ------------------------------------------------------------------

tree::TerminalNode* ARMParser::PostIndexedAddressingContext::LBRACKET() {
  return getToken(ARMParser::LBRACKET, 0);
}

tree::TerminalNode* ARMParser::PostIndexedAddressingContext::RBRACKET() {
  return getToken(ARMParser::RBRACKET, 0);
}

tree::TerminalNode* ARMParser::PostIndexedAddressingContext::COMMA() {
  return getToken(ARMParser::COMMA, 0);
}

ARMParser::Shifter_operandContext* ARMParser::PostIndexedAddressingContext::shifter_operand() {
  return getRuleContext<ARMParser::Shifter_operandContext>(0);
}

ARMParser::RegContext* ARMParser::PostIndexedAddressingContext::reg() {
  return getRuleContext<ARMParser::RegContext>(0);
}

ARMParser::PostIndexedAddressingContext::PostIndexedAddressingContext(Addressing_modeContext *ctx) { copyFrom(ctx); }

void ARMParser::PostIndexedAddressingContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ARMParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPostIndexedAddressing(this);
}
void ARMParser::PostIndexedAddressingContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ARMParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPostIndexedAddressing(this);
}

antlrcpp::Any ARMParser::PostIndexedAddressingContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ARMParserVisitor*>(visitor))
    return parserVisitor->visitPostIndexedAddressing(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PreIndexedAddressingContext ------------------------------------------------------------------

tree::TerminalNode* ARMParser::PreIndexedAddressingContext::LBRACKET() {
  return getToken(ARMParser::LBRACKET, 0);
}

tree::TerminalNode* ARMParser::PreIndexedAddressingContext::SPECIALRBRACKET() {
  return getToken(ARMParser::SPECIALRBRACKET, 0);
}

ARMParser::RegContext* ARMParser::PreIndexedAddressingContext::reg() {
  return getRuleContext<ARMParser::RegContext>(0);
}

tree::TerminalNode* ARMParser::PreIndexedAddressingContext::COMMA() {
  return getToken(ARMParser::COMMA, 0);
}

ARMParser::Shifter_operandContext* ARMParser::PreIndexedAddressingContext::shifter_operand() {
  return getRuleContext<ARMParser::Shifter_operandContext>(0);
}

ARMParser::PreIndexedAddressingContext::PreIndexedAddressingContext(Addressing_modeContext *ctx) { copyFrom(ctx); }

void ARMParser::PreIndexedAddressingContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ARMParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPreIndexedAddressing(this);
}
void ARMParser::PreIndexedAddressingContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ARMParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPreIndexedAddressing(this);
}

antlrcpp::Any ARMParser::PreIndexedAddressingContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ARMParserVisitor*>(visitor))
    return parserVisitor->visitPreIndexedAddressing(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NormalAddressingContext ------------------------------------------------------------------

tree::TerminalNode* ARMParser::NormalAddressingContext::LBRACKET() {
  return getToken(ARMParser::LBRACKET, 0);
}

tree::TerminalNode* ARMParser::NormalAddressingContext::RBRACKET() {
  return getToken(ARMParser::RBRACKET, 0);
}

ARMParser::RegContext* ARMParser::NormalAddressingContext::reg() {
  return getRuleContext<ARMParser::RegContext>(0);
}

tree::TerminalNode* ARMParser::NormalAddressingContext::COMMA() {
  return getToken(ARMParser::COMMA, 0);
}

ARMParser::Shifter_operandContext* ARMParser::NormalAddressingContext::shifter_operand() {
  return getRuleContext<ARMParser::Shifter_operandContext>(0);
}

ARMParser::NormalAddressingContext::NormalAddressingContext(Addressing_modeContext *ctx) { copyFrom(ctx); }

void ARMParser::NormalAddressingContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ARMParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNormalAddressing(this);
}
void ARMParser::NormalAddressingContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ARMParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNormalAddressing(this);
}

antlrcpp::Any ARMParser::NormalAddressingContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ARMParserVisitor*>(visitor))
    return parserVisitor->visitNormalAddressing(this);
  else
    return visitor->visitChildren(this);
}
ARMParser::Addressing_modeContext* ARMParser::addressing_mode() {
  Addressing_modeContext *_localctx = _tracker.createInstance<Addressing_modeContext>(_ctx, getState());
  enterRule(_localctx, 30, ARMParser::RuleAddressing_mode);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(224);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<Addressing_modeContext *>(_tracker.createInstance<ARMParser::NormalAddressingContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(202);
      match(ARMParser::LBRACKET);
      setState(203);
      dynamic_cast<NormalAddressingContext *>(_localctx)->baseRegister = reg();
      setState(206);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == ARMParser::COMMA) {
        setState(204);
        match(ARMParser::COMMA);
        setState(205);
        shifter_operand();
      }
      setState(208);
      match(ARMParser::RBRACKET);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<Addressing_modeContext *>(_tracker.createInstance<ARMParser::PreIndexedAddressingContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(210);
      match(ARMParser::LBRACKET);
      setState(211);
      dynamic_cast<PreIndexedAddressingContext *>(_localctx)->baseRegister = reg();
      setState(214);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == ARMParser::COMMA) {
        setState(212);
        match(ARMParser::COMMA);
        setState(213);
        shifter_operand();
      }
      setState(216);
      match(ARMParser::SPECIALRBRACKET);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<Addressing_modeContext *>(_tracker.createInstance<ARMParser::PostIndexedAddressingContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(218);
      match(ARMParser::LBRACKET);
      setState(219);
      dynamic_cast<PostIndexedAddressingContext *>(_localctx)->baseRegister = reg();
      setState(220);
      match(ARMParser::RBRACKET);
      setState(221);
      match(ARMParser::COMMA);
      setState(222);
      shifter_operand();
      break;
    }

    }
   
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
  "immediate", "label", "branch_instruction", "data_processing_instruction", 
  "shifter_operand", "shift_operation", "shiftopcode", "multiply_instruction", 
  "load_store_instruction", "addressing_mode"
};

std::vector<std::string> ARMParser::_literalNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "'push'", "'pop'", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "'#'", "", "", "", "", "','", "'['", 
  "']'", "'{'", "'}'", "']!'"
};

std::vector<std::string> ARMParser::_symbolicNames = {
  "", "AND", "EOR", "SUB", "RSB", "ADD", "ADC", "SBC", "RSC", "TST", "TEQ", 
  "CMP", "CMN", "ORR", "MOV", "BIC", "MVN", "MUL", "MLA", "SMULL", "UMULL", 
  "SMLAL", "UMLAL", "LDR", "STR", "PUSH", "POP", "FB", "BL", "BLX", "BX", 
  "BXJ", "EQ", "NE", "CS", "CC", "MI", "PL", "VS", "VC", "HI", "LS", "GE", 
  "LT", "GT", "LE", "AL", "UPDATEFLAG", "PRIVILEGE", "DOUBLEWORD", "HALFWORD", 
  "SIGNEDHALFWORD", "SIGNEDBYTE", "LABEL", "LOCALLABEL", "SPACE", "TOSKIP", 
  "R0", "R1", "R2", "R3", "R4", "R5", "R6", "R7", "R8", "R9", "R10", "R11", 
  "R12", "R13", "R14", "R15", "LSLI", "LSRI", "ASRI", "RORI", "RRXI", "HASH", 
  "HEX", "NUMBER", "WSPARAM", "NEWLINE", "COMMA", "LBRACKET", "RBRACKET", 
  "LBRACE", "RBRACE", "SPECIALRBRACKET", "LABELREF"
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
    0x3, 0x5b, 0xe5, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x4, 
    0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x3, 0x2, 
    0x5, 0x2, 0x24, 0xa, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x6, 0x3, 0x29, 
    0xa, 0x3, 0xd, 0x3, 0xe, 0x3, 0x2a, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x2f, 
    0xa, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x35, 0xa, 
    0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0x42, 0xa, 0xa, 
    0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0x48, 0xa, 0xa, 0x3, 
    0xa, 0x3, 0xa, 0x5, 0xa, 0x4c, 0xa, 0xa, 0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 
    0x50, 0xa, 0xb, 0x3, 0xb, 0x5, 0xb, 0x53, 0xa, 0xb, 0x3, 0xb, 0x3, 0xb, 
    0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0x5c, 0xa, 
    0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 
    0xb, 0x5, 0xb, 0x65, 0xa, 0xb, 0x3, 0xb, 0x5, 0xb, 0x68, 0xa, 0xb, 0x3, 
    0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x5, 
    0xb, 0x71, 0xa, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xc, 0x5, 0xc, 0x79, 0xa, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0x82, 0xa, 0xd, 0x3, 0xe, 
    0x3, 0xe, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0x88, 0xa, 0xf, 0x3, 0xf, 0x5, 
    0xf, 0x8b, 0xa, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 
    0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0x96, 0xa, 0xf, 0x3, 
    0xf, 0x5, 0xf, 0x99, 0xa, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 
    0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0xa4, 0xa, 
    0xf, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0xa8, 0xa, 0x10, 0x3, 0x10, 0x5, 
    0x10, 0xab, 0xa, 0x10, 0x3, 0x10, 0x5, 0x10, 0xae, 0xa, 0x10, 0x3, 0x10, 
    0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x5, 
    0x10, 0xb7, 0xa, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 
    0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 
    0x7, 0x10, 0xc4, 0xa, 0x10, 0xc, 0x10, 0xe, 0x10, 0xc7, 0xb, 0x10, 0x3, 
    0x10, 0x3, 0x10, 0x5, 0x10, 0xcb, 0xa, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 
    0x11, 0x3, 0x11, 0x5, 0x11, 0xd1, 0xa, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
    0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0xd9, 0xa, 0x11, 0x3, 
    0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x5, 0x11, 0xe3, 0xa, 0x11, 0x3, 0x11, 0x2, 0x2, 0x12, 0x2, 
    0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 
    0x1e, 0x20, 0x2, 0xf, 0x3, 0x2, 0x22, 0x30, 0x3, 0x2, 0x3b, 0x4a, 0x3, 
    0x2, 0x51, 0x52, 0x3, 0x2, 0x37, 0x38, 0x3, 0x2, 0x1d, 0x1e, 0x4, 0x2, 
    0x10, 0x10, 0x12, 0x12, 0x3, 0x2, 0xb, 0xe, 0x5, 0x2, 0x3, 0xa, 0xf, 
    0xf, 0x11, 0x11, 0x3, 0x2, 0x4b, 0x4e, 0x3, 0x2, 0x14, 0x18, 0x3, 0x2, 
    0x19, 0x1a, 0x3, 0x2, 0x33, 0x36, 0x3, 0x2, 0x1b, 0x1c, 0x2, 0xf8, 0x2, 
    0x23, 0x3, 0x2, 0x2, 0x2, 0x4, 0x28, 0x3, 0x2, 0x2, 0x2, 0x6, 0x2e, 
    0x3, 0x2, 0x2, 0x2, 0x8, 0x34, 0x3, 0x2, 0x2, 0x2, 0xa, 0x36, 0x3, 0x2, 
    0x2, 0x2, 0xc, 0x38, 0x3, 0x2, 0x2, 0x2, 0xe, 0x3a, 0x3, 0x2, 0x2, 0x2, 
    0x10, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x12, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x14, 
    0x70, 0x3, 0x2, 0x2, 0x2, 0x16, 0x78, 0x3, 0x2, 0x2, 0x2, 0x18, 0x81, 
    0x3, 0x2, 0x2, 0x2, 0x1a, 0x83, 0x3, 0x2, 0x2, 0x2, 0x1c, 0xa3, 0x3, 
    0x2, 0x2, 0x2, 0x1e, 0xca, 0x3, 0x2, 0x2, 0x2, 0x20, 0xe2, 0x3, 0x2, 
    0x2, 0x2, 0x22, 0x24, 0x5, 0x4, 0x3, 0x2, 0x23, 0x22, 0x3, 0x2, 0x2, 
    0x2, 0x23, 0x24, 0x3, 0x2, 0x2, 0x2, 0x24, 0x25, 0x3, 0x2, 0x2, 0x2, 
    0x25, 0x26, 0x7, 0x2, 0x2, 0x3, 0x26, 0x3, 0x3, 0x2, 0x2, 0x2, 0x27, 
    0x29, 0x5, 0x6, 0x4, 0x2, 0x28, 0x27, 0x3, 0x2, 0x2, 0x2, 0x29, 0x2a, 
    0x3, 0x2, 0x2, 0x2, 0x2a, 0x28, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x2b, 0x3, 
    0x2, 0x2, 0x2, 0x2b, 0x5, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x2f, 0x5, 0x8, 
    0x5, 0x2, 0x2d, 0x2f, 0x5, 0x10, 0x9, 0x2, 0x2e, 0x2c, 0x3, 0x2, 0x2, 
    0x2, 0x2e, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x2f, 0x7, 0x3, 0x2, 0x2, 0x2, 
    0x30, 0x35, 0x5, 0x14, 0xb, 0x2, 0x31, 0x35, 0x5, 0x1c, 0xf, 0x2, 0x32, 
    0x35, 0x5, 0x12, 0xa, 0x2, 0x33, 0x35, 0x5, 0x1e, 0x10, 0x2, 0x34, 0x30, 
    0x3, 0x2, 0x2, 0x2, 0x34, 0x31, 0x3, 0x2, 0x2, 0x2, 0x34, 0x32, 0x3, 
    0x2, 0x2, 0x2, 0x34, 0x33, 0x3, 0x2, 0x2, 0x2, 0x35, 0x9, 0x3, 0x2, 
    0x2, 0x2, 0x36, 0x37, 0x9, 0x2, 0x2, 0x2, 0x37, 0xb, 0x3, 0x2, 0x2, 
    0x2, 0x38, 0x39, 0x9, 0x3, 0x2, 0x2, 0x39, 0xd, 0x3, 0x2, 0x2, 0x2, 
    0x3a, 0x3b, 0x7, 0x50, 0x2, 0x2, 0x3b, 0x3c, 0x9, 0x4, 0x2, 0x2, 0x3c, 
    0xf, 0x3, 0x2, 0x2, 0x2, 0x3d, 0x3e, 0x9, 0x5, 0x2, 0x2, 0x3e, 0x11, 
    0x3, 0x2, 0x2, 0x2, 0x3f, 0x41, 0x9, 0x6, 0x2, 0x2, 0x40, 0x42, 0x5, 
    0xa, 0x6, 0x2, 0x41, 0x40, 0x3, 0x2, 0x2, 0x2, 0x41, 0x42, 0x3, 0x2, 
    0x2, 0x2, 0x42, 0x43, 0x3, 0x2, 0x2, 0x2, 0x43, 0x44, 0x7, 0x39, 0x2, 
    0x2, 0x44, 0x4c, 0x7, 0x5b, 0x2, 0x2, 0x45, 0x47, 0x7, 0x20, 0x2, 0x2, 
    0x46, 0x48, 0x5, 0xa, 0x6, 0x2, 0x47, 0x46, 0x3, 0x2, 0x2, 0x2, 0x47, 
    0x48, 0x3, 0x2, 0x2, 0x2, 0x48, 0x49, 0x3, 0x2, 0x2, 0x2, 0x49, 0x4a, 
    0x7, 0x39, 0x2, 0x2, 0x4a, 0x4c, 0x5, 0xc, 0x7, 0x2, 0x4b, 0x3f, 0x3, 
    0x2, 0x2, 0x2, 0x4b, 0x45, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x13, 0x3, 0x2, 
    0x2, 0x2, 0x4d, 0x4f, 0x9, 0x7, 0x2, 0x2, 0x4e, 0x50, 0x5, 0xa, 0x6, 
    0x2, 0x4f, 0x4e, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x50, 0x3, 0x2, 0x2, 0x2, 
    0x50, 0x52, 0x3, 0x2, 0x2, 0x2, 0x51, 0x53, 0x7, 0x31, 0x2, 0x2, 0x52, 
    0x51, 0x3, 0x2, 0x2, 0x2, 0x52, 0x53, 0x3, 0x2, 0x2, 0x2, 0x53, 0x54, 
    0x3, 0x2, 0x2, 0x2, 0x54, 0x55, 0x7, 0x39, 0x2, 0x2, 0x55, 0x56, 0x5, 
    0xc, 0x7, 0x2, 0x56, 0x57, 0x7, 0x55, 0x2, 0x2, 0x57, 0x58, 0x5, 0x16, 
    0xc, 0x2, 0x58, 0x71, 0x3, 0x2, 0x2, 0x2, 0x59, 0x5b, 0x9, 0x8, 0x2, 
    0x2, 0x5a, 0x5c, 0x5, 0xa, 0x6, 0x2, 0x5b, 0x5a, 0x3, 0x2, 0x2, 0x2, 
    0x5b, 0x5c, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x5d, 
    0x5e, 0x7, 0x39, 0x2, 0x2, 0x5e, 0x5f, 0x5, 0xc, 0x7, 0x2, 0x5f, 0x60, 
    0x7, 0x55, 0x2, 0x2, 0x60, 0x61, 0x5, 0x16, 0xc, 0x2, 0x61, 0x71, 0x3, 
    0x2, 0x2, 0x2, 0x62, 0x64, 0x9, 0x9, 0x2, 0x2, 0x63, 0x65, 0x5, 0xa, 
    0x6, 0x2, 0x64, 0x63, 0x3, 0x2, 0x2, 0x2, 0x64, 0x65, 0x3, 0x2, 0x2, 
    0x2, 0x65, 0x67, 0x3, 0x2, 0x2, 0x2, 0x66, 0x68, 0x7, 0x31, 0x2, 0x2, 
    0x67, 0x66, 0x3, 0x2, 0x2, 0x2, 0x67, 0x68, 0x3, 0x2, 0x2, 0x2, 0x68, 
    0x69, 0x3, 0x2, 0x2, 0x2, 0x69, 0x6a, 0x7, 0x39, 0x2, 0x2, 0x6a, 0x6b, 
    0x5, 0xc, 0x7, 0x2, 0x6b, 0x6c, 0x7, 0x55, 0x2, 0x2, 0x6c, 0x6d, 0x5, 
    0xc, 0x7, 0x2, 0x6d, 0x6e, 0x7, 0x55, 0x2, 0x2, 0x6e, 0x6f, 0x5, 0x16, 
    0xc, 0x2, 0x6f, 0x71, 0x3, 0x2, 0x2, 0x2, 0x70, 0x4d, 0x3, 0x2, 0x2, 
    0x2, 0x70, 0x59, 0x3, 0x2, 0x2, 0x2, 0x70, 0x62, 0x3, 0x2, 0x2, 0x2, 
    0x71, 0x15, 0x3, 0x2, 0x2, 0x2, 0x72, 0x79, 0x5, 0xe, 0x8, 0x2, 0x73, 
    0x79, 0x5, 0xc, 0x7, 0x2, 0x74, 0x75, 0x5, 0xc, 0x7, 0x2, 0x75, 0x76, 
    0x7, 0x55, 0x2, 0x2, 0x76, 0x77, 0x5, 0x18, 0xd, 0x2, 0x77, 0x79, 0x3, 
    0x2, 0x2, 0x2, 0x78, 0x72, 0x3, 0x2, 0x2, 0x2, 0x78, 0x73, 0x3, 0x2, 
    0x2, 0x2, 0x78, 0x74, 0x3, 0x2, 0x2, 0x2, 0x79, 0x17, 0x3, 0x2, 0x2, 
    0x2, 0x7a, 0x7b, 0x5, 0x1a, 0xe, 0x2, 0x7b, 0x7c, 0x5, 0xe, 0x8, 0x2, 
    0x7c, 0x82, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x7e, 0x5, 0x1a, 0xe, 0x2, 0x7e, 
    0x7f, 0x5, 0xc, 0x7, 0x2, 0x7f, 0x82, 0x3, 0x2, 0x2, 0x2, 0x80, 0x82, 
    0x7, 0x4f, 0x2, 0x2, 0x81, 0x7a, 0x3, 0x2, 0x2, 0x2, 0x81, 0x7d, 0x3, 
    0x2, 0x2, 0x2, 0x81, 0x80, 0x3, 0x2, 0x2, 0x2, 0x82, 0x19, 0x3, 0x2, 
    0x2, 0x2, 0x83, 0x84, 0x9, 0xa, 0x2, 0x2, 0x84, 0x1b, 0x3, 0x2, 0x2, 
    0x2, 0x85, 0x87, 0x7, 0x13, 0x2, 0x2, 0x86, 0x88, 0x5, 0xa, 0x6, 0x2, 
    0x87, 0x86, 0x3, 0x2, 0x2, 0x2, 0x87, 0x88, 0x3, 0x2, 0x2, 0x2, 0x88, 
    0x8a, 0x3, 0x2, 0x2, 0x2, 0x89, 0x8b, 0x7, 0x31, 0x2, 0x2, 0x8a, 0x89, 
    0x3, 0x2, 0x2, 0x2, 0x8a, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x8c, 0x3, 
    0x2, 0x2, 0x2, 0x8c, 0x8d, 0x7, 0x39, 0x2, 0x2, 0x8d, 0x8e, 0x5, 0xc, 
    0x7, 0x2, 0x8e, 0x8f, 0x7, 0x55, 0x2, 0x2, 0x8f, 0x90, 0x5, 0xc, 0x7, 
    0x2, 0x90, 0x91, 0x7, 0x55, 0x2, 0x2, 0x91, 0x92, 0x5, 0xc, 0x7, 0x2, 
    0x92, 0xa4, 0x3, 0x2, 0x2, 0x2, 0x93, 0x95, 0x9, 0xb, 0x2, 0x2, 0x94, 
    0x96, 0x5, 0xa, 0x6, 0x2, 0x95, 0x94, 0x3, 0x2, 0x2, 0x2, 0x95, 0x96, 
    0x3, 0x2, 0x2, 0x2, 0x96, 0x98, 0x3, 0x2, 0x2, 0x2, 0x97, 0x99, 0x7, 
    0x31, 0x2, 0x2, 0x98, 0x97, 0x3, 0x2, 0x2, 0x2, 0x98, 0x99, 0x3, 0x2, 
    0x2, 0x2, 0x99, 0x9a, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x9b, 0x7, 0x39, 0x2, 
    0x2, 0x9b, 0x9c, 0x5, 0xc, 0x7, 0x2, 0x9c, 0x9d, 0x7, 0x55, 0x2, 0x2, 
    0x9d, 0x9e, 0x5, 0xc, 0x7, 0x2, 0x9e, 0x9f, 0x7, 0x55, 0x2, 0x2, 0x9f, 
    0xa0, 0x5, 0xc, 0x7, 0x2, 0xa0, 0xa1, 0x7, 0x55, 0x2, 0x2, 0xa1, 0xa2, 
    0x5, 0xc, 0x7, 0x2, 0xa2, 0xa4, 0x3, 0x2, 0x2, 0x2, 0xa3, 0x85, 0x3, 
    0x2, 0x2, 0x2, 0xa3, 0x93, 0x3, 0x2, 0x2, 0x2, 0xa4, 0x1d, 0x3, 0x2, 
    0x2, 0x2, 0xa5, 0xa7, 0x9, 0xc, 0x2, 0x2, 0xa6, 0xa8, 0x5, 0xa, 0x6, 
    0x2, 0xa7, 0xa6, 0x3, 0x2, 0x2, 0x2, 0xa7, 0xa8, 0x3, 0x2, 0x2, 0x2, 
    0xa8, 0xaa, 0x3, 0x2, 0x2, 0x2, 0xa9, 0xab, 0x7, 0x1d, 0x2, 0x2, 0xaa, 
    0xa9, 0x3, 0x2, 0x2, 0x2, 0xaa, 0xab, 0x3, 0x2, 0x2, 0x2, 0xab, 0xad, 
    0x3, 0x2, 0x2, 0x2, 0xac, 0xae, 0x7, 0x32, 0x2, 0x2, 0xad, 0xac, 0x3, 
    0x2, 0x2, 0x2, 0xad, 0xae, 0x3, 0x2, 0x2, 0x2, 0xae, 0xaf, 0x3, 0x2, 
    0x2, 0x2, 0xaf, 0xb0, 0x7, 0x39, 0x2, 0x2, 0xb0, 0xb1, 0x5, 0xc, 0x7, 
    0x2, 0xb1, 0xb2, 0x7, 0x55, 0x2, 0x2, 0xb2, 0xb3, 0x5, 0x20, 0x11, 0x2, 
    0xb3, 0xcb, 0x3, 0x2, 0x2, 0x2, 0xb4, 0xb6, 0x9, 0xc, 0x2, 0x2, 0xb5, 
    0xb7, 0x5, 0xa, 0x6, 0x2, 0xb6, 0xb5, 0x3, 0x2, 0x2, 0x2, 0xb6, 0xb7, 
    0x3, 0x2, 0x2, 0x2, 0xb7, 0xb8, 0x3, 0x2, 0x2, 0x2, 0xb8, 0xb9, 0x9, 
    0xd, 0x2, 0x2, 0xb9, 0xba, 0x7, 0x39, 0x2, 0x2, 0xba, 0xbb, 0x5, 0xc, 
    0x7, 0x2, 0xbb, 0xbc, 0x7, 0x55, 0x2, 0x2, 0xbc, 0xbd, 0x5, 0x20, 0x11, 
    0x2, 0xbd, 0xcb, 0x3, 0x2, 0x2, 0x2, 0xbe, 0xbf, 0x9, 0xe, 0x2, 0x2, 
    0xbf, 0xc0, 0x7, 0x58, 0x2, 0x2, 0xc0, 0xc5, 0x5, 0xc, 0x7, 0x2, 0xc1, 
    0xc2, 0x7, 0x55, 0x2, 0x2, 0xc2, 0xc4, 0x5, 0xc, 0x7, 0x2, 0xc3, 0xc1, 
    0x3, 0x2, 0x2, 0x2, 0xc4, 0xc7, 0x3, 0x2, 0x2, 0x2, 0xc5, 0xc3, 0x3, 
    0x2, 0x2, 0x2, 0xc5, 0xc6, 0x3, 0x2, 0x2, 0x2, 0xc6, 0xc8, 0x3, 0x2, 
    0x2, 0x2, 0xc7, 0xc5, 0x3, 0x2, 0x2, 0x2, 0xc8, 0xc9, 0x7, 0x59, 0x2, 
    0x2, 0xc9, 0xcb, 0x3, 0x2, 0x2, 0x2, 0xca, 0xa5, 0x3, 0x2, 0x2, 0x2, 
    0xca, 0xb4, 0x3, 0x2, 0x2, 0x2, 0xca, 0xbe, 0x3, 0x2, 0x2, 0x2, 0xcb, 
    0x1f, 0x3, 0x2, 0x2, 0x2, 0xcc, 0xcd, 0x7, 0x56, 0x2, 0x2, 0xcd, 0xd0, 
    0x5, 0xc, 0x7, 0x2, 0xce, 0xcf, 0x7, 0x55, 0x2, 0x2, 0xcf, 0xd1, 0x5, 
    0x16, 0xc, 0x2, 0xd0, 0xce, 0x3, 0x2, 0x2, 0x2, 0xd0, 0xd1, 0x3, 0x2, 
    0x2, 0x2, 0xd1, 0xd2, 0x3, 0x2, 0x2, 0x2, 0xd2, 0xd3, 0x7, 0x57, 0x2, 
    0x2, 0xd3, 0xe3, 0x3, 0x2, 0x2, 0x2, 0xd4, 0xd5, 0x7, 0x56, 0x2, 0x2, 
    0xd5, 0xd8, 0x5, 0xc, 0x7, 0x2, 0xd6, 0xd7, 0x7, 0x55, 0x2, 0x2, 0xd7, 
    0xd9, 0x5, 0x16, 0xc, 0x2, 0xd8, 0xd6, 0x3, 0x2, 0x2, 0x2, 0xd8, 0xd9, 
    0x3, 0x2, 0x2, 0x2, 0xd9, 0xda, 0x3, 0x2, 0x2, 0x2, 0xda, 0xdb, 0x7, 
    0x5a, 0x2, 0x2, 0xdb, 0xe3, 0x3, 0x2, 0x2, 0x2, 0xdc, 0xdd, 0x7, 0x56, 
    0x2, 0x2, 0xdd, 0xde, 0x5, 0xc, 0x7, 0x2, 0xde, 0xdf, 0x7, 0x57, 0x2, 
    0x2, 0xdf, 0xe0, 0x7, 0x55, 0x2, 0x2, 0xe0, 0xe1, 0x5, 0x16, 0xc, 0x2, 
    0xe1, 0xe3, 0x3, 0x2, 0x2, 0x2, 0xe2, 0xcc, 0x3, 0x2, 0x2, 0x2, 0xe2, 
    0xd4, 0x3, 0x2, 0x2, 0x2, 0xe2, 0xdc, 0x3, 0x2, 0x2, 0x2, 0xe3, 0x21, 
    0x3, 0x2, 0x2, 0x2, 0x1f, 0x23, 0x2a, 0x2e, 0x34, 0x41, 0x47, 0x4b, 
    0x4f, 0x52, 0x5b, 0x64, 0x67, 0x70, 0x78, 0x81, 0x87, 0x8a, 0x95, 0x98, 
    0xa3, 0xa7, 0xaa, 0xad, 0xb6, 0xc5, 0xca, 0xd0, 0xd8, 0xe2, 
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
