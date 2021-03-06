
// Generated from H:/MyStuff/PrivateProjects/CPPProjects/ArmSimulator/src/asmeditor/AsmEditor/armparser/grammar\ARMParser.g4 by ANTLR 4.8


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
    setState(45);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ARMParser::GLOBAL)
      | (1ULL << ARMParser::DATA)
      | (1ULL << ARMParser::TEXT)
      | (1ULL << ARMParser::AND)
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
      | (1ULL << ARMParser::LSL)
      | (1ULL << ARMParser::LSR)
      | (1ULL << ARMParser::ASR)
      | (1ULL << ARMParser::ROR)
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
      | (1ULL << ARMParser::BX)
      | (1ULL << ARMParser::NOP))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & ((1ULL << (ARMParser::LABEL - 65))
      | (1ULL << (ARMParser::LOCALLABEL - 65))
      | (1ULL << (ARMParser::NL - 65)))) != 0)) {
      setState(44);
      program();
    }
    setState(47);
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
    setState(50); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(49);
      statement();
      setState(52); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ARMParser::GLOBAL)
      | (1ULL << ARMParser::DATA)
      | (1ULL << ARMParser::TEXT)
      | (1ULL << ARMParser::AND)
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
      | (1ULL << ARMParser::LSL)
      | (1ULL << ARMParser::LSR)
      | (1ULL << ARMParser::ASR)
      | (1ULL << ARMParser::ROR)
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
      | (1ULL << ARMParser::BX)
      | (1ULL << ARMParser::NOP))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & ((1ULL << (ARMParser::LABEL - 65))
      | (1ULL << (ARMParser::LOCALLABEL - 65))
      | (1ULL << (ARMParser::NL - 65)))) != 0));
   
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

ARMParser::SectionContext* ARMParser::StatementContext::section() {
  return getRuleContext<ARMParser::SectionContext>(0);
}

ARMParser::VariableContext* ARMParser::StatementContext::variable() {
  return getRuleContext<ARMParser::VariableContext>(0);
}

ARMParser::LabelContext* ARMParser::StatementContext::label() {
  return getRuleContext<ARMParser::LabelContext>(0);
}

tree::TerminalNode* ARMParser::StatementContext::NL() {
  return getToken(ARMParser::NL, 0);
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
    setState(59);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(54);
      instruction();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(55);
      section();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(56);
      variable();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(57);
      label();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(58);
      match(ARMParser::NL);
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

ARMParser::NopContext* ARMParser::InstructionContext::nop() {
  return getRuleContext<ARMParser::NopContext>(0);
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
    setState(66);
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
      case ARMParser::LSL:
      case ARMParser::LSR:
      case ARMParser::ASR:
      case ARMParser::ROR: {
        enterOuterAlt(_localctx, 1);
        setState(61);
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
        setState(62);
        multiply_instruction();
        break;
      }

      case ARMParser::FB:
      case ARMParser::BX: {
        enterOuterAlt(_localctx, 3);
        setState(63);
        branch_instruction();
        break;
      }

      case ARMParser::LDR:
      case ARMParser::STR:
      case ARMParser::PUSH:
      case ARMParser::POP: {
        enterOuterAlt(_localctx, 4);
        setState(64);
        load_store_instruction();
        break;
      }

      case ARMParser::NOP: {
        enterOuterAlt(_localctx, 5);
        setState(65);
        nop();
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

//----------------- NopContext ------------------------------------------------------------------

ARMParser::NopContext::NopContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ARMParser::NopContext::NOP() {
  return getToken(ARMParser::NOP, 0);
}


size_t ARMParser::NopContext::getRuleIndex() const {
  return ARMParser::RuleNop;
}

void ARMParser::NopContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ARMParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNop(this);
}

void ARMParser::NopContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ARMParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNop(this);
}


antlrcpp::Any ARMParser::NopContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ARMParserVisitor*>(visitor))
    return parserVisitor->visitNop(this);
  else
    return visitor->visitChildren(this);
}

ARMParser::NopContext* ARMParser::nop() {
  NopContext *_localctx = _tracker.createInstance<NopContext>(_ctx, getState());
  enterRule(_localctx, 8, ARMParser::RuleNop);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(68);
    match(ARMParser::NOP);
   
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
  enterRule(_localctx, 10, ARMParser::RuleCond);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(70);
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
  enterRule(_localctx, 12, ARMParser::RuleReg);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(72);
    _la = _input->LA(1);
    if (!(((((_la - 72) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 72)) & ((1ULL << (ARMParser::R0 - 72))
      | (1ULL << (ARMParser::R1 - 72))
      | (1ULL << (ARMParser::R2 - 72))
      | (1ULL << (ARMParser::R3 - 72))
      | (1ULL << (ARMParser::R4 - 72))
      | (1ULL << (ARMParser::R5 - 72))
      | (1ULL << (ARMParser::R6 - 72))
      | (1ULL << (ARMParser::R7 - 72))
      | (1ULL << (ARMParser::R8 - 72))
      | (1ULL << (ARMParser::R9 - 72))
      | (1ULL << (ARMParser::R10 - 72))
      | (1ULL << (ARMParser::R11 - 72))
      | (1ULL << (ARMParser::R12 - 72))
      | (1ULL << (ARMParser::R13 - 72))
      | (1ULL << (ARMParser::R14 - 72))
      | (1ULL << (ARMParser::R15 - 72)))) != 0))) {
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
  enterRule(_localctx, 14, ARMParser::RuleImmediate);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(74);
    match(ARMParser::HASH);
    setState(75);
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
  enterRule(_localctx, 16, ARMParser::RuleLabel);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(77);
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

//----------------- SectionContext ------------------------------------------------------------------

ARMParser::SectionContext::SectionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ARMParser::SectionContext::getRuleIndex() const {
  return ARMParser::RuleSection;
}

void ARMParser::SectionContext::copyFrom(SectionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- GlobalSectionContext ------------------------------------------------------------------

tree::TerminalNode* ARMParser::GlobalSectionContext::GLOBAL() {
  return getToken(ARMParser::GLOBAL, 0);
}

tree::TerminalNode* ARMParser::GlobalSectionContext::SPACE() {
  return getToken(ARMParser::SPACE, 0);
}

tree::TerminalNode* ARMParser::GlobalSectionContext::LABELREF() {
  return getToken(ARMParser::LABELREF, 0);
}

ARMParser::GlobalSectionContext::GlobalSectionContext(SectionContext *ctx) { copyFrom(ctx); }

void ARMParser::GlobalSectionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ARMParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGlobalSection(this);
}
void ARMParser::GlobalSectionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ARMParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGlobalSection(this);
}

antlrcpp::Any ARMParser::GlobalSectionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ARMParserVisitor*>(visitor))
    return parserVisitor->visitGlobalSection(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TextSectionContext ------------------------------------------------------------------

tree::TerminalNode* ARMParser::TextSectionContext::TEXT() {
  return getToken(ARMParser::TEXT, 0);
}

ARMParser::TextSectionContext::TextSectionContext(SectionContext *ctx) { copyFrom(ctx); }

void ARMParser::TextSectionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ARMParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTextSection(this);
}
void ARMParser::TextSectionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ARMParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTextSection(this);
}

antlrcpp::Any ARMParser::TextSectionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ARMParserVisitor*>(visitor))
    return parserVisitor->visitTextSection(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DataSectionContext ------------------------------------------------------------------

tree::TerminalNode* ARMParser::DataSectionContext::DATA() {
  return getToken(ARMParser::DATA, 0);
}

ARMParser::DataSectionContext::DataSectionContext(SectionContext *ctx) { copyFrom(ctx); }

void ARMParser::DataSectionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ARMParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDataSection(this);
}
void ARMParser::DataSectionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ARMParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDataSection(this);
}

