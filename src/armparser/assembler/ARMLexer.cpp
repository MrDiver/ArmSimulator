
// Generated from H:/MyStuff/PrivateProjects/CPPProjects/ArmSimulator/src/armparser/grammar\ARMLexer.g4 by ANTLR 4.8


#include "ARMLexer.h"


using namespace antlr4;

using namespace assembler;

ARMLexer::ARMLexer(CharStream *input) : Lexer(input) {
  _interpreter = new atn::LexerATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

ARMLexer::~ARMLexer() {
  delete _interpreter;
}

std::string ARMLexer::getGrammarFileName() const {
  return "ARMLexer.g4";
}

const std::vector<std::string>& ARMLexer::getRuleNames() const {
  return _ruleNames;
}

const std::vector<std::string>& ARMLexer::getChannelNames() const {
  return _channelNames;
}

const std::vector<std::string>& ARMLexer::getModeNames() const {
  return _modeNames;
}

const std::vector<std::string>& ARMLexer::getTokenNames() const {
  return _tokenNames;
}

dfa::Vocabulary& ARMLexer::getVocabulary() const {
  return _vocabulary;
}

const std::vector<uint16_t> ARMLexer::getSerializedATN() const {
  return _serializedATN;
}

const atn::ATN& ARMLexer::getATN() const {
  return _atn;
}




// Static vars and initialization.
std::vector<dfa::DFA> ARMLexer::_decisionToDFA;
atn::PredictionContextCache ARMLexer::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN ARMLexer::_atn;
std::vector<uint16_t> ARMLexer::_serializedATN;

std::vector<std::string> ARMLexer::_ruleNames = {
  u8"Base"
};

std::vector<std::string> ARMLexer::_channelNames = {
  "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
};

std::vector<std::string> ARMLexer::_modeNames = {
  u8"DEFAULT_MODE"
};

std::vector<std::string> ARMLexer::_literalNames = {
  "", u8"' '"
};

std::vector<std::string> ARMLexer::_symbolicNames = {
  "", u8"Base"
};

dfa::Vocabulary ARMLexer::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> ARMLexer::_tokenNames;

ARMLexer::Initializer::Initializer() {
  // This code could be in a static initializer lambda, but VS doesn't allow access to private class members from there.
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
    0x2, 0x3, 0x7, 0x8, 0x1, 0x4, 0x2, 0x9, 0x2, 0x3, 0x2, 0x3, 0x2, 0x2, 
    0x2, 0x3, 0x3, 0x3, 0x3, 0x2, 0x2, 0x2, 0x6, 0x2, 0x3, 0x3, 0x2, 0x2, 
    0x2, 0x3, 0x5, 0x3, 0x2, 0x2, 0x2, 0x5, 0x6, 0x7, 0x22, 0x2, 0x2, 0x6, 
    0x4, 0x3, 0x2, 0x2, 0x2, 0x3, 0x2, 0x2, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

ARMLexer::Initializer ARMLexer::_init;
