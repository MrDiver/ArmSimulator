
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

tree::TerminalNode* ARMParser::CompilationUnitContext::Base() {
  return getToken(ARMParser::Base, 0);
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
    setState(2);
    match(ARMParser::Base);
    setState(3);
    match(ARMParser::EOF);
   
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
  "compilationUnit"
};

std::vector<std::string> ARMParser::_literalNames = {
  "", "' '"
};

std::vector<std::string> ARMParser::_symbolicNames = {
  "", "Base"
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
    0x3, 0x3, 0x8, 0x4, 0x2, 0x9, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 
    0x2, 0x2, 0x2, 0x3, 0x2, 0x2, 0x2, 0x2, 0x6, 0x2, 0x4, 0x3, 0x2, 0x2, 
    0x2, 0x4, 0x5, 0x7, 0x3, 0x2, 0x2, 0x5, 0x6, 0x7, 0x2, 0x2, 0x3, 0x6, 
    0x3, 0x3, 0x2, 0x2, 0x2, 0x2, 
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