antlrcpp::Any ARMParser::DataSectionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ARMParserVisitor*>(visitor))
    return parserVisitor->visitDataSection(this);
  else
    return visitor->visitChildren(this);
}
ARMParser::SectionContext* ARMParser::section() {
  SectionContext *_localctx = _tracker.createInstance<SectionContext>(_ctx, getState());
  enterRule(_localctx, 18, ARMParser::RuleSection);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(84);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ARMParser::GLOBAL: {
        _localctx = dynamic_cast<SectionContext *>(_tracker.createInstance<ARMParser::GlobalSectionContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(79);
        match(ARMParser::GLOBAL);
        setState(80);
        match(ARMParser::SPACE);
        setState(81);
        match(ARMParser::LABELREF);
        break;
      }

      case ARMParser::DATA: {
        _localctx = dynamic_cast<SectionContext *>(_tracker.createInstance<ARMParser::DataSectionContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(82);
        match(ARMParser::DATA);
        break;
      }

      case ARMParser::TEXT: {
        _localctx = dynamic_cast<SectionContext *>(_tracker.createInstance<ARMParser::TextSectionContext>(_localctx));
        enterOuterAlt(_localctx, 3);
        setState(83);
        match(ARMParser::TEXT);
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

//----------------- VariableContext ------------------------------------------------------------------

ARMParser::VariableContext::VariableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ARMParser::VariableContext::LABEL() {
  return getToken(ARMParser::LABEL, 0);
}

ARMParser::DatatypeContext* ARMParser::VariableContext::datatype() {
  return getRuleContext<ARMParser::DatatypeContext>(0);
}

ARMParser::ValueContext* ARMParser::VariableContext::value() {
  return getRuleContext<ARMParser::ValueContext>(0);
}

std::vector<tree::TerminalNode *> ARMParser::VariableContext::SPACE() {
  return getTokens(ARMParser::SPACE);
}

tree::TerminalNode* ARMParser::VariableContext::SPACE(size_t i) {
  return getToken(ARMParser::SPACE, i);
}


size_t ARMParser::VariableContext::getRuleIndex() const {
  return ARMParser::RuleVariable;
}

void ARMParser::VariableContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ARMParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariable(this);
}

void ARMParser::VariableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ARMParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariable(this);
}


antlrcpp::Any ARMParser::VariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ARMParserVisitor*>(visitor))
    return parserVisitor->visitVariable(this);
  else
    return visitor->visitChildren(this);
}

ARMParser::VariableContext* ARMParser::variable() {
  VariableContext *_localctx = _tracker.createInstance<VariableContext>(_ctx, getState());
  enterRule(_localctx, 20, ARMParser::RuleVariable);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(86);
    match(ARMParser::LABEL);
    setState(90);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ARMParser::SPACE) {
      setState(87);
      match(ARMParser::SPACE);
      setState(92);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(93);
    datatype();
    setState(94);
    value();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DatatypeContext ------------------------------------------------------------------

ARMParser::DatatypeContext::DatatypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ARMParser::DatatypeContext::WORD() {
  return getToken(ARMParser::WORD, 0);
}

tree::TerminalNode* ARMParser::DatatypeContext::BYTE() {
  return getToken(ARMParser::BYTE, 0);
}

tree::TerminalNode* ARMParser::DatatypeContext::ASCIZ() {
  return getToken(ARMParser::ASCIZ, 0);
}


size_t ARMParser::DatatypeContext::getRuleIndex() const {
  return ARMParser::RuleDatatype;
}

void ARMParser::DatatypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ARMParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDatatype(this);
}

void ARMParser::DatatypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ARMParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDatatype(this);
}


antlrcpp::Any ARMParser::DatatypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ARMParserVisitor*>(visitor))
    return parserVisitor->visitDatatype(this);
  else
    return visitor->visitChildren(this);
}

ARMParser::DatatypeContext* ARMParser::datatype() {
  DatatypeContext *_localctx = _tracker.createInstance<DatatypeContext>(_ctx, getState());
  enterRule(_localctx, 22, ARMParser::RuleDatatype);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(96);
    _la = _input->LA(1);
    if (!(((((_la - 69) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 69)) & ((1ULL << (ARMParser::WORD - 69))
      | (1ULL << (ARMParser::BYTE - 69))
      | (1ULL << (ARMParser::ASCIZ - 69)))) != 0))) {
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

//----------------- ValueContext ------------------------------------------------------------------

ARMParser::ValueContext::ValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ARMParser::ValueContext::getRuleIndex() const {
  return ARMParser::RuleValue;
}

void ARMParser::ValueContext::copyFrom(ValueContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- NumberValContext ------------------------------------------------------------------

std::vector<ARMParser::NumberContext *> ARMParser::NumberValContext::number() {
  return getRuleContexts<ARMParser::NumberContext>();
}

ARMParser::NumberContext* ARMParser::NumberValContext::number(size_t i) {
  return getRuleContext<ARMParser::NumberContext>(i);
}

std::vector<tree::TerminalNode *> ARMParser::NumberValContext::COMMA() {
  return getTokens(ARMParser::COMMA);
}

tree::TerminalNode* ARMParser::NumberValContext::COMMA(size_t i) {
  return getToken(ARMParser::COMMA, i);
}

ARMParser::NumberValContext::NumberValContext(ValueContext *ctx) { copyFrom(ctx); }

void ARMParser::NumberValContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ARMParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNumberVal(this);
}
void ARMParser::NumberValContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ARMParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNumberVal(this);
}

antlrcpp::Any ARMParser::NumberValContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ARMParserVisitor*>(visitor))
    return parserVisitor->visitNumberVal(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StringValContext ------------------------------------------------------------------

tree::TerminalNode* ARMParser::StringValContext::STRING() {
  return getToken(ARMParser::STRING, 0);
}

ARMParser::StringValContext::StringValContext(ValueContext *ctx) { copyFrom(ctx); }

void ARMParser::StringValContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ARMParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStringVal(this);
}
void ARMParser::StringValContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ARMParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStringVal(this);
}

antlrcpp::Any ARMParser::StringValContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ARMParserVisitor*>(visitor))
    return parserVisitor->visitStringVal(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LabelValContext ------------------------------------------------------------------

tree::TerminalNode* ARMParser::LabelValContext::LABELREF() {
  return getToken(ARMParser::LABELREF, 0);
}

ARMParser::LabelValContext::LabelValContext(ValueContext *ctx) { copyFrom(ctx); }

void ARMParser::LabelValContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ARMParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLabelVal(this);
}
void ARMParser::LabelValContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ARMParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLabelVal(this);
}

antlrcpp::Any ARMParser::LabelValContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ARMParserVisitor*>(visitor))
    return parserVisitor->visitLabelVal(this);
  else
    return visitor->visitChildren(this);
}
ARMParser::ValueContext* ARMParser::value() {
  ValueContext *_localctx = _tracker.createInstance<ValueContext>(_ctx, getState());
  enterRule(_localctx, 24, ARMParser::RuleValue);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(108);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ARMParser::HEX:
      case ARMParser::NUMBER: {
        _localctx = dynamic_cast<ValueContext *>(_tracker.createInstance<ARMParser::NumberValContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(98);
        number();
        setState(103);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == ARMParser::COMMA) {
          setState(99);
          match(ARMParser::COMMA);
          setState(100);
          number();
          setState(105);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        break;
      }

      case ARMParser::LABELREF: {
        _localctx = dynamic_cast<ValueContext *>(_tracker.createInstance<ARMParser::LabelValContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(106);
        match(ARMParser::LABELREF);
        break;
      }

      case ARMParser::STRING: {
        _localctx = dynamic_cast<ValueContext *>(_tracker.createInstance<ARMParser::StringValContext>(_localctx));
        enterOuterAlt(_localctx, 3);
        setState(107);
        match(ARMParser::STRING);
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

//----------------- NumberContext ------------------------------------------------------------------

ARMParser::NumberContext::NumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ARMParser::NumberContext::HEX() {
  return getToken(ARMParser::HEX, 0);
}

tree::TerminalNode* ARMParser::NumberContext::NUMBER() {
  return getToken(ARMParser::NUMBER, 0);
}


size_t ARMParser::NumberContext::getRuleIndex() const {
  return ARMParser::RuleNumber;
}

void ARMParser::NumberContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ARMParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNumber(this);
}

void ARMParser::NumberContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ARMParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNumber(this);
}


antlrcpp::Any ARMParser::NumberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ARMParserVisitor*>(visitor))
    return parserVisitor->visitNumber(this);
  else
    return visitor->visitChildren(this);
}

ARMParser::NumberContext* ARMParser::number() {
  NumberContext *_localctx = _tracker.createInstance<NumberContext>(_ctx, getState());
  enterRule(_localctx, 26, ARMParser::RuleNumber);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(110);
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

tree::TerminalNode* ARMParser::BranchToLabelContext::LINK() {
  return getToken(ARMParser::LINK, 0);
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
  enterRule(_localctx, 28, ARMParser::RuleBranch_instruction);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(127);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ARMParser::FB: {
        _localctx = dynamic_cast<Branch_instructionContext *>(_tracker.createInstance<ARMParser::BranchToLabelContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(112);
        dynamic_cast<BranchToLabelContext *>(_localctx)->opcode = match(ARMParser::FB);
        setState(114);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == ARMParser::LINK) {
          setState(113);
          match(ARMParser::LINK);
        }
        setState(117);
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
          setState(116);
          cond();
        }
        setState(119);
        match(ARMParser::SPACE);
        setState(120);
        match(ARMParser::LABELREF);
        break;
      }

      case ARMParser::BX: {
        _localctx = dynamic_cast<Branch_instructionContext *>(_tracker.createInstance<ARMParser::BranchToRegisterContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(121);
        dynamic_cast<BranchToRegisterContext *>(_localctx)->opcode = match(ARMParser::BX);
        setState(123);
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
          setState(122);
          cond();
        }
        setState(125);
        match(ARMParser::SPACE);
        setState(126);
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

tree::TerminalNode* ARMParser::ArithmeticOpContext::UPDATEFLAG() {
  return getToken(ARMParser::UPDATEFLAG, 0);
}

ARMParser::CondContext* ARMParser::ArithmeticOpContext::cond() {
  return getRuleContext<ARMParser::CondContext>(0);
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
//----------------- ShiftOpContext ------------------------------------------------------------------

tree::TerminalNode* ARMParser::ShiftOpContext::SPACE() {
  return getToken(ARMParser::SPACE, 0);
}

std::vector<ARMParser::RegContext *> ARMParser::ShiftOpContext::reg() {
  return getRuleContexts<ARMParser::RegContext>();
}

ARMParser::RegContext* ARMParser::ShiftOpContext::reg(size_t i) {
  return getRuleContext<ARMParser::RegContext>(i);
}

std::vector<tree::TerminalNode *> ARMParser::ShiftOpContext::COMMA() {
  return getTokens(ARMParser::COMMA);
}

tree::TerminalNode* ARMParser::ShiftOpContext::COMMA(size_t i) {
  return getToken(ARMParser::COMMA, i);
}

tree::TerminalNode* ARMParser::ShiftOpContext::ASR() {
  return getToken(ARMParser::ASR, 0);
}

tree::TerminalNode* ARMParser::ShiftOpContext::LSL() {
  return getToken(ARMParser::LSL, 0);
}

tree::TerminalNode* ARMParser::ShiftOpContext::LSR() {
  return getToken(ARMParser::LSR, 0);
}

tree::TerminalNode* ARMParser::ShiftOpContext::ROR() {
  return getToken(ARMParser::ROR, 0);
}

tree::TerminalNode* ARMParser::ShiftOpContext::UPDATEFLAG() {
  return getToken(ARMParser::UPDATEFLAG, 0);
}

ARMParser::CondContext* ARMParser::ShiftOpContext::cond() {
  return getRuleContext<ARMParser::CondContext>(0);
}

ARMParser::ImmediateContext* ARMParser::ShiftOpContext::immediate() {
  return getRuleContext<ARMParser::ImmediateContext>(0);
}

ARMParser::ShiftOpContext::ShiftOpContext(Data_processing_instructionContext *ctx) { copyFrom(ctx); }

void ARMParser::ShiftOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ARMParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterShiftOp(this);
}
void ARMParser::ShiftOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ARMParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitShiftOp(this);
}

antlrcpp::Any ARMParser::ShiftOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ARMParserVisitor*>(visitor))
    return parserVisitor->visitShiftOp(this);
  else
    return visitor->visitChildren(this);
}
ARMParser::Data_processing_instructionContext* ARMParser::data_processing_instruction() {
  Data_processing_instructionContext *_localctx = _tracker.createInstance<Data_processing_instructionContext>(_ctx, getState());
  enterRule(_localctx, 30, ARMParser::RuleData_processing_instruction);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(182);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ARMParser::MOV:
      case ARMParser::MVN: {
        _localctx = dynamic_cast<Data_processing_instructionContext *>(_tracker.createInstance<ARMParser::MoveOpContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(129);
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
        setState(131);
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
          setState(130);
          cond();
        }
        setState(134);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == ARMParser::UPDATEFLAG) {
          setState(133);
          match(ARMParser::UPDATEFLAG);
        }
        setState(136);
        match(ARMParser::SPACE);
        setState(137);
        reg();
        setState(138);
        match(ARMParser::COMMA);
        setState(139);
        shifter_operand();
        break;
      }

      case ARMParser::TST:
      case ARMParser::TEQ:
      case ARMParser::CMP:
      case ARMParser::CMN: {
        _localctx = dynamic_cast<Data_processing_instructionContext *>(_tracker.createInstance<ARMParser::CompareOpContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(141);
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
        setState(143);
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
          setState(142);
          cond();
        }
        setState(145);
        match(ARMParser::SPACE);
        setState(146);
        reg();
        setState(147);
        match(ARMParser::COMMA);
        setState(148);
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
        setState(150);
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
        setState(152);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == ARMParser::UPDATEFLAG) {
          setState(151);
          match(ARMParser::UPDATEFLAG);
        }
        setState(155);
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
          setState(154);
          cond();
        }
        setState(157);
        match(ARMParser::SPACE);
        setState(158);
        reg();
        setState(159);
        match(ARMParser::COMMA);
        setState(160);
        reg();
        setState(161);
        match(ARMParser::COMMA);
        setState(162);
        shifter_operand();
        break;
      }

      case ARMParser::LSL:
      case ARMParser::LSR:
      case ARMParser::ASR:
      case ARMParser::ROR: {
        _localctx = dynamic_cast<Data_processing_instructionContext *>(_tracker.createInstance<ARMParser::ShiftOpContext>(_localctx));
        enterOuterAlt(_localctx, 4);
        setState(164);
        dynamic_cast<ShiftOpContext *>(_localctx)->opcode = _input->LT(1);
        _la = _input->LA(1);
        if (!((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << ARMParser::LSL)
          | (1ULL << ARMParser::LSR)
          | (1ULL << ARMParser::ASR)
          | (1ULL << ARMParser::ROR))) != 0))) {
          dynamic_cast<ShiftOpContext *>(_localctx)->opcode = _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(166);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == ARMParser::UPDATEFLAG) {
          setState(165);
          match(ARMParser::UPDATEFLAG);
        }
        setState(169);
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
          setState(168);
          cond();
        }
        setState(171);
        match(ARMParser::SPACE);
        setState(172);
        reg();
        setState(173);
        match(ARMParser::COMMA);
        setState(174);
        reg();
        setState(180);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == ARMParser::COMMA) {
          setState(175);
          match(ARMParser::COMMA);
          setState(178);
          _errHandler->sync(this);
          switch (_input->LA(1)) {
            case ARMParser::R0:
            case ARMParser::R1:
            case ARMParser::R2:
            case ARMParser::R3:
            case ARMParser::R4:
            case ARMParser::R5:
            case ARMParser::R6:
            case ARMParser::R7:
            case ARMParser::R8:
            case ARMParser::R9:
            case ARMParser::R10:
            case ARMParser::R11:
            case ARMParser::R12:
            case ARMParser::R13:
            case ARMParser::R14:
            case ARMParser::R15: {
              setState(176);
              reg();
              break;
            }

            case ARMParser::HASH: {
              setState(177);
              immediate();
              break;
            }

          default:
            throw NoViableAltException(this);
          }
        }
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
  enterRule(_localctx, 32, ARMParser::RuleShifter_operand);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(190);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<Shifter_operandContext *>(_tracker.createInstance<ARMParser::Op2immediateContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(184);
      immediate();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<Shifter_operandContext *>(_tracker.createInstance<ARMParser::Op2registerContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(185);
      reg();
      break;
    }

    case 3: {
      _localctx = dynamic_cast<Shifter_operandContext *>(_tracker.createInstance<ARMParser::Op2inlineShiftContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(186);
      reg();
      setState(187);
      match(ARMParser::COMMA);
      setState(188);
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

tree::TerminalNode* ARMParser::RotateWithExtendContext::RRX() {
  return getToken(ARMParser::RRX, 0);
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
  enterRule(_localctx, 34, ARMParser::RuleShift_operation);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(199);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<Shift_operationContext *>(_tracker.createInstance<ARMParser::ShiftByImmediateContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(192);
      shiftopcode();
      setState(193);
      immediate();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<Shift_operationContext *>(_tracker.createInstance<ARMParser::ShiftByRegisterContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(195);
      shiftopcode();
      setState(196);
      reg();
      break;
    }

    case 3: {
      _localctx = dynamic_cast<Shift_operationContext *>(_tracker.createInstance<ARMParser::RotateWithExtendContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(198);
      match(ARMParser::RRX);
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
  enterRule(_localctx, 36, ARMParser::RuleShiftopcode);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(201);
    _la = _input->LA(1);
    if (!(((((_la - 88) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 88)) & ((1ULL << (ARMParser::LSLI - 88))
      | (1ULL << (ARMParser::LSRI - 88))
      | (1ULL << (ARMParser::ASRI - 88))
      | (1ULL << (ARMParser::RORI - 88)))) != 0))) {
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

tree::TerminalNode* ARMParser::LongMulContext::UPDATEFLAG() {
  return getToken(ARMParser::UPDATEFLAG, 0);
}

ARMParser::CondContext* ARMParser::LongMulContext::cond() {
  return getRuleContext<ARMParser::CondContext>(0);
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

std::vector<tree::TerminalNode *> ARMParser::NormalMulContext::COMMA() {
  return getTokens(ARMParser::COMMA);
}

tree::TerminalNode* ARMParser::NormalMulContext::COMMA(size_t i) {
  return getToken(ARMParser::COMMA, i);
}

tree::TerminalNode* ARMParser::NormalMulContext::MUL() {
  return getToken(ARMParser::MUL, 0);
}

std::vector<ARMParser::RegContext *> ARMParser::NormalMulContext::reg() {
  return getRuleContexts<ARMParser::RegContext>();
}

ARMParser::RegContext* ARMParser::NormalMulContext::reg(size_t i) {
  return getRuleContext<ARMParser::RegContext>(i);
}

tree::TerminalNode* ARMParser::NormalMulContext::UPDATEFLAG() {
  return getToken(ARMParser::UPDATEFLAG, 0);
}

ARMParser::CondContext* ARMParser::NormalMulContext::cond() {
  return getRuleContext<ARMParser::CondContext>(0);
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
  enterRule(_localctx, 38, ARMParser::RuleMultiply_instruction);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(233);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ARMParser::MUL: {
        _localctx = dynamic_cast<Multiply_instructionContext *>(_tracker.createInstance<ARMParser::NormalMulContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(203);
        dynamic_cast<NormalMulContext *>(_localctx)->opcode = match(ARMParser::MUL);
        setState(205);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == ARMParser::UPDATEFLAG) {
          setState(204);
          match(ARMParser::UPDATEFLAG);
        }
        setState(208);
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
          setState(207);
          cond();
        }
        setState(210);
        match(ARMParser::SPACE);
        setState(211);
        dynamic_cast<NormalMulContext *>(_localctx)->rd = reg();
        setState(212);
        match(ARMParser::COMMA);
        setState(213);
        dynamic_cast<NormalMulContext *>(_localctx)->rn = reg();
        setState(214);
        match(ARMParser::COMMA);
        setState(215);
        dynamic_cast<NormalMulContext *>(_localctx)->rm = reg();
        break;
      }

      case ARMParser::MLA:
      case ARMParser::SMULL:
      case ARMParser::UMULL:
      case ARMParser::SMLAL:
      case ARMParser::UMLAL: {
        _localctx = dynamic_cast<Multiply_instructionContext *>(_tracker.createInstance<ARMParser::LongMulContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(217);
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
        setState(219);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == ARMParser::UPDATEFLAG) {
          setState(218);
          match(ARMParser::UPDATEFLAG);
        }
        setState(222);
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
          setState(221);
          cond();
        }
        setState(224);
        match(ARMParser::SPACE);
        setState(225);
        reg();
        setState(226);
        match(ARMParser::COMMA);
        setState(227);
        reg();
        setState(228);
        match(ARMParser::COMMA);
        setState(229);
        reg();
        setState(230);
        match(ARMParser::COMMA);
        setState(231);
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

tree::TerminalNode* ARMParser::SecondLoadStoreContext::LDR() {
  return getToken(ARMParser::LDR, 0);
}

tree::TerminalNode* ARMParser::SecondLoadStoreContext::STR() {
  return getToken(ARMParser::STR, 0);
}

ARMParser::CondContext* ARMParser::SecondLoadStoreContext::cond() {
  return getRuleContext<ARMParser::CondContext>(0);
}

tree::TerminalNode* ARMParser::SecondLoadStoreContext::PRIVILEGE() {
  return getToken(ARMParser::PRIVILEGE, 0);
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

tree::TerminalNode* ARMParser::SecondLoadStoreContext::FB() {
  return getToken(ARMParser::FB, 0);
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

tree::TerminalNode* ARMParser::FirstLoadStoreContext::LABELREF() {
  return getToken(ARMParser::LABELREF, 0);
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
  enterRule(_localctx, 40, ARMParser::RuleLoad_store_instruction);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(271);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<Load_store_instructionContext *>(_tracker.createInstance<ARMParser::FirstLoadStoreContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(235);
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
      setState(237);
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
        setState(236);
        cond();
      }
      setState(239);
      match(ARMParser::SPACE);
      setState(240);
      reg();
      setState(241);
      match(ARMParser::COMMA);
      setState(242);
      match(ARMParser::LABELREF);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<Load_store_instructionContext *>(_tracker.createInstance<ARMParser::SecondLoadStoreContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(244);
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
      setState(246);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (((((_la - 38) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 38)) & ((1ULL << (ARMParser::FB - 38))
        | (1ULL << (ARMParser::DOUBLEWORD - 38))
        | (1ULL << (ARMParser::HALFWORD - 38))
        | (1ULL << (ARMParser::SIGNEDHALFWORD - 38))
        | (1ULL << (ARMParser::SIGNEDBYTE - 38)))) != 0)) {
        setState(245);
        _la = _input->LA(1);
        if (!(((((_la - 38) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 38)) & ((1ULL << (ARMParser::FB - 38))
          | (1ULL << (ARMParser::DOUBLEWORD - 38))
          | (1ULL << (ARMParser::HALFWORD - 38))
          | (1ULL << (ARMParser::SIGNEDHALFWORD - 38))
          | (1ULL << (ARMParser::SIGNEDBYTE - 38)))) != 0))) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
      }
      setState(249);
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
        setState(248);
        cond();
      }
      setState(252);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == ARMParser::PRIVILEGE) {
        setState(251);
        match(ARMParser::PRIVILEGE);
      }
      setState(254);
      match(ARMParser::SPACE);
      setState(255);
      reg();
      setState(256);
      match(ARMParser::COMMA);
      setState(257);
      addressing_mode();
      break;
    }

    case 3: {
      _localctx = dynamic_cast<Load_store_instructionContext *>(_tracker.createInstance<ARMParser::PushPopMakroContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(259);
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
      setState(260);
      match(ARMParser::LBRACE);
      setState(261);
      reg();
      setState(266);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == ARMParser::COMMA) {
        setState(262);
        match(ARMParser::COMMA);
        setState(263);
        reg();
        setState(268);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(269);
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
  enterRule(_localctx, 42, ARMParser::RuleAddressing_mode);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(295);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<Addressing_modeContext *>(_tracker.createInstance<ARMParser::NormalAddressingContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(273);
      match(ARMParser::LBRACKET);
      setState(274);
      dynamic_cast<NormalAddressingContext *>(_localctx)->baseRegister = reg();
      setState(277);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == ARMParser::COMMA) {
        setState(275);
        match(ARMParser::COMMA);
        setState(276);
        shifter_operand();
      }
      setState(279);
      match(ARMParser::RBRACKET);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<Addressing_modeContext *>(_tracker.createInstance<ARMParser::PreIndexedAddressingContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(281);
      match(ARMParser::LBRACKET);
      setState(282);
      dynamic_cast<PreIndexedAddressingContext *>(_localctx)->baseRegister = reg();
      setState(285);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == ARMParser::COMMA) {
        setState(283);
        match(ARMParser::COMMA);
        setState(284);
        shifter_operand();
      }
      setState(287);
      match(ARMParser::SPECIALRBRACKET);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<Addressing_modeContext *>(_tracker.createInstance<ARMParser::PostIndexedAddressingContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(289);
      match(ARMParser::LBRACKET);
      setState(290);
      dynamic_cast<PostIndexedAddressingContext *>(_localctx)->baseRegister = reg();
      setState(291);
      match(ARMParser::RBRACKET);
      setState(292);
      match(ARMParser::COMMA);
      setState(293);
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
  "compilationUnit", "program", "statement", "instruction", "nop", "cond", 
  "reg", "immediate", "label", "section", "variable", "datatype", "value", 
  "number", "branch_instruction", "data_processing_instruction", "shifter_operand", 
  "shift_operation", "shiftopcode", "multiply_instruction", "load_store_instruction", 
  "addressing_mode"
};

std::vector<std::string> ARMParser::_literalNames = {
  "", "", "", "", "'.global'", "'.data'", "'.text'", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "'push'", "'pop'", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "'.word'", "'.byte'", "'.asciz'", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "'#'", "", "", "", "", "','", "'['", "']'", "'{'", "'}'", "']!'"
};

std::vector<std::string> ARMParser::_symbolicNames = {
  "", "COMMENTM", "COMMENT", "TABNEWLINE", "GLOBAL", "DATA", "TEXT", "AND", 
  "EOR", "SUB", "RSB", "ADD", "ADC", "SBC", "RSC", "TST", "TEQ", "CMP", 
  "CMN", "ORR", "MOV", "BIC", "MVN", "LSL", "LSR", "ASR", "ROR", "RRX", 
  "MUL", "MLA", "SMULL", "UMULL", "SMLAL", "UMLAL", "LDR", "STR", "PUSH", 
  "POP", "FB", "LINK", "BLX", "BX", "BXJ", "NOP", "EQ", "NE", "CS", "CC", 
  "MI", "PL", "VS", "VC", "HI", "LS", "GE", "LT", "GT", "LE", "AL", "UPDATEFLAG", 
  "PRIVILEGE", "DOUBLEWORD", "HALFWORD", "SIGNEDHALFWORD", "SIGNEDBYTE", 
  "LABEL", "LOCALLABEL", "SPACE", "NL", "WORD", "BYTE", "ASCIZ", "R0", "R1", 
  "R2", "R3", "R4", "R5", "R6", "R7", "R8", "R9", "R10", "R11", "R12", "R13", 
  "R14", "R15", "LSLI", "LSRI", "ASRI", "RORI", "RRXI", "HASH", "HEX", "NUMBER", 
  "WSPARAM", "NEWLINE", "COMMA", "LBRACKET", "RBRACKET", "LBRACE", "RBRACE", 
  "SPECIALRBRACKET", "LABELREF", "STRING"
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
    0x3, 0x6b, 0x12c, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x3, 0x2, 0x5, 
    0x2, 0x30, 0xa, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x6, 0x3, 0x35, 0xa, 
    0x3, 0xd, 0x3, 0xe, 0x3, 0x36, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x5, 0x4, 0x3e, 0xa, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x5, 0x5, 0x45, 0xa, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 
    0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 
    0x57, 0xa, 0xb, 0x3, 0xc, 0x3, 0xc, 0x7, 0xc, 0x5b, 0xa, 0xc, 0xc, 0xc, 
    0xe, 0xc, 0x5e, 0xb, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 
    0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x7, 0xe, 0x68, 0xa, 0xe, 0xc, 0xe, 
    0xe, 0xe, 0x6b, 0xb, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x6f, 0xa, 0xe, 
    0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0x75, 0xa, 0x10, 
    0x3, 0x10, 0x5, 0x10, 0x78, 0xa, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 
    0x3, 0x10, 0x5, 0x10, 0x7e, 0xa, 0x10, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 
    0x82, 0xa, 0x10, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0x86, 0xa, 0x11, 0x3, 
    0x11, 0x5, 0x11, 0x89, 0xa, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
    0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0x92, 0xa, 0x11, 0x3, 
    0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x5, 0x11, 0x9b, 0xa, 0x11, 0x3, 0x11, 0x5, 0x11, 0x9e, 0xa, 0x11, 0x3, 
    0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0xa9, 0xa, 0x11, 0x3, 0x11, 0x5, 0x11, 
    0xac, 0xa, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0xb5, 0xa, 0x11, 0x5, 0x11, 0xb7, 0xa, 
    0x11, 0x5, 0x11, 0xb9, 0xa, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 
    0x12, 0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 0xc1, 0xa, 0x12, 0x3, 0x13, 0x3, 
    0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 
    0xca, 0xa, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x15, 0x3, 0x15, 0x5, 0x15, 
    0xd0, 0xa, 0x15, 0x3, 0x15, 0x5, 0x15, 0xd3, 0xa, 0x15, 0x3, 0x15, 0x3, 
    0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 
    0x3, 0x15, 0x5, 0x15, 0xde, 0xa, 0x15, 0x3, 0x15, 0x5, 0x15, 0xe1, 0xa, 
    0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 
    0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x5, 0x15, 0xec, 0xa, 0x15, 0x3, 0x16, 
    0x3, 0x16, 0x5, 0x16, 0xf0, 0xa, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 
    0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x5, 0x16, 0xf9, 0xa, 0x16, 
    0x3, 0x16, 0x5, 0x16, 0xfc, 0xa, 0x16, 0x3, 0x16, 0x5, 0x16, 0xff, 0xa, 
    0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 
    0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x7, 0x16, 0x10b, 0xa, 0x16, 
    0xc, 0x16, 0xe, 0x16, 0x10e, 0xb, 0x16, 0x3, 0x16, 0x3, 0x16, 0x5, 0x16, 
    0x112, 0xa, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x5, 0x17, 
    0x118, 0xa, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 
    0x3, 0x17, 0x5, 0x17, 0x120, 0xa, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 
    0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x5, 0x17, 0x12a, 
    0xa, 0x17, 0x3, 0x17, 0x2, 0x2, 0x18, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 
    0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 
    0x26, 0x28, 0x2a, 0x2c, 0x2, 0x10, 0x3, 0x2, 0x2e, 0x3c, 0x3, 0x2, 0x4a, 
    0x59, 0x3, 0x2, 0x60, 0x61, 0x3, 0x2, 0x43, 0x44, 0x3, 0x2, 0x47, 0x49, 
    0x4, 0x2, 0x16, 0x16, 0x18, 0x18, 0x3, 0x2, 0x11, 0x14, 0x5, 0x2, 0x9, 
    0x10, 0x15, 0x15, 0x17, 0x17, 0x3, 0x2, 0x19, 0x1c, 0x3, 0x2, 0x5a, 
    0x5d, 0x3, 0x2, 0x1f, 0x23, 0x3, 0x2, 0x24, 0x25, 0x4, 0x2, 0x28, 0x28, 
    0x3f, 0x42, 0x3, 0x2, 0x26, 0x27, 0x2, 0x149, 0x2, 0x2f, 0x3, 0x2, 0x2, 
    0x2, 0x4, 0x34, 0x3, 0x2, 0x2, 0x2, 0x6, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x8, 
    0x44, 0x3, 0x2, 0x2, 0x2, 0xa, 0x46, 0x3, 0x2, 0x2, 0x2, 0xc, 0x48, 
    0x3, 0x2, 0x2, 0x2, 0xe, 0x4a, 0x3, 0x2, 0x2, 0x2, 0x10, 0x4c, 0x3, 
    0x2, 0x2, 0x2, 0x12, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x14, 0x56, 0x3, 0x2, 
    0x2, 0x2, 0x16, 0x58, 0x3, 0x2, 0x2, 0x2, 0x18, 0x62, 0x3, 0x2, 0x2, 
    0x2, 0x1a, 0x6e, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x70, 0x3, 0x2, 0x2, 0x2, 
    0x1e, 0x81, 0x3, 0x2, 0x2, 0x2, 0x20, 0xb8, 0x3, 0x2, 0x2, 0x2, 0x22, 
    0xc0, 0x3, 0x2, 0x2, 0x2, 0x24, 0xc9, 0x3, 0x2, 0x2, 0x2, 0x26, 0xcb, 
    0x3, 0x2, 0x2, 0x2, 0x28, 0xeb, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x111, 0x3, 
    0x2, 0x2, 0x2, 0x2c, 0x129, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x30, 0x5, 0x4, 
    0x3, 0x2, 0x2f, 0x2e, 0x3, 0x2, 0x2, 0x2, 0x2f, 0x30, 0x3, 0x2, 0x2, 
    0x2, 0x30, 0x31, 0x3, 0x2, 0x2, 0x2, 0x31, 0x32, 0x7, 0x2, 0x2, 0x3, 
    0x32, 0x3, 0x3, 0x2, 0x2, 0x2, 0x33, 0x35, 0x5, 0x6, 0x4, 0x2, 0x34, 
    0x33, 0x3, 0x2, 0x2, 0x2, 0x35, 0x36, 0x3, 0x2, 0x2, 0x2, 0x36, 0x34, 
    0x3, 0x2, 0x2, 0x2, 0x36, 0x37, 0x3, 0x2, 0x2, 0x2, 0x37, 0x5, 0x3, 
    0x2, 0x2, 0x2, 0x38, 0x3e, 0x5, 0x8, 0x5, 0x2, 0x39, 0x3e, 0x5, 0x14, 
    0xb, 0x2, 0x3a, 0x3e, 0x5, 0x16, 0xc, 0x2, 0x3b, 0x3e, 0x5, 0x12, 0xa, 
    0x2, 0x3c, 0x3e, 0x7, 0x46, 0x2, 0x2, 0x3d, 0x38, 0x3, 0x2, 0x2, 0x2, 
    0x3d, 0x39, 0x3, 0x2, 0x2, 0x2, 0x3d, 0x3a, 0x3, 0x2, 0x2, 0x2, 0x3d, 
    0x3b, 0x3, 0x2, 0x2, 0x2, 0x3d, 0x3c, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x7, 
    0x3, 0x2, 0x2, 0x2, 0x3f, 0x45, 0x5, 0x20, 0x11, 0x2, 0x40, 0x45, 0x5, 
    0x28, 0x15, 0x2, 0x41, 0x45, 0x5, 0x1e, 0x10, 0x2, 0x42, 0x45, 0x5, 
    0x2a, 0x16, 0x2, 0x43, 0x45, 0x5, 0xa, 0x6, 0x2, 0x44, 0x3f, 0x3, 0x2, 
    0x2, 0x2, 0x44, 0x40, 0x3, 0x2, 0x2, 0x2, 0x44, 0x41, 0x3, 0x2, 0x2, 
    0x2, 0x44, 0x42, 0x3, 0x2, 0x2, 0x2, 0x44, 0x43, 0x3, 0x2, 0x2, 0x2, 
    0x45, 0x9, 0x3, 0x2, 0x2, 0x2, 0x46, 0x47, 0x7, 0x2d, 0x2, 0x2, 0x47, 
    0xb, 0x3, 0x2, 0x2, 0x2, 0x48, 0x49, 0x9, 0x2, 0x2, 0x2, 0x49, 0xd, 
    0x3, 0x2, 0x2, 0x2, 0x4a, 0x4b, 0x9, 0x3, 0x2, 0x2, 0x4b, 0xf, 0x3, 
    0x2, 0x2, 0x2, 0x4c, 0x4d, 0x7, 0x5f, 0x2, 0x2, 0x4d, 0x4e, 0x9, 0x4, 
    0x2, 0x2, 0x4e, 0x11, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x50, 0x9, 0x5, 0x2, 
    0x2, 0x50, 0x13, 0x3, 0x2, 0x2, 0x2, 0x51, 0x52, 0x7, 0x6, 0x2, 0x2, 
    0x52, 0x53, 0x7, 0x45, 0x2, 0x2, 0x53, 0x57, 0x7, 0x6a, 0x2, 0x2, 0x54, 
    0x57, 0x7, 0x7, 0x2, 0x2, 0x55, 0x57, 0x7, 0x8, 0x2, 0x2, 0x56, 0x51, 
    0x3, 0x2, 0x2, 0x2, 0x56, 0x54, 0x3, 0x2, 0x2, 0x2, 0x56, 0x55, 0x3, 
    0x2, 0x2, 0x2, 0x57, 0x15, 0x3, 0x2, 0x2, 0x2, 0x58, 0x5c, 0x7, 0x43, 
    0x2, 0x2, 0x59, 0x5b, 0x7, 0x45, 0x2, 0x2, 0x5a, 0x59, 0x3, 0x2, 0x2, 
    0x2, 0x5b, 0x5e, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x5a, 0x3, 0x2, 0x2, 0x2, 
    0x5c, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x5d, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x5e, 
    0x5c, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x60, 0x5, 0x18, 0xd, 0x2, 0x60, 0x61, 
    0x5, 0x1a, 0xe, 0x2, 0x61, 0x17, 0x3, 0x2, 0x2, 0x2, 0x62, 0x63, 0x9, 
    0x6, 0x2, 0x2, 0x63, 0x19, 0x3, 0x2, 0x2, 0x2, 0x64, 0x69, 0x5, 0x1c, 
    0xf, 0x2, 0x65, 0x66, 0x7, 0x64, 0x2, 0x2, 0x66, 0x68, 0x5, 0x1c, 0xf, 
    0x2, 0x67, 0x65, 0x3, 0x2, 0x2, 0x2, 0x68, 0x6b, 0x3, 0x2, 0x2, 0x2, 
    0x69, 0x67, 0x3, 0x2, 0x2, 0x2, 0x69, 0x6a, 0x3, 0x2, 0x2, 0x2, 0x6a, 
    0x6f, 0x3, 0x2, 0x2, 0x2, 0x6b, 0x69, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x6f, 
    0x7, 0x6a, 0x2, 0x2, 0x6d, 0x6f, 0x7, 0x6b, 0x2, 0x2, 0x6e, 0x64, 0x3, 
    0x2, 0x2, 0x2, 0x6e, 0x6c, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x6d, 0x3, 0x2, 
    0x2, 0x2, 0x6f, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x70, 0x71, 0x9, 0x4, 0x2, 
    0x2, 0x71, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x72, 0x74, 0x7, 0x28, 0x2, 0x2, 
    0x73, 0x75, 0x7, 0x29, 0x2, 0x2, 0x74, 0x73, 0x3, 0x2, 0x2, 0x2, 0x74, 
    0x75, 0x3, 0x2, 0x2, 0x2, 0x75, 0x77, 0x3, 0x2, 0x2, 0x2, 0x76, 0x78, 
    0x5, 0xc, 0x7, 0x2, 0x77, 0x76, 0x3, 0x2, 0x2, 0x2, 0x77, 0x78, 0x3, 
    0x2, 0x2, 0x2, 0x78, 0x79, 0x3, 0x2, 0x2, 0x2, 0x79, 0x7a, 0x7, 0x45, 
    0x2, 0x2, 0x7a, 0x82, 0x7, 0x6a, 0x2, 0x2, 0x7b, 0x7d, 0x7, 0x2b, 0x2, 
    0x2, 0x7c, 0x7e, 0x5, 0xc, 0x7, 0x2, 0x7d, 0x7c, 0x3, 0x2, 0x2, 0x2, 
    0x7d, 0x7e, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x7f, 
    0x80, 0x7, 0x45, 0x2, 0x2, 0x80, 0x82, 0x5, 0xe, 0x8, 0x2, 0x81, 0x72, 
    0x3, 0x2, 0x2, 0x2, 0x81, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x82, 0x1f, 0x3, 
    0x2, 0x2, 0x2, 0x83, 0x85, 0x9, 0x7, 0x2, 0x2, 0x84, 0x86, 0x5, 0xc, 
    0x7, 0x2, 0x85, 0x84, 0x3, 0x2, 0x2, 0x2, 0x85, 0x86, 0x3, 0x2, 0x2, 
    0x2, 0x86, 0x88, 0x3, 0x2, 0x2, 0x2, 0x87, 0x89, 0x7, 0x3d, 0x2, 0x2, 
    0x88, 0x87, 0x3, 0x2, 0x2, 0x2, 0x88, 0x89, 0x3, 0x2, 0x2, 0x2, 0x89, 
    0x8a, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x8b, 0x7, 0x45, 0x2, 0x2, 0x8b, 0x8c, 
    0x5, 0xe, 0x8, 0x2, 0x8c, 0x8d, 0x7, 0x64, 0x2, 0x2, 0x8d, 0x8e, 0x5, 
    0x22, 0x12, 0x2, 0x8e, 0xb9, 0x3, 0x2, 0x2, 0x2, 0x8f, 0x91, 0x9, 0x8, 
    0x2, 0x2, 0x90, 0x92, 0x5, 0xc, 0x7, 0x2, 0x91, 0x90, 0x3, 0x2, 0x2, 
    0x2, 0x91, 0x92, 0x3, 0x2, 0x2, 0x2, 0x92, 0x93, 0x3, 0x2, 0x2, 0x2, 
    0x93, 0x94, 0x7, 0x45, 0x2, 0x2, 0x94, 0x95, 0x5, 0xe, 0x8, 0x2, 0x95, 
    0x96, 0x7, 0x64, 0x2, 0x2, 0x96, 0x97, 0x5, 0x22, 0x12, 0x2, 0x97, 0xb9, 
    0x3, 0x2, 0x2, 0x2, 0x98, 0x9a, 0x9, 0x9, 0x2, 0x2, 0x99, 0x9b, 0x7, 
    0x3d, 0x2, 0x2, 0x9a, 0x99, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x9b, 0x3, 0x2, 
    0x2, 0x2, 0x9b, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x9e, 0x5, 0xc, 0x7, 
    0x2, 0x9d, 0x9c, 0x3, 0x2, 0x2, 0x2, 0x9d, 0x9e, 0x3, 0x2, 0x2, 0x2, 
    0x9e, 0x9f, 0x3, 0x2, 0x2, 0x2, 0x9f, 0xa0, 0x7, 0x45, 0x2, 0x2, 0xa0, 
    0xa1, 0x5, 0xe, 0x8, 0x2, 0xa1, 0xa2, 0x7, 0x64, 0x2, 0x2, 0xa2, 0xa3, 
    0x5, 0xe, 0x8, 0x2, 0xa3, 0xa4, 0x7, 0x64, 0x2, 0x2, 0xa4, 0xa5, 0x5, 
    0x22, 0x12, 0x2, 0xa5, 0xb9, 0x3, 0x2, 0x2, 0x2, 0xa6, 0xa8, 0x9, 0xa, 
    0x2, 0x2, 0xa7, 0xa9, 0x7, 0x3d, 0x2, 0x2, 0xa8, 0xa7, 0x3, 0x2, 0x2, 
    0x2, 0xa8, 0xa9, 0x3, 0x2, 0x2, 0x2, 0xa9, 0xab, 0x3, 0x2, 0x2, 0x2, 
    0xaa, 0xac, 0x5, 0xc, 0x7, 0x2, 0xab, 0xaa, 0x3, 0x2, 0x2, 0x2, 0xab, 
    0xac, 0x3, 0x2, 0x2, 0x2, 0xac, 0xad, 0x3, 0x2, 0x2, 0x2, 0xad, 0xae, 
    0x7, 0x45, 0x2, 0x2, 0xae, 0xaf, 0x5, 0xe, 0x8, 0x2, 0xaf, 0xb0, 0x7, 
    0x64, 0x2, 0x2, 0xb0, 0xb6, 0x5, 0xe, 0x8, 0x2, 0xb1, 0xb4, 0x7, 0x64, 
    0x2, 0x2, 0xb2, 0xb5, 0x5, 0xe, 0x8, 0x2, 0xb3, 0xb5, 0x5, 0x10, 0x9, 
    0x2, 0xb4, 0xb2, 0x3, 0x2, 0x2, 0x2, 0xb4, 0xb3, 0x3, 0x2, 0x2, 0x2, 
    0xb5, 0xb7, 0x3, 0x2, 0x2, 0x2, 0xb6, 0xb1, 0x3, 0x2, 0x2, 0x2, 0xb6, 
    0xb7, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xb9, 0x3, 0x2, 0x2, 0x2, 0xb8, 0x83, 
    0x3, 0x2, 0x2, 0x2, 0xb8, 0x8f, 0x3, 0x2, 0x2, 0x2, 0xb8, 0x98, 0x3, 
    0x2, 0x2, 0x2, 0xb8, 0xa6, 0x3, 0x2, 0x2, 0x2, 0xb9, 0x21, 0x3, 0x2, 
    0x2, 0x2, 0xba, 0xc1, 0x5, 0x10, 0x9, 0x2, 0xbb, 0xc1, 0x5, 0xe, 0x8, 
    0x2, 0xbc, 0xbd, 0x5, 0xe, 0x8, 0x2, 0xbd, 0xbe, 0x7, 0x64, 0x2, 0x2, 
    0xbe, 0xbf, 0x5, 0x24, 0x13, 0x2, 0xbf, 0xc1, 0x3, 0x2, 0x2, 0x2, 0xc0, 
    0xba, 0x3, 0x2, 0x2, 0x2, 0xc0, 0xbb, 0x3, 0x2, 0x2, 0x2, 0xc0, 0xbc, 
    0x3, 0x2, 0x2, 0x2, 0xc1, 0x23, 0x3, 0x2, 0x2, 0x2, 0xc2, 0xc3, 0x5, 
    0x26, 0x14, 0x2, 0xc3, 0xc4, 0x5, 0x10, 0x9, 0x2, 0xc4, 0xca, 0x3, 0x2, 
    0x2, 0x2, 0xc5, 0xc6, 0x5, 0x26, 0x14, 0x2, 0xc6, 0xc7, 0x5, 0xe, 0x8, 
    0x2, 0xc7, 0xca, 0x3, 0x2, 0x2, 0x2, 0xc8, 0xca, 0x7, 0x1d, 0x2, 0x2, 
    0xc9, 0xc2, 0x3, 0x2, 0x2, 0x2, 0xc9, 0xc5, 0x3, 0x2, 0x2, 0x2, 0xc9, 
    0xc8, 0x3, 0x2, 0x2, 0x2, 0xca, 0x25, 0x3, 0x2, 0x2, 0x2, 0xcb, 0xcc, 
    0x9, 0xb, 0x2, 0x2, 0xcc, 0x27, 0x3, 0x2, 0x2, 0x2, 0xcd, 0xcf, 0x7, 
    0x1e, 0x2, 0x2, 0xce, 0xd0, 0x7, 0x3d, 0x2, 0x2, 0xcf, 0xce, 0x3, 0x2, 
    0x2, 0x2, 0xcf, 0xd0, 0x3, 0x2, 0x2, 0x2, 0xd0, 0xd2, 0x3, 0x2, 0x2, 
    0x2, 0xd1, 0xd3, 0x5, 0xc, 0x7, 0x2, 0xd2, 0xd1, 0x3, 0x2, 0x2, 0x2, 
    0xd2, 0xd3, 0x3, 0x2, 0x2, 0x2, 0xd3, 0xd4, 0x3, 0x2, 0x2, 0x2, 0xd4, 
    0xd5, 0x7, 0x45, 0x2, 0x2, 0xd5, 0xd6, 0x5, 0xe, 0x8, 0x2, 0xd6, 0xd7, 
    0x7, 0x64, 0x2, 0x2, 0xd7, 0xd8, 0x5, 0xe, 0x8, 0x2, 0xd8, 0xd9, 0x7, 
    0x64, 0x2, 0x2, 0xd9, 0xda, 0x5, 0xe, 0x8, 0x2, 0xda, 0xec, 0x3, 0x2, 
    0x2, 0x2, 0xdb, 0xdd, 0x9, 0xc, 0x2, 0x2, 0xdc, 0xde, 0x7, 0x3d, 0x2, 
    0x2, 0xdd, 0xdc, 0x3, 0x2, 0x2, 0x2, 0xdd, 0xde, 0x3, 0x2, 0x2, 0x2, 
    0xde, 0xe0, 0x3, 0x2, 0x2, 0x2, 0xdf, 0xe1, 0x5, 0xc, 0x7, 0x2, 0xe0, 
    0xdf, 0x3, 0x2, 0x2, 0x2, 0xe0, 0xe1, 0x3, 0x2, 0x2, 0x2, 0xe1, 0xe2, 
    0x3, 0x2, 0x2, 0x2, 0xe2, 0xe3, 0x7, 0x45, 0x2, 0x2, 0xe3, 0xe4, 0x5, 
    0xe, 0x8, 0x2, 0xe4, 0xe5, 0x7, 0x64, 0x2, 0x2, 0xe5, 0xe6, 0x5, 0xe, 
    0x8, 0x2, 0xe6, 0xe7, 0x7, 0x64, 0x2, 0x2, 0xe7, 0xe8, 0x5, 0xe, 0x8, 
    0x2, 0xe8, 0xe9, 0x7, 0x64, 0x2, 0x2, 0xe9, 0xea, 0x5, 0xe, 0x8, 0x2, 
    0xea, 0xec, 0x3, 0x2, 0x2, 0x2, 0xeb, 0xcd, 0x3, 0x2, 0x2, 0x2, 0xeb, 
    0xdb, 0x3, 0x2, 0x2, 0x2, 0xec, 0x29, 0x3, 0x2, 0x2, 0x2, 0xed, 0xef, 
    0x9, 0xd, 0x2, 0x2, 0xee, 0xf0, 0x5, 0xc, 0x7, 0x2, 0xef, 0xee, 0x3, 
    0x2, 0x2, 0x2, 0xef, 0xf0, 0x3, 0x2, 0x2, 0x2, 0xf0, 0xf1, 0x3, 0x2, 
    0x2, 0x2, 0xf1, 0xf2, 0x7, 0x45, 0x2, 0x2, 0xf2, 0xf3, 0x5, 0xe, 0x8, 
    0x2, 0xf3, 0xf4, 0x7, 0x64, 0x2, 0x2, 0xf4, 0xf5, 0x7, 0x6a, 0x2, 0x2, 
    0xf5, 0x112, 0x3, 0x2, 0x2, 0x2, 0xf6, 0xf8, 0x9, 0xd, 0x2, 0x2, 0xf7, 
    0xf9, 0x9, 0xe, 0x2, 0x2, 0xf8, 0xf7, 0x3, 0x2, 0x2, 0x2, 0xf8, 0xf9, 
    0x3, 0x2, 0x2, 0x2, 0xf9, 0xfb, 0x3, 0x2, 0x2, 0x2, 0xfa, 0xfc, 0x5, 
    0xc, 0x7, 0x2, 0xfb, 0xfa, 0x3, 0x2, 0x2, 0x2, 0xfb, 0xfc, 0x3, 0x2, 
    0x2, 0x2, 0xfc, 0xfe, 0x3, 0x2, 0x2, 0x2, 0xfd, 0xff, 0x7, 0x3e, 0x2, 
    0x2, 0xfe, 0xfd, 0x3, 0x2, 0x2, 0x2, 0xfe, 0xff, 0x3, 0x2, 0x2, 0x2, 
    0xff, 0x100, 0x3, 0x2, 0x2, 0x2, 0x100, 0x101, 0x7, 0x45, 0x2, 0x2, 
    0x101, 0x102, 0x5, 0xe, 0x8, 0x2, 0x102, 0x103, 0x7, 0x64, 0x2, 0x2, 
    0x103, 0x104, 0x5, 0x2c, 0x17, 0x2, 0x104, 0x112, 0x3, 0x2, 0x2, 0x2, 
    0x105, 0x106, 0x9, 0xf, 0x2, 0x2, 0x106, 0x107, 0x7, 0x67, 0x2, 0x2, 
    0x107, 0x10c, 0x5, 0xe, 0x8, 0x2, 0x108, 0x109, 0x7, 0x64, 0x2, 0x2, 
    0x109, 0x10b, 0x5, 0xe, 0x8, 0x2, 0x10a, 0x108, 0x3, 0x2, 0x2, 0x2, 
    0x10b, 0x10e, 0x3, 0x2, 0x2, 0x2, 0x10c, 0x10a, 0x3, 0x2, 0x2, 0x2, 
    0x10c, 0x10d, 0x3, 0x2, 0x2, 0x2, 0x10d, 0x10f, 0x3, 0x2, 0x2, 0x2, 
    0x10e, 0x10c, 0x3, 0x2, 0x2, 0x2, 0x10f, 0x110, 0x7, 0x68, 0x2, 0x2, 
    0x110, 0x112, 0x3, 0x2, 0x2, 0x2, 0x111, 0xed, 0x3, 0x2, 0x2, 0x2, 0x111, 
    0xf6, 0x3, 0x2, 0x2, 0x2, 0x111, 0x105, 0x3, 0x2, 0x2, 0x2, 0x112, 0x2b, 
    0x3, 0x2, 0x2, 0x2, 0x113, 0x114, 0x7, 0x65, 0x2, 0x2, 0x114, 0x117, 
    0x5, 0xe, 0x8, 0x2, 0x115, 0x116, 0x7, 0x64, 0x2, 0x2, 0x116, 0x118, 
    0x5, 0x22, 0x12, 0x2, 0x117, 0x115, 0x3, 0x2, 0x2, 0x2, 0x117, 0x118, 
    0x3, 0x2, 0x2, 0x2, 0x118, 0x119, 0x3, 0x2, 0x2, 0x2, 0x119, 0x11a, 
    0x7, 0x66, 0x2, 0x2, 0x11a, 0x12a, 0x3, 0x2, 0x2, 0x2, 0x11b, 0x11c, 
    0x7, 0x65, 0x2, 0x2, 0x11c, 0x11f, 0x5, 0xe, 0x8, 0x2, 0x11d, 0x11e, 
    0x7, 0x64, 0x2, 0x2, 0x11e, 0x120, 0x5, 0x22, 0x12, 0x2, 0x11f, 0x11d, 
    0x3, 0x2, 0x2, 0x2, 0x11f, 0x120, 0x3, 0x2, 0x2, 0x2, 0x120, 0x121, 
    0x3, 0x2, 0x2, 0x2, 0x121, 0x122, 0x7, 0x69, 0x2, 0x2, 0x122, 0x12a, 
    0x3, 0x2, 0x2, 0x2, 0x123, 0x124, 0x7, 0x65, 0x2, 0x2, 0x124, 0x125, 
    0x5, 0xe, 0x8, 0x2, 0x125, 0x126, 0x7, 0x66, 0x2, 0x2, 0x126, 0x127, 
    0x7, 0x64, 0x2, 0x2, 0x127, 0x128, 0x5, 0x22, 0x12, 0x2, 0x128, 0x12a, 
    0x3, 0x2, 0x2, 0x2, 0x129, 0x113, 0x3, 0x2, 0x2, 0x2, 0x129, 0x11b, 
    0x3, 0x2, 0x2, 0x2, 0x129, 0x123, 0x3, 0x2, 0x2, 0x2, 0x12a, 0x2d, 0x3, 
    0x2, 0x2, 0x2, 0x28, 0x2f, 0x36, 0x3d, 0x44, 0x56, 0x5c, 0x69, 0x6e, 
    0x74, 0x77, 0x7d, 0x81, 0x85, 0x88, 0x91, 0x9a, 0x9d, 0xa8, 0xab, 0xb4, 
    0xb6, 0xb8, 0xc0, 0xc9, 0xcf, 0xd2, 0xdd, 0xe0, 0xeb, 0xef, 0xf8, 0xfb, 
    0xfe, 0x10c, 0x111, 0x117, 0x11f, 0x129, 
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
