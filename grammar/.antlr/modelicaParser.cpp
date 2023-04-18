
// Generated from /test/Modelica-Compiler/grammar/modelica.g4 by ANTLR 4.9.2



#include "modelicaParser.h"


using namespace antlrcpp;
using namespace antlr4;

modelicaParser::modelicaParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

modelicaParser::~modelicaParser() {
  delete _interpreter;
}

std::string modelicaParser::getGrammarFileName() const {
  return "modelica.g4";
}

const std::vector<std::string>& modelicaParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& modelicaParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- Stored_definitionContext ------------------------------------------------------------------

modelicaParser::Stored_definitionContext::Stored_definitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* modelicaParser::Stored_definitionContext::EOF() {
  return getToken(modelicaParser::EOF, 0);
}

tree::TerminalNode* modelicaParser::Stored_definitionContext::WITHIN() {
  return getToken(modelicaParser::WITHIN, 0);
}

std::vector<tree::TerminalNode *> modelicaParser::Stored_definitionContext::SEMI() {
  return getTokens(modelicaParser::SEMI);
}

tree::TerminalNode* modelicaParser::Stored_definitionContext::SEMI(size_t i) {
  return getToken(modelicaParser::SEMI, i);
}

std::vector<modelicaParser::Class_definitionContext *> modelicaParser::Stored_definitionContext::class_definition() {
  return getRuleContexts<modelicaParser::Class_definitionContext>();
}

modelicaParser::Class_definitionContext* modelicaParser::Stored_definitionContext::class_definition(size_t i) {
  return getRuleContext<modelicaParser::Class_definitionContext>(i);
}

modelicaParser::NameContext* modelicaParser::Stored_definitionContext::name() {
  return getRuleContext<modelicaParser::NameContext>(0);
}

std::vector<tree::TerminalNode *> modelicaParser::Stored_definitionContext::FINAL() {
  return getTokens(modelicaParser::FINAL);
}

tree::TerminalNode* modelicaParser::Stored_definitionContext::FINAL(size_t i) {
  return getToken(modelicaParser::FINAL, i);
}


size_t modelicaParser::Stored_definitionContext::getRuleIndex() const {
  return modelicaParser::RuleStored_definition;
}


modelicaParser::Stored_definitionContext* modelicaParser::stored_definition() {
  Stored_definitionContext *_localctx = _tracker.createInstance<Stored_definitionContext>(_ctx, getState());
  enterRule(_localctx, 0, modelicaParser::RuleStored_definition);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(205);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == modelicaParser::T__0) {
      setState(204);
      match(modelicaParser::T__0);
    }
    setState(212);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == modelicaParser::WITHIN) {
      setState(207);
      match(modelicaParser::WITHIN);
      setState(209);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == modelicaParser::IDENT) {
        setState(208);
        name();
      }
      setState(211);
      match(modelicaParser::SEMI);
    }
    setState(222);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << modelicaParser::FINAL)
      | (1ULL << modelicaParser::ENCAPSULATED)
      | (1ULL << modelicaParser::PARTIAL)
      | (1ULL << modelicaParser::CLASS)
      | (1ULL << modelicaParser::MODEL)
      | (1ULL << modelicaParser::OPERATOR)
      | (1ULL << modelicaParser::RECORD)
      | (1ULL << modelicaParser::BLOCK)
      | (1ULL << modelicaParser::EXPANDABLE)
      | (1ULL << modelicaParser::CONNECTOR)
      | (1ULL << modelicaParser::TYPE)
      | (1ULL << modelicaParser::PACKAGE)
      | (1ULL << modelicaParser::PURE)
      | (1ULL << modelicaParser::IMPURE)
      | (1ULL << modelicaParser::FUNCTION))) != 0)) {
      setState(215);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == modelicaParser::FINAL) {
        setState(214);
        match(modelicaParser::FINAL);
      }
      setState(217);
      class_definition();
      setState(218);
      match(modelicaParser::SEMI);
      setState(224);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(225);
    match(modelicaParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Class_definitionContext ------------------------------------------------------------------

modelicaParser::Class_definitionContext::Class_definitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

modelicaParser::Class_prefixesContext* modelicaParser::Class_definitionContext::class_prefixes() {
  return getRuleContext<modelicaParser::Class_prefixesContext>(0);
}

modelicaParser::Class_specifierContext* modelicaParser::Class_definitionContext::class_specifier() {
  return getRuleContext<modelicaParser::Class_specifierContext>(0);
}

tree::TerminalNode* modelicaParser::Class_definitionContext::ENCAPSULATED() {
  return getToken(modelicaParser::ENCAPSULATED, 0);
}


size_t modelicaParser::Class_definitionContext::getRuleIndex() const {
  return modelicaParser::RuleClass_definition;
}


modelicaParser::Class_definitionContext* modelicaParser::class_definition() {
  Class_definitionContext *_localctx = _tracker.createInstance<Class_definitionContext>(_ctx, getState());
  enterRule(_localctx, 2, modelicaParser::RuleClass_definition);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(228);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == modelicaParser::ENCAPSULATED) {
      setState(227);
      match(modelicaParser::ENCAPSULATED);
    }
    setState(230);
    class_prefixes();
    setState(231);
    class_specifier();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Class_prefixesContext ------------------------------------------------------------------

modelicaParser::Class_prefixesContext::Class_prefixesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* modelicaParser::Class_prefixesContext::CLASS() {
  return getToken(modelicaParser::CLASS, 0);
}

tree::TerminalNode* modelicaParser::Class_prefixesContext::MODEL() {
  return getToken(modelicaParser::MODEL, 0);
}

tree::TerminalNode* modelicaParser::Class_prefixesContext::RECORD() {
  return getToken(modelicaParser::RECORD, 0);
}

tree::TerminalNode* modelicaParser::Class_prefixesContext::BLOCK() {
  return getToken(modelicaParser::BLOCK, 0);
}

tree::TerminalNode* modelicaParser::Class_prefixesContext::CONNECTOR() {
  return getToken(modelicaParser::CONNECTOR, 0);
}

tree::TerminalNode* modelicaParser::Class_prefixesContext::TYPE() {
  return getToken(modelicaParser::TYPE, 0);
}

tree::TerminalNode* modelicaParser::Class_prefixesContext::PACKAGE() {
  return getToken(modelicaParser::PACKAGE, 0);
}

tree::TerminalNode* modelicaParser::Class_prefixesContext::FUNCTION() {
  return getToken(modelicaParser::FUNCTION, 0);
}

tree::TerminalNode* modelicaParser::Class_prefixesContext::OPERATOR() {
  return getToken(modelicaParser::OPERATOR, 0);
}

tree::TerminalNode* modelicaParser::Class_prefixesContext::PARTIAL() {
  return getToken(modelicaParser::PARTIAL, 0);
}

tree::TerminalNode* modelicaParser::Class_prefixesContext::EXPANDABLE() {
  return getToken(modelicaParser::EXPANDABLE, 0);
}

tree::TerminalNode* modelicaParser::Class_prefixesContext::PURE() {
  return getToken(modelicaParser::PURE, 0);
}

tree::TerminalNode* modelicaParser::Class_prefixesContext::IMPURE() {
  return getToken(modelicaParser::IMPURE, 0);
}


size_t modelicaParser::Class_prefixesContext::getRuleIndex() const {
  return modelicaParser::RuleClass_prefixes;
}


modelicaParser::Class_prefixesContext* modelicaParser::class_prefixes() {
  Class_prefixesContext *_localctx = _tracker.createInstance<Class_prefixesContext>(_ctx, getState());
  enterRule(_localctx, 4, modelicaParser::RuleClass_prefixes);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(234);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == modelicaParser::PARTIAL) {
      setState(233);
      match(modelicaParser::PARTIAL);
    }
    setState(257);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      setState(236);
      match(modelicaParser::CLASS);
      break;
    }

    case 2: {
      setState(237);
      match(modelicaParser::MODEL);
      break;
    }

    case 3: {
      setState(239);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == modelicaParser::OPERATOR) {
        setState(238);
        match(modelicaParser::OPERATOR);
      }
      setState(241);
      match(modelicaParser::RECORD);
      break;
    }

    case 4: {
      setState(242);
      match(modelicaParser::BLOCK);
      break;
    }

    case 5: {
      setState(244);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == modelicaParser::EXPANDABLE) {
        setState(243);
        match(modelicaParser::EXPANDABLE);
      }
      setState(246);
      match(modelicaParser::CONNECTOR);
      break;
    }

    case 6: {
      setState(247);
      match(modelicaParser::TYPE);
      break;
    }

    case 7: {
      setState(248);
      match(modelicaParser::PACKAGE);
      break;
    }

    case 8: {
      setState(250);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == modelicaParser::PURE

      || _la == modelicaParser::IMPURE) {
        setState(249);
        _la = _input->LA(1);
        if (!(_la == modelicaParser::PURE

        || _la == modelicaParser::IMPURE)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
      }
      setState(253);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == modelicaParser::OPERATOR) {
        setState(252);
        match(modelicaParser::OPERATOR);
      }
      setState(255);
      match(modelicaParser::FUNCTION);
      break;
    }

    case 9: {
      setState(256);
      match(modelicaParser::OPERATOR);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdContext ------------------------------------------------------------------

modelicaParser::IdContext::IdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* modelicaParser::IdContext::IDENT() {
  return getToken(modelicaParser::IDENT, 0);
}


size_t modelicaParser::IdContext::getRuleIndex() const {
  return modelicaParser::RuleId;
}


modelicaParser::IdContext* modelicaParser::id() {
  IdContext *_localctx = _tracker.createInstance<IdContext>(_ctx, getState());
  enterRule(_localctx, 6, modelicaParser::RuleId);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(259);
    match(modelicaParser::IDENT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Class_specifierContext ------------------------------------------------------------------

modelicaParser::Class_specifierContext::Class_specifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

modelicaParser::Long_class_specifierContext* modelicaParser::Class_specifierContext::long_class_specifier() {
  return getRuleContext<modelicaParser::Long_class_specifierContext>(0);
}

modelicaParser::Short_class_specifierContext* modelicaParser::Class_specifierContext::short_class_specifier() {
  return getRuleContext<modelicaParser::Short_class_specifierContext>(0);
}

modelicaParser::Der_class_specifierContext* modelicaParser::Class_specifierContext::der_class_specifier() {
  return getRuleContext<modelicaParser::Der_class_specifierContext>(0);
}


size_t modelicaParser::Class_specifierContext::getRuleIndex() const {
  return modelicaParser::RuleClass_specifier;
}


modelicaParser::Class_specifierContext* modelicaParser::class_specifier() {
  Class_specifierContext *_localctx = _tracker.createInstance<Class_specifierContext>(_ctx, getState());
  enterRule(_localctx, 8, modelicaParser::RuleClass_specifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(264);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(261);
      long_class_specifier();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(262);
      short_class_specifier();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(263);
      der_class_specifier();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Long_class_specifierContext ------------------------------------------------------------------

modelicaParser::Long_class_specifierContext::Long_class_specifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<modelicaParser::IdContext *> modelicaParser::Long_class_specifierContext::id() {
  return getRuleContexts<modelicaParser::IdContext>();
}

modelicaParser::IdContext* modelicaParser::Long_class_specifierContext::id(size_t i) {
  return getRuleContext<modelicaParser::IdContext>(i);
}

modelicaParser::String_commentContext* modelicaParser::Long_class_specifierContext::string_comment() {
  return getRuleContext<modelicaParser::String_commentContext>(0);
}

modelicaParser::CompositionContext* modelicaParser::Long_class_specifierContext::composition() {
  return getRuleContext<modelicaParser::CompositionContext>(0);
}

tree::TerminalNode* modelicaParser::Long_class_specifierContext::END() {
  return getToken(modelicaParser::END, 0);
}

tree::TerminalNode* modelicaParser::Long_class_specifierContext::EXTENDS() {
  return getToken(modelicaParser::EXTENDS, 0);
}

modelicaParser::Class_modificationContext* modelicaParser::Long_class_specifierContext::class_modification() {
  return getRuleContext<modelicaParser::Class_modificationContext>(0);
}


size_t modelicaParser::Long_class_specifierContext::getRuleIndex() const {
  return modelicaParser::RuleLong_class_specifier;
}


modelicaParser::Long_class_specifierContext* modelicaParser::long_class_specifier() {
  Long_class_specifierContext *_localctx = _tracker.createInstance<Long_class_specifierContext>(_ctx, getState());
  enterRule(_localctx, 10, modelicaParser::RuleLong_class_specifier);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(282);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case modelicaParser::IDENT: {
        enterOuterAlt(_localctx, 1);
        setState(266);
        id();
        setState(267);
        string_comment();
        setState(268);
        composition();
        setState(269);
        match(modelicaParser::END);
        setState(270);
        id();
        break;
      }

      case modelicaParser::EXTENDS: {
        enterOuterAlt(_localctx, 2);
        setState(272);
        match(modelicaParser::EXTENDS);
        setState(273);
        id();
        setState(275);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == modelicaParser::LPAREN) {
          setState(274);
          class_modification();
        }
        setState(277);
        string_comment();
        setState(278);
        composition();
        setState(279);
        match(modelicaParser::END);
        setState(280);
        id();
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

//----------------- Short_class_specifier_nameContext ------------------------------------------------------------------

modelicaParser::Short_class_specifier_nameContext::Short_class_specifier_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

modelicaParser::IdContext* modelicaParser::Short_class_specifier_nameContext::id() {
  return getRuleContext<modelicaParser::IdContext>(0);
}


size_t modelicaParser::Short_class_specifier_nameContext::getRuleIndex() const {
  return modelicaParser::RuleShort_class_specifier_name;
}


modelicaParser::Short_class_specifier_nameContext* modelicaParser::short_class_specifier_name() {
  Short_class_specifier_nameContext *_localctx = _tracker.createInstance<Short_class_specifier_nameContext>(_ctx, getState());
  enterRule(_localctx, 12, modelicaParser::RuleShort_class_specifier_name);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(284);
    id();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Base_prefix_nameContext ------------------------------------------------------------------

modelicaParser::Base_prefix_nameContext::Base_prefix_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

modelicaParser::IdContext* modelicaParser::Base_prefix_nameContext::id() {
  return getRuleContext<modelicaParser::IdContext>(0);
}


size_t modelicaParser::Base_prefix_nameContext::getRuleIndex() const {
  return modelicaParser::RuleBase_prefix_name;
}


modelicaParser::Base_prefix_nameContext* modelicaParser::base_prefix_name() {
  Base_prefix_nameContext *_localctx = _tracker.createInstance<Base_prefix_nameContext>(_ctx, getState());
  enterRule(_localctx, 14, modelicaParser::RuleBase_prefix_name);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(286);
    id();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Short_class_specifier_enumerationContext ------------------------------------------------------------------

modelicaParser::Short_class_specifier_enumerationContext::Short_class_specifier_enumerationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* modelicaParser::Short_class_specifier_enumerationContext::ENUMERATION() {
  return getToken(modelicaParser::ENUMERATION, 0);
}


size_t modelicaParser::Short_class_specifier_enumerationContext::getRuleIndex() const {
  return modelicaParser::RuleShort_class_specifier_enumeration;
}


modelicaParser::Short_class_specifier_enumerationContext* modelicaParser::short_class_specifier_enumeration() {
  Short_class_specifier_enumerationContext *_localctx = _tracker.createInstance<Short_class_specifier_enumerationContext>(_ctx, getState());
  enterRule(_localctx, 16, modelicaParser::RuleShort_class_specifier_enumeration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(288);
    match(modelicaParser::ENUMERATION);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Specifier_enumerationContext ------------------------------------------------------------------

modelicaParser::Specifier_enumerationContext::Specifier_enumerationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

modelicaParser::Short_class_specifier_nameContext* modelicaParser::Specifier_enumerationContext::short_class_specifier_name() {
  return getRuleContext<modelicaParser::Short_class_specifier_nameContext>(0);
}

tree::TerminalNode* modelicaParser::Specifier_enumerationContext::ASSIGN() {
  return getToken(modelicaParser::ASSIGN, 0);
}

modelicaParser::Short_class_specifier_enumerationContext* modelicaParser::Specifier_enumerationContext::short_class_specifier_enumeration() {
  return getRuleContext<modelicaParser::Short_class_specifier_enumerationContext>(0);
}

tree::TerminalNode* modelicaParser::Specifier_enumerationContext::LPAREN() {
  return getToken(modelicaParser::LPAREN, 0);
}

tree::TerminalNode* modelicaParser::Specifier_enumerationContext::RPAREN() {
  return getToken(modelicaParser::RPAREN, 0);
}

tree::TerminalNode* modelicaParser::Specifier_enumerationContext::COLON() {
  return getToken(modelicaParser::COLON, 0);
}

modelicaParser::Enum_listContext* modelicaParser::Specifier_enumerationContext::enum_list() {
  return getRuleContext<modelicaParser::Enum_listContext>(0);
}


size_t modelicaParser::Specifier_enumerationContext::getRuleIndex() const {
  return modelicaParser::RuleSpecifier_enumeration;
}


modelicaParser::Specifier_enumerationContext* modelicaParser::specifier_enumeration() {
  Specifier_enumerationContext *_localctx = _tracker.createInstance<Specifier_enumerationContext>(_ctx, getState());
  enterRule(_localctx, 18, modelicaParser::RuleSpecifier_enumeration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(290);
    short_class_specifier_name();
    setState(291);
    match(modelicaParser::ASSIGN);
    setState(292);
    short_class_specifier_enumeration();
    setState(293);
    match(modelicaParser::LPAREN);
    setState(298);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case modelicaParser::IDENT:
      case modelicaParser::RPAREN: {
        setState(295);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == modelicaParser::IDENT) {
          setState(294);
          enum_list();
        }
        break;
      }

      case modelicaParser::COLON: {
        setState(297);
        match(modelicaParser::COLON);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(300);
    match(modelicaParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Base_prefix_specifierContext ------------------------------------------------------------------

modelicaParser::Base_prefix_specifierContext::Base_prefix_specifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

modelicaParser::Base_prefix_nameContext* modelicaParser::Base_prefix_specifierContext::base_prefix_name() {
  return getRuleContext<modelicaParser::Base_prefix_nameContext>(0);
}

tree::TerminalNode* modelicaParser::Base_prefix_specifierContext::ASSIGN() {
  return getToken(modelicaParser::ASSIGN, 0);
}

modelicaParser::Base_prefixContext* modelicaParser::Base_prefix_specifierContext::base_prefix() {
  return getRuleContext<modelicaParser::Base_prefixContext>(0);
}

modelicaParser::Type_specifierContext* modelicaParser::Base_prefix_specifierContext::type_specifier() {
  return getRuleContext<modelicaParser::Type_specifierContext>(0);
}

modelicaParser::Array_subscriptsContext* modelicaParser::Base_prefix_specifierContext::array_subscripts() {
  return getRuleContext<modelicaParser::Array_subscriptsContext>(0);
}

modelicaParser::Class_modification1Context* modelicaParser::Base_prefix_specifierContext::class_modification1() {
  return getRuleContext<modelicaParser::Class_modification1Context>(0);
}


size_t modelicaParser::Base_prefix_specifierContext::getRuleIndex() const {
  return modelicaParser::RuleBase_prefix_specifier;
}


modelicaParser::Base_prefix_specifierContext* modelicaParser::base_prefix_specifier() {
  Base_prefix_specifierContext *_localctx = _tracker.createInstance<Base_prefix_specifierContext>(_ctx, getState());
  enterRule(_localctx, 20, modelicaParser::RuleBase_prefix_specifier);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(302);
    base_prefix_name();
    setState(303);
    match(modelicaParser::ASSIGN);
    setState(304);
    base_prefix();
    setState(305);
    type_specifier();
    setState(307);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == modelicaParser::LBRACKET) {
      setState(306);
      array_subscripts();
    }
    setState(310);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == modelicaParser::LPAREN) {
      setState(309);
      class_modification1();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Short_class_specifierContext ------------------------------------------------------------------

modelicaParser::Short_class_specifierContext::Short_class_specifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

modelicaParser::CommentContext* modelicaParser::Short_class_specifierContext::comment() {
  return getRuleContext<modelicaParser::CommentContext>(0);
}

modelicaParser::Base_prefix_specifierContext* modelicaParser::Short_class_specifierContext::base_prefix_specifier() {
  return getRuleContext<modelicaParser::Base_prefix_specifierContext>(0);
}

modelicaParser::Specifier_enumerationContext* modelicaParser::Short_class_specifierContext::specifier_enumeration() {
  return getRuleContext<modelicaParser::Specifier_enumerationContext>(0);
}


size_t modelicaParser::Short_class_specifierContext::getRuleIndex() const {
  return modelicaParser::RuleShort_class_specifier;
}


modelicaParser::Short_class_specifierContext* modelicaParser::short_class_specifier() {
  Short_class_specifierContext *_localctx = _tracker.createInstance<Short_class_specifierContext>(_ctx, getState());
  enterRule(_localctx, 22, modelicaParser::RuleShort_class_specifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(314);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
    case 1: {
      setState(312);
      base_prefix_specifier();
      break;
    }

    case 2: {
      setState(313);
      specifier_enumeration();
      break;
    }

    default:
      break;
    }
    setState(316);
    comment();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Der_class_specifierContext ------------------------------------------------------------------

modelicaParser::Der_class_specifierContext::Der_class_specifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<modelicaParser::IdContext *> modelicaParser::Der_class_specifierContext::id() {
  return getRuleContexts<modelicaParser::IdContext>();
}

modelicaParser::IdContext* modelicaParser::Der_class_specifierContext::id(size_t i) {
  return getRuleContext<modelicaParser::IdContext>(i);
}

tree::TerminalNode* modelicaParser::Der_class_specifierContext::ASSIGN() {
  return getToken(modelicaParser::ASSIGN, 0);
}

tree::TerminalNode* modelicaParser::Der_class_specifierContext::DER() {
  return getToken(modelicaParser::DER, 0);
}

tree::TerminalNode* modelicaParser::Der_class_specifierContext::LPAREN() {
  return getToken(modelicaParser::LPAREN, 0);
}

modelicaParser::Type_specifierContext* modelicaParser::Der_class_specifierContext::type_specifier() {
  return getRuleContext<modelicaParser::Type_specifierContext>(0);
}

std::vector<tree::TerminalNode *> modelicaParser::Der_class_specifierContext::COMMA() {
  return getTokens(modelicaParser::COMMA);
}

tree::TerminalNode* modelicaParser::Der_class_specifierContext::COMMA(size_t i) {
  return getToken(modelicaParser::COMMA, i);
}

tree::TerminalNode* modelicaParser::Der_class_specifierContext::RPAREN() {
  return getToken(modelicaParser::RPAREN, 0);
}

modelicaParser::CommentContext* modelicaParser::Der_class_specifierContext::comment() {
  return getRuleContext<modelicaParser::CommentContext>(0);
}


size_t modelicaParser::Der_class_specifierContext::getRuleIndex() const {
  return modelicaParser::RuleDer_class_specifier;
}


modelicaParser::Der_class_specifierContext* modelicaParser::der_class_specifier() {
  Der_class_specifierContext *_localctx = _tracker.createInstance<Der_class_specifierContext>(_ctx, getState());
  enterRule(_localctx, 24, modelicaParser::RuleDer_class_specifier);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(318);
    id();
    setState(319);
    match(modelicaParser::ASSIGN);
    setState(320);
    match(modelicaParser::DER);
    setState(321);
    match(modelicaParser::LPAREN);
    setState(322);
    type_specifier();
    setState(323);
    match(modelicaParser::COMMA);
    setState(324);
    id();
    setState(329);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == modelicaParser::COMMA) {
      setState(325);
      match(modelicaParser::COMMA);
      setState(326);
      id();
      setState(331);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(332);
    match(modelicaParser::RPAREN);
    setState(333);
    comment();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Base_prefixContext ------------------------------------------------------------------

modelicaParser::Base_prefixContext::Base_prefixContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* modelicaParser::Base_prefixContext::INPUT() {
  return getToken(modelicaParser::INPUT, 0);
}

tree::TerminalNode* modelicaParser::Base_prefixContext::OUTPUT() {
  return getToken(modelicaParser::OUTPUT, 0);
}


size_t modelicaParser::Base_prefixContext::getRuleIndex() const {
  return modelicaParser::RuleBase_prefix;
}


modelicaParser::Base_prefixContext* modelicaParser::base_prefix() {
  Base_prefixContext *_localctx = _tracker.createInstance<Base_prefixContext>(_ctx, getState());
  enterRule(_localctx, 26, modelicaParser::RuleBase_prefix);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(336);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == modelicaParser::INPUT

    || _la == modelicaParser::OUTPUT) {
      setState(335);
      _la = _input->LA(1);
      if (!(_la == modelicaParser::INPUT

      || _la == modelicaParser::OUTPUT)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
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

//----------------- Enum_listContext ------------------------------------------------------------------

modelicaParser::Enum_listContext::Enum_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<modelicaParser::Enumeration_literalContext *> modelicaParser::Enum_listContext::enumeration_literal() {
  return getRuleContexts<modelicaParser::Enumeration_literalContext>();
}

modelicaParser::Enumeration_literalContext* modelicaParser::Enum_listContext::enumeration_literal(size_t i) {
  return getRuleContext<modelicaParser::Enumeration_literalContext>(i);
}

std::vector<tree::TerminalNode *> modelicaParser::Enum_listContext::COMMA() {
  return getTokens(modelicaParser::COMMA);
}

tree::TerminalNode* modelicaParser::Enum_listContext::COMMA(size_t i) {
  return getToken(modelicaParser::COMMA, i);
}


size_t modelicaParser::Enum_listContext::getRuleIndex() const {
  return modelicaParser::RuleEnum_list;
}


modelicaParser::Enum_listContext* modelicaParser::enum_list() {
  Enum_listContext *_localctx = _tracker.createInstance<Enum_listContext>(_ctx, getState());
  enterRule(_localctx, 28, modelicaParser::RuleEnum_list);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(338);
    enumeration_literal();
    setState(343);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == modelicaParser::COMMA) {
      setState(339);
      match(modelicaParser::COMMA);
      setState(340);
      enumeration_literal();
      setState(345);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Enumeration_option_nameContext ------------------------------------------------------------------

modelicaParser::Enumeration_option_nameContext::Enumeration_option_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

modelicaParser::IdContext* modelicaParser::Enumeration_option_nameContext::id() {
  return getRuleContext<modelicaParser::IdContext>(0);
}


size_t modelicaParser::Enumeration_option_nameContext::getRuleIndex() const {
  return modelicaParser::RuleEnumeration_option_name;
}


modelicaParser::Enumeration_option_nameContext* modelicaParser::enumeration_option_name() {
  Enumeration_option_nameContext *_localctx = _tracker.createInstance<Enumeration_option_nameContext>(_ctx, getState());
  enterRule(_localctx, 30, modelicaParser::RuleEnumeration_option_name);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(346);
    id();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Enumeration_literalContext ------------------------------------------------------------------

modelicaParser::Enumeration_literalContext::Enumeration_literalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

modelicaParser::Enumeration_option_nameContext* modelicaParser::Enumeration_literalContext::enumeration_option_name() {
  return getRuleContext<modelicaParser::Enumeration_option_nameContext>(0);
}

modelicaParser::CommentContext* modelicaParser::Enumeration_literalContext::comment() {
  return getRuleContext<modelicaParser::CommentContext>(0);
}


size_t modelicaParser::Enumeration_literalContext::getRuleIndex() const {
  return modelicaParser::RuleEnumeration_literal;
}


modelicaParser::Enumeration_literalContext* modelicaParser::enumeration_literal() {
  Enumeration_literalContext *_localctx = _tracker.createInstance<Enumeration_literalContext>(_ctx, getState());
  enterRule(_localctx, 32, modelicaParser::RuleEnumeration_literal);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(348);
    enumeration_option_name();
    setState(349);
    comment();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Action_scopeContext ------------------------------------------------------------------

modelicaParser::Action_scopeContext::Action_scopeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* modelicaParser::Action_scopeContext::PUBLIC() {
  return getToken(modelicaParser::PUBLIC, 0);
}

tree::TerminalNode* modelicaParser::Action_scopeContext::PROTECTED() {
  return getToken(modelicaParser::PROTECTED, 0);
}


size_t modelicaParser::Action_scopeContext::getRuleIndex() const {
  return modelicaParser::RuleAction_scope;
}


modelicaParser::Action_scopeContext* modelicaParser::action_scope() {
  Action_scopeContext *_localctx = _tracker.createInstance<Action_scopeContext>(_ctx, getState());
  enterRule(_localctx, 34, modelicaParser::RuleAction_scope);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(351);
    _la = _input->LA(1);
    if (!(_la == modelicaParser::PUBLIC

    || _la == modelicaParser::PROTECTED)) {
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

//----------------- CompositionContext ------------------------------------------------------------------

modelicaParser::CompositionContext::CompositionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<modelicaParser::Element_listContext *> modelicaParser::CompositionContext::element_list() {
  return getRuleContexts<modelicaParser::Element_listContext>();
}

modelicaParser::Element_listContext* modelicaParser::CompositionContext::element_list(size_t i) {
  return getRuleContext<modelicaParser::Element_listContext>(i);
}

std::vector<modelicaParser::Action_scopeContext *> modelicaParser::CompositionContext::action_scope() {
  return getRuleContexts<modelicaParser::Action_scopeContext>();
}

modelicaParser::Action_scopeContext* modelicaParser::CompositionContext::action_scope(size_t i) {
  return getRuleContext<modelicaParser::Action_scopeContext>(i);
}

std::vector<modelicaParser::Equation_sectionContext *> modelicaParser::CompositionContext::equation_section() {
  return getRuleContexts<modelicaParser::Equation_sectionContext>();
}

modelicaParser::Equation_sectionContext* modelicaParser::CompositionContext::equation_section(size_t i) {
  return getRuleContext<modelicaParser::Equation_sectionContext>(i);
}

std::vector<modelicaParser::Algorithm_sectionContext *> modelicaParser::CompositionContext::algorithm_section() {
  return getRuleContexts<modelicaParser::Algorithm_sectionContext>();
}

modelicaParser::Algorithm_sectionContext* modelicaParser::CompositionContext::algorithm_section(size_t i) {
  return getRuleContext<modelicaParser::Algorithm_sectionContext>(i);
}

tree::TerminalNode* modelicaParser::CompositionContext::EXTERNAL() {
  return getToken(modelicaParser::EXTERNAL, 0);
}

std::vector<tree::TerminalNode *> modelicaParser::CompositionContext::SEMI() {
  return getTokens(modelicaParser::SEMI);
}

tree::TerminalNode* modelicaParser::CompositionContext::SEMI(size_t i) {
  return getToken(modelicaParser::SEMI, i);
}

std::vector<modelicaParser::Annotation_commentContext *> modelicaParser::CompositionContext::annotation_comment() {
  return getRuleContexts<modelicaParser::Annotation_commentContext>();
}

modelicaParser::Annotation_commentContext* modelicaParser::CompositionContext::annotation_comment(size_t i) {
  return getRuleContext<modelicaParser::Annotation_commentContext>(i);
}

modelicaParser::Language_specificationContext* modelicaParser::CompositionContext::language_specification() {
  return getRuleContext<modelicaParser::Language_specificationContext>(0);
}

modelicaParser::External_function_callContext* modelicaParser::CompositionContext::external_function_call() {
  return getRuleContext<modelicaParser::External_function_callContext>(0);
}


size_t modelicaParser::CompositionContext::getRuleIndex() const {
  return modelicaParser::RuleComposition;
}


modelicaParser::CompositionContext* modelicaParser::composition() {
  CompositionContext *_localctx = _tracker.createInstance<CompositionContext>(_ctx, getState());
  enterRule(_localctx, 36, modelicaParser::RuleComposition);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(353);
    element_list();
    setState(361);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 33) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 33)) & ((1ULL << (modelicaParser::PUBLIC - 33))
      | (1ULL << (modelicaParser::PROTECTED - 33))
      | (1ULL << (modelicaParser::INITIAL - 33))
      | (1ULL << (modelicaParser::ALGORITHM - 33))
      | (1ULL << (modelicaParser::LEQUATION - 33)))) != 0)) {
      setState(359);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
      case 1: {
        setState(354);
        action_scope();
        setState(355);
        element_list();
        break;
      }

      case 2: {
        setState(357);
        equation_section();
        break;
      }

      case 3: {
        setState(358);
        algorithm_section();
        break;
      }

      default:
        break;
      }
      setState(363);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(375);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == modelicaParser::EXTERNAL) {
      setState(364);
      match(modelicaParser::EXTERNAL);
      setState(366);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == modelicaParser::STRING) {
        setState(365);
        language_specification();
      }
      setState(369);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == modelicaParser::IDENT || _la == modelicaParser::DOT) {
        setState(368);
        external_function_call();
      }
      setState(372);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == modelicaParser::ANNOTATION) {
        setState(371);
        annotation_comment();
      }
      setState(374);
      match(modelicaParser::SEMI);
    }
    setState(380);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == modelicaParser::ANNOTATION) {
      setState(377);
      annotation_comment();
      setState(378);
      match(modelicaParser::SEMI);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Language_specificationContext ------------------------------------------------------------------

modelicaParser::Language_specificationContext::Language_specificationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* modelicaParser::Language_specificationContext::STRING() {
  return getToken(modelicaParser::STRING, 0);
}


size_t modelicaParser::Language_specificationContext::getRuleIndex() const {
  return modelicaParser::RuleLanguage_specification;
}


modelicaParser::Language_specificationContext* modelicaParser::language_specification() {
  Language_specificationContext *_localctx = _tracker.createInstance<Language_specificationContext>(_ctx, getState());
  enterRule(_localctx, 38, modelicaParser::RuleLanguage_specification);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(382);
    match(modelicaParser::STRING);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- External_function_callContext ------------------------------------------------------------------

modelicaParser::External_function_callContext::External_function_callContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

modelicaParser::IdContext* modelicaParser::External_function_callContext::id() {
  return getRuleContext<modelicaParser::IdContext>(0);
}

tree::TerminalNode* modelicaParser::External_function_callContext::LPAREN() {
  return getToken(modelicaParser::LPAREN, 0);
}

tree::TerminalNode* modelicaParser::External_function_callContext::RPAREN() {
  return getToken(modelicaParser::RPAREN, 0);
}

modelicaParser::Component_referenceContext* modelicaParser::External_function_callContext::component_reference() {
  return getRuleContext<modelicaParser::Component_referenceContext>(0);
}

tree::TerminalNode* modelicaParser::External_function_callContext::ASSIGN() {
  return getToken(modelicaParser::ASSIGN, 0);
}

modelicaParser::Expression_listContext* modelicaParser::External_function_callContext::expression_list() {
  return getRuleContext<modelicaParser::Expression_listContext>(0);
}


size_t modelicaParser::External_function_callContext::getRuleIndex() const {
  return modelicaParser::RuleExternal_function_call;
}


modelicaParser::External_function_callContext* modelicaParser::external_function_call() {
  External_function_callContext *_localctx = _tracker.createInstance<External_function_callContext>(_ctx, getState());
  enterRule(_localctx, 40, modelicaParser::RuleExternal_function_call);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(387);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx)) {
    case 1: {
      setState(384);
      component_reference();
      setState(385);
      match(modelicaParser::ASSIGN);
      break;
    }

    default:
      break;
    }
    setState(389);
    id();
    setState(390);
    match(modelicaParser::LPAREN);
    setState(392);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << modelicaParser::IDENT)
      | (1ULL << modelicaParser::STRING)
      | (1ULL << modelicaParser::UNSIGNED_NUMBER)
      | (1ULL << modelicaParser::FALSE)
      | (1ULL << modelicaParser::TRUE)
      | (1ULL << modelicaParser::PURE)
      | (1ULL << modelicaParser::END)
      | (1ULL << modelicaParser::DER)
      | (1ULL << modelicaParser::IF)
      | (1ULL << modelicaParser::INITIAL))) != 0) || ((((_la - 67) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 67)) & ((1ULL << (modelicaParser::NOT - 67))
      | (1ULL << (modelicaParser::ADD - 67))
      | (1ULL << (modelicaParser::SUB - 67))
      | (1ULL << (modelicaParser::DOT - 67))
      | (1ULL << (modelicaParser::LBRACKET - 67))
      | (1ULL << (modelicaParser::LPAREN - 67))
      | (1ULL << (modelicaParser::LBRACE - 67))
      | (1ULL << (modelicaParser::DOT_ADD - 67))
      | (1ULL << (modelicaParser::DOT_SUB - 67)))) != 0)) {
      setState(391);
      expression_list();
    }
    setState(394);
    match(modelicaParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Element_listContext ------------------------------------------------------------------

modelicaParser::Element_listContext::Element_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<modelicaParser::ElementContext *> modelicaParser::Element_listContext::element() {
  return getRuleContexts<modelicaParser::ElementContext>();
}

modelicaParser::ElementContext* modelicaParser::Element_listContext::element(size_t i) {
  return getRuleContext<modelicaParser::ElementContext>(i);
}

std::vector<tree::TerminalNode *> modelicaParser::Element_listContext::SEMI() {
  return getTokens(modelicaParser::SEMI);
}

tree::TerminalNode* modelicaParser::Element_listContext::SEMI(size_t i) {
  return getToken(modelicaParser::SEMI, i);
}


size_t modelicaParser::Element_listContext::getRuleIndex() const {
  return modelicaParser::RuleElement_list;
}


modelicaParser::Element_listContext* modelicaParser::element_list() {
  Element_listContext *_localctx = _tracker.createInstance<Element_listContext>(_ctx, getState());
  enterRule(_localctx, 42, modelicaParser::RuleElement_list);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(401);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << modelicaParser::IDENT)
      | (1ULL << modelicaParser::FINAL)
      | (1ULL << modelicaParser::ENCAPSULATED)
      | (1ULL << modelicaParser::PARTIAL)
      | (1ULL << modelicaParser::CLASS)
      | (1ULL << modelicaParser::MODEL)
      | (1ULL << modelicaParser::OPERATOR)
      | (1ULL << modelicaParser::RECORD)
      | (1ULL << modelicaParser::BLOCK)
      | (1ULL << modelicaParser::EXPANDABLE)
      | (1ULL << modelicaParser::CONNECTOR)
      | (1ULL << modelicaParser::TYPE)
      | (1ULL << modelicaParser::PACKAGE)
      | (1ULL << modelicaParser::PURE)
      | (1ULL << modelicaParser::IMPURE)
      | (1ULL << modelicaParser::FUNCTION)
      | (1ULL << modelicaParser::EXTENDS)
      | (1ULL << modelicaParser::INPUT)
      | (1ULL << modelicaParser::OUTPUT)
      | (1ULL << modelicaParser::REDECLARE)
      | (1ULL << modelicaParser::INNER)
      | (1ULL << modelicaParser::OUTER)
      | (1ULL << modelicaParser::REPLACEABLE)
      | (1ULL << modelicaParser::IMPORT)
      | (1ULL << modelicaParser::FLOW)
      | (1ULL << modelicaParser::STREAM)
      | (1ULL << modelicaParser::DISCRETE)
      | (1ULL << modelicaParser::PARAMETER)
      | (1ULL << modelicaParser::CONSTANT))) != 0) || _la == modelicaParser::DOT) {
      setState(396);
      element();
      setState(397);
      match(modelicaParser::SEMI);
      setState(403);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElementContext ------------------------------------------------------------------

modelicaParser::ElementContext::ElementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

modelicaParser::Import_clauseContext* modelicaParser::ElementContext::import_clause() {
  return getRuleContext<modelicaParser::Import_clauseContext>(0);
}

modelicaParser::Extends_clauseContext* modelicaParser::ElementContext::extends_clause() {
  return getRuleContext<modelicaParser::Extends_clauseContext>(0);
}

modelicaParser::Class_definitionContext* modelicaParser::ElementContext::class_definition() {
  return getRuleContext<modelicaParser::Class_definitionContext>(0);
}

modelicaParser::Component_clauseContext* modelicaParser::ElementContext::component_clause() {
  return getRuleContext<modelicaParser::Component_clauseContext>(0);
}

tree::TerminalNode* modelicaParser::ElementContext::REPLACEABLE() {
  return getToken(modelicaParser::REPLACEABLE, 0);
}

tree::TerminalNode* modelicaParser::ElementContext::REDECLARE() {
  return getToken(modelicaParser::REDECLARE, 0);
}

tree::TerminalNode* modelicaParser::ElementContext::FINAL() {
  return getToken(modelicaParser::FINAL, 0);
}

tree::TerminalNode* modelicaParser::ElementContext::INNER() {
  return getToken(modelicaParser::INNER, 0);
}

tree::TerminalNode* modelicaParser::ElementContext::OUTER() {
  return getToken(modelicaParser::OUTER, 0);
}

modelicaParser::Constraining_clauseContext* modelicaParser::ElementContext::constraining_clause() {
  return getRuleContext<modelicaParser::Constraining_clauseContext>(0);
}

modelicaParser::CommentContext* modelicaParser::ElementContext::comment() {
  return getRuleContext<modelicaParser::CommentContext>(0);
}


size_t modelicaParser::ElementContext::getRuleIndex() const {
  return modelicaParser::RuleElement;
}


modelicaParser::ElementContext* modelicaParser::element() {
  ElementContext *_localctx = _tracker.createInstance<ElementContext>(_ctx, getState());
  enterRule(_localctx, 44, modelicaParser::RuleElement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(432);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case modelicaParser::IMPORT: {
        enterOuterAlt(_localctx, 1);
        setState(404);
        import_clause();
        break;
      }

      case modelicaParser::EXTENDS: {
        enterOuterAlt(_localctx, 2);
        setState(405);
        extends_clause();
        break;
      }

      case modelicaParser::IDENT:
      case modelicaParser::FINAL:
      case modelicaParser::ENCAPSULATED:
      case modelicaParser::PARTIAL:
      case modelicaParser::CLASS:
      case modelicaParser::MODEL:
      case modelicaParser::OPERATOR:
      case modelicaParser::RECORD:
      case modelicaParser::BLOCK:
      case modelicaParser::EXPANDABLE:
      case modelicaParser::CONNECTOR:
      case modelicaParser::TYPE:
      case modelicaParser::PACKAGE:
      case modelicaParser::PURE:
      case modelicaParser::IMPURE:
      case modelicaParser::FUNCTION:
      case modelicaParser::INPUT:
      case modelicaParser::OUTPUT:
      case modelicaParser::REDECLARE:
      case modelicaParser::INNER:
      case modelicaParser::OUTER:
      case modelicaParser::REPLACEABLE:
      case modelicaParser::FLOW:
      case modelicaParser::STREAM:
      case modelicaParser::DISCRETE:
      case modelicaParser::PARAMETER:
      case modelicaParser::CONSTANT:
      case modelicaParser::DOT: {
        enterOuterAlt(_localctx, 3);
        setState(407);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == modelicaParser::REDECLARE) {
          setState(406);
          match(modelicaParser::REDECLARE);
        }
        setState(410);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == modelicaParser::FINAL) {
          setState(409);
          match(modelicaParser::FINAL);
        }
        setState(413);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == modelicaParser::INNER) {
          setState(412);
          match(modelicaParser::INNER);
        }
        setState(416);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == modelicaParser::OUTER) {
          setState(415);
          match(modelicaParser::OUTER);
        }
        setState(430);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case modelicaParser::ENCAPSULATED:
          case modelicaParser::PARTIAL:
          case modelicaParser::CLASS:
          case modelicaParser::MODEL:
          case modelicaParser::OPERATOR:
          case modelicaParser::RECORD:
          case modelicaParser::BLOCK:
          case modelicaParser::EXPANDABLE:
          case modelicaParser::CONNECTOR:
          case modelicaParser::TYPE:
          case modelicaParser::PACKAGE:
          case modelicaParser::PURE:
          case modelicaParser::IMPURE:
          case modelicaParser::FUNCTION: {
            setState(418);
            class_definition();
            break;
          }

          case modelicaParser::IDENT:
          case modelicaParser::INPUT:
          case modelicaParser::OUTPUT:
          case modelicaParser::FLOW:
          case modelicaParser::STREAM:
          case modelicaParser::DISCRETE:
          case modelicaParser::PARAMETER:
          case modelicaParser::CONSTANT:
          case modelicaParser::DOT: {
            setState(419);
            component_clause();
            break;
          }

          case modelicaParser::REPLACEABLE: {
            setState(420);
            match(modelicaParser::REPLACEABLE);
            setState(423);
            _errHandler->sync(this);
            switch (_input->LA(1)) {
              case modelicaParser::ENCAPSULATED:
              case modelicaParser::PARTIAL:
              case modelicaParser::CLASS:
              case modelicaParser::MODEL:
              case modelicaParser::OPERATOR:
              case modelicaParser::RECORD:
              case modelicaParser::BLOCK:
              case modelicaParser::EXPANDABLE:
              case modelicaParser::CONNECTOR:
              case modelicaParser::TYPE:
              case modelicaParser::PACKAGE:
              case modelicaParser::PURE:
              case modelicaParser::IMPURE:
              case modelicaParser::FUNCTION: {
                setState(421);
                class_definition();
                break;
              }

              case modelicaParser::IDENT:
              case modelicaParser::INPUT:
              case modelicaParser::OUTPUT:
              case modelicaParser::FLOW:
              case modelicaParser::STREAM:
              case modelicaParser::DISCRETE:
              case modelicaParser::PARAMETER:
              case modelicaParser::CONSTANT:
              case modelicaParser::DOT: {
                setState(422);
                component_clause();
                break;
              }

            default:
              throw NoViableAltException(this);
            }
            setState(428);
            _errHandler->sync(this);

            _la = _input->LA(1);
            if (_la == modelicaParser::CONSTRAINEDBY) {
              setState(425);
              constraining_clause();
              setState(426);
              comment();
            }
            break;
          }

        default:
          throw NoViableAltException(this);
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

//----------------- Import_clauseContext ------------------------------------------------------------------

modelicaParser::Import_clauseContext::Import_clauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* modelicaParser::Import_clauseContext::IMPORT() {
  return getToken(modelicaParser::IMPORT, 0);
}

modelicaParser::CommentContext* modelicaParser::Import_clauseContext::comment() {
  return getRuleContext<modelicaParser::CommentContext>(0);
}

modelicaParser::IdContext* modelicaParser::Import_clauseContext::id() {
  return getRuleContext<modelicaParser::IdContext>(0);
}

tree::TerminalNode* modelicaParser::Import_clauseContext::ASSIGN() {
  return getToken(modelicaParser::ASSIGN, 0);
}

modelicaParser::NameContext* modelicaParser::Import_clauseContext::name() {
  return getRuleContext<modelicaParser::NameContext>(0);
}

tree::TerminalNode* modelicaParser::Import_clauseContext::DOT() {
  return getToken(modelicaParser::DOT, 0);
}

tree::TerminalNode* modelicaParser::Import_clauseContext::DOT_MUL() {
  return getToken(modelicaParser::DOT_MUL, 0);
}

tree::TerminalNode* modelicaParser::Import_clauseContext::MUL() {
  return getToken(modelicaParser::MUL, 0);
}

tree::TerminalNode* modelicaParser::Import_clauseContext::LBRACE() {
  return getToken(modelicaParser::LBRACE, 0);
}

modelicaParser::Import_listContext* modelicaParser::Import_clauseContext::import_list() {
  return getRuleContext<modelicaParser::Import_listContext>(0);
}

tree::TerminalNode* modelicaParser::Import_clauseContext::RBRACE() {
  return getToken(modelicaParser::RBRACE, 0);
}


size_t modelicaParser::Import_clauseContext::getRuleIndex() const {
  return modelicaParser::RuleImport_clause;
}


modelicaParser::Import_clauseContext* modelicaParser::import_clause() {
  Import_clauseContext *_localctx = _tracker.createInstance<Import_clauseContext>(_ctx, getState());
  enterRule(_localctx, 46, modelicaParser::RuleImport_clause);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(434);
    match(modelicaParser::IMPORT);
    setState(451);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 43, _ctx)) {
    case 1: {
      setState(435);
      id();
      setState(436);
      match(modelicaParser::ASSIGN);
      setState(437);
      name();
      break;
    }

    case 2: {
      setState(439);
      name();
      setState(449);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case modelicaParser::DOT: {
          setState(440);
          match(modelicaParser::DOT);
          setState(446);
          _errHandler->sync(this);
          switch (_input->LA(1)) {
            case modelicaParser::MUL: {
              setState(441);
              match(modelicaParser::MUL);
              break;
            }

            case modelicaParser::LBRACE: {
              setState(442);
              match(modelicaParser::LBRACE);
              setState(443);
              import_list();
              setState(444);
              match(modelicaParser::RBRACE);
              break;
            }

          default:
            throw NoViableAltException(this);
          }
          break;
        }

        case modelicaParser::DOT_MUL: {
          setState(448);
          match(modelicaParser::DOT_MUL);
          break;
        }

        case modelicaParser::STRING:
        case modelicaParser::ANNOTATION:
        case modelicaParser::SEMI: {
          break;
        }

      default:
        break;
      }
      break;
    }

    default:
      break;
    }
    setState(453);
    comment();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Import_listContext ------------------------------------------------------------------

modelicaParser::Import_listContext::Import_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<modelicaParser::IdContext *> modelicaParser::Import_listContext::id() {
  return getRuleContexts<modelicaParser::IdContext>();
}

modelicaParser::IdContext* modelicaParser::Import_listContext::id(size_t i) {
  return getRuleContext<modelicaParser::IdContext>(i);
}

std::vector<tree::TerminalNode *> modelicaParser::Import_listContext::COMMA() {
  return getTokens(modelicaParser::COMMA);
}

tree::TerminalNode* modelicaParser::Import_listContext::COMMA(size_t i) {
  return getToken(modelicaParser::COMMA, i);
}


size_t modelicaParser::Import_listContext::getRuleIndex() const {
  return modelicaParser::RuleImport_list;
}


modelicaParser::Import_listContext* modelicaParser::import_list() {
  Import_listContext *_localctx = _tracker.createInstance<Import_listContext>(_ctx, getState());
  enterRule(_localctx, 48, modelicaParser::RuleImport_list);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(455);
    id();
    setState(460);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == modelicaParser::COMMA) {
      setState(456);
      match(modelicaParser::COMMA);
      setState(457);
      id();
      setState(462);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Extends_clauseContext ------------------------------------------------------------------

modelicaParser::Extends_clauseContext::Extends_clauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* modelicaParser::Extends_clauseContext::EXTENDS() {
  return getToken(modelicaParser::EXTENDS, 0);
}

modelicaParser::Type_specifierContext* modelicaParser::Extends_clauseContext::type_specifier() {
  return getRuleContext<modelicaParser::Type_specifierContext>(0);
}

modelicaParser::Class_modificationContext* modelicaParser::Extends_clauseContext::class_modification() {
  return getRuleContext<modelicaParser::Class_modificationContext>(0);
}

modelicaParser::Annotation_commentContext* modelicaParser::Extends_clauseContext::annotation_comment() {
  return getRuleContext<modelicaParser::Annotation_commentContext>(0);
}


size_t modelicaParser::Extends_clauseContext::getRuleIndex() const {
  return modelicaParser::RuleExtends_clause;
}


modelicaParser::Extends_clauseContext* modelicaParser::extends_clause() {
  Extends_clauseContext *_localctx = _tracker.createInstance<Extends_clauseContext>(_ctx, getState());
  enterRule(_localctx, 50, modelicaParser::RuleExtends_clause);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(463);
    match(modelicaParser::EXTENDS);
    setState(464);
    type_specifier();
    setState(466);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == modelicaParser::LPAREN) {
      setState(465);
      class_modification();
    }
    setState(469);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == modelicaParser::ANNOTATION) {
      setState(468);
      annotation_comment();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Constraining_clauseContext ------------------------------------------------------------------

modelicaParser::Constraining_clauseContext::Constraining_clauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* modelicaParser::Constraining_clauseContext::CONSTRAINEDBY() {
  return getToken(modelicaParser::CONSTRAINEDBY, 0);
}

modelicaParser::Type_specifierContext* modelicaParser::Constraining_clauseContext::type_specifier() {
  return getRuleContext<modelicaParser::Type_specifierContext>(0);
}

modelicaParser::Class_modificationContext* modelicaParser::Constraining_clauseContext::class_modification() {
  return getRuleContext<modelicaParser::Class_modificationContext>(0);
}


size_t modelicaParser::Constraining_clauseContext::getRuleIndex() const {
  return modelicaParser::RuleConstraining_clause;
}


modelicaParser::Constraining_clauseContext* modelicaParser::constraining_clause() {
  Constraining_clauseContext *_localctx = _tracker.createInstance<Constraining_clauseContext>(_ctx, getState());
  enterRule(_localctx, 52, modelicaParser::RuleConstraining_clause);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(471);
    match(modelicaParser::CONSTRAINEDBY);
    setState(472);
    type_specifier();
    setState(474);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == modelicaParser::LPAREN) {
      setState(473);
      class_modification();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Component_clauseContext ------------------------------------------------------------------

modelicaParser::Component_clauseContext::Component_clauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

modelicaParser::Type_prefixContext* modelicaParser::Component_clauseContext::type_prefix() {
  return getRuleContext<modelicaParser::Type_prefixContext>(0);
}

modelicaParser::Type_specifierContext* modelicaParser::Component_clauseContext::type_specifier() {
  return getRuleContext<modelicaParser::Type_specifierContext>(0);
}

modelicaParser::Component_listContext* modelicaParser::Component_clauseContext::component_list() {
  return getRuleContext<modelicaParser::Component_listContext>(0);
}

modelicaParser::Array_subscriptsContext* modelicaParser::Component_clauseContext::array_subscripts() {
  return getRuleContext<modelicaParser::Array_subscriptsContext>(0);
}


size_t modelicaParser::Component_clauseContext::getRuleIndex() const {
  return modelicaParser::RuleComponent_clause;
}


modelicaParser::Component_clauseContext* modelicaParser::component_clause() {
  Component_clauseContext *_localctx = _tracker.createInstance<Component_clauseContext>(_ctx, getState());
  enterRule(_localctx, 54, modelicaParser::RuleComponent_clause);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(476);
    type_prefix();
    setState(477);
    type_specifier();
    setState(479);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == modelicaParser::LBRACKET) {
      setState(478);
      array_subscripts();
    }
    setState(481);
    component_list();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Type_prefixContext ------------------------------------------------------------------

modelicaParser::Type_prefixContext::Type_prefixContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* modelicaParser::Type_prefixContext::FLOW() {
  return getToken(modelicaParser::FLOW, 0);
}

tree::TerminalNode* modelicaParser::Type_prefixContext::STREAM() {
  return getToken(modelicaParser::STREAM, 0);
}

tree::TerminalNode* modelicaParser::Type_prefixContext::DISCRETE() {
  return getToken(modelicaParser::DISCRETE, 0);
}

tree::TerminalNode* modelicaParser::Type_prefixContext::PARAMETER() {
  return getToken(modelicaParser::PARAMETER, 0);
}

tree::TerminalNode* modelicaParser::Type_prefixContext::CONSTANT() {
  return getToken(modelicaParser::CONSTANT, 0);
}

tree::TerminalNode* modelicaParser::Type_prefixContext::INPUT() {
  return getToken(modelicaParser::INPUT, 0);
}

tree::TerminalNode* modelicaParser::Type_prefixContext::OUTPUT() {
  return getToken(modelicaParser::OUTPUT, 0);
}


size_t modelicaParser::Type_prefixContext::getRuleIndex() const {
  return modelicaParser::RuleType_prefix;
}


modelicaParser::Type_prefixContext* modelicaParser::type_prefix() {
  Type_prefixContext *_localctx = _tracker.createInstance<Type_prefixContext>(_ctx, getState());
  enterRule(_localctx, 56, modelicaParser::RuleType_prefix);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(484);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == modelicaParser::FLOW

    || _la == modelicaParser::STREAM) {
      setState(483);
      _la = _input->LA(1);
      if (!(_la == modelicaParser::FLOW

      || _la == modelicaParser::STREAM)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
    }
    setState(487);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << modelicaParser::DISCRETE)
      | (1ULL << modelicaParser::PARAMETER)
      | (1ULL << modelicaParser::CONSTANT))) != 0)) {
      setState(486);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << modelicaParser::DISCRETE)
        | (1ULL << modelicaParser::PARAMETER)
        | (1ULL << modelicaParser::CONSTANT))) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
    }
    setState(490);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == modelicaParser::INPUT

    || _la == modelicaParser::OUTPUT) {
      setState(489);
      _la = _input->LA(1);
      if (!(_la == modelicaParser::INPUT

      || _la == modelicaParser::OUTPUT)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
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

//----------------- Component_listContext ------------------------------------------------------------------

modelicaParser::Component_listContext::Component_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<modelicaParser::Component_declarationContext *> modelicaParser::Component_listContext::component_declaration() {
  return getRuleContexts<modelicaParser::Component_declarationContext>();
}

modelicaParser::Component_declarationContext* modelicaParser::Component_listContext::component_declaration(size_t i) {
  return getRuleContext<modelicaParser::Component_declarationContext>(i);
}

std::vector<tree::TerminalNode *> modelicaParser::Component_listContext::COMMA() {
  return getTokens(modelicaParser::COMMA);
}

tree::TerminalNode* modelicaParser::Component_listContext::COMMA(size_t i) {
  return getToken(modelicaParser::COMMA, i);
}


size_t modelicaParser::Component_listContext::getRuleIndex() const {
  return modelicaParser::RuleComponent_list;
}


modelicaParser::Component_listContext* modelicaParser::component_list() {
  Component_listContext *_localctx = _tracker.createInstance<Component_listContext>(_ctx, getState());
  enterRule(_localctx, 58, modelicaParser::RuleComponent_list);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(492);
    component_declaration();
    setState(497);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == modelicaParser::COMMA) {
      setState(493);
      match(modelicaParser::COMMA);
      setState(494);
      component_declaration();
      setState(499);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Component_declarationContext ------------------------------------------------------------------

modelicaParser::Component_declarationContext::Component_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

modelicaParser::DeclarationContext* modelicaParser::Component_declarationContext::declaration() {
  return getRuleContext<modelicaParser::DeclarationContext>(0);
}

modelicaParser::CommentContext* modelicaParser::Component_declarationContext::comment() {
  return getRuleContext<modelicaParser::CommentContext>(0);
}

modelicaParser::Condition_attributeContext* modelicaParser::Component_declarationContext::condition_attribute() {
  return getRuleContext<modelicaParser::Condition_attributeContext>(0);
}


size_t modelicaParser::Component_declarationContext::getRuleIndex() const {
  return modelicaParser::RuleComponent_declaration;
}


modelicaParser::Component_declarationContext* modelicaParser::component_declaration() {
  Component_declarationContext *_localctx = _tracker.createInstance<Component_declarationContext>(_ctx, getState());
  enterRule(_localctx, 60, modelicaParser::RuleComponent_declaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(500);
    declaration();
    setState(502);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == modelicaParser::IF) {
      setState(501);
      condition_attribute();
    }
    setState(504);
    comment();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Condition_attributeContext ------------------------------------------------------------------

modelicaParser::Condition_attributeContext::Condition_attributeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* modelicaParser::Condition_attributeContext::IF() {
  return getToken(modelicaParser::IF, 0);
}

modelicaParser::ExpressionContext* modelicaParser::Condition_attributeContext::expression() {
  return getRuleContext<modelicaParser::ExpressionContext>(0);
}


size_t modelicaParser::Condition_attributeContext::getRuleIndex() const {
  return modelicaParser::RuleCondition_attribute;
}


modelicaParser::Condition_attributeContext* modelicaParser::condition_attribute() {
  Condition_attributeContext *_localctx = _tracker.createInstance<Condition_attributeContext>(_ctx, getState());
  enterRule(_localctx, 62, modelicaParser::RuleCondition_attribute);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(506);
    match(modelicaParser::IF);
    setState(507);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Variable_nameContext ------------------------------------------------------------------

modelicaParser::Variable_nameContext::Variable_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

modelicaParser::IdContext* modelicaParser::Variable_nameContext::id() {
  return getRuleContext<modelicaParser::IdContext>(0);
}


size_t modelicaParser::Variable_nameContext::getRuleIndex() const {
  return modelicaParser::RuleVariable_name;
}


modelicaParser::Variable_nameContext* modelicaParser::variable_name() {
  Variable_nameContext *_localctx = _tracker.createInstance<Variable_nameContext>(_ctx, getState());
  enterRule(_localctx, 64, modelicaParser::RuleVariable_name);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(509);
    id();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationContext ------------------------------------------------------------------

modelicaParser::DeclarationContext::DeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

modelicaParser::Variable_nameContext* modelicaParser::DeclarationContext::variable_name() {
  return getRuleContext<modelicaParser::Variable_nameContext>(0);
}

modelicaParser::Array_subscriptsContext* modelicaParser::DeclarationContext::array_subscripts() {
  return getRuleContext<modelicaParser::Array_subscriptsContext>(0);
}

modelicaParser::ModificationContext* modelicaParser::DeclarationContext::modification() {
  return getRuleContext<modelicaParser::ModificationContext>(0);
}

modelicaParser::Variable_characteristicContext* modelicaParser::DeclarationContext::variable_characteristic() {
  return getRuleContext<modelicaParser::Variable_characteristicContext>(0);
}


size_t modelicaParser::DeclarationContext::getRuleIndex() const {
  return modelicaParser::RuleDeclaration;
}


modelicaParser::DeclarationContext* modelicaParser::declaration() {
  DeclarationContext *_localctx = _tracker.createInstance<DeclarationContext>(_ctx, getState());
  enterRule(_localctx, 66, modelicaParser::RuleDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(511);
    variable_name();
    setState(513);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == modelicaParser::LBRACKET) {
      setState(512);
      array_subscripts();
    }
    setState(517);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case modelicaParser::ASSIGN:
      case modelicaParser::C_ASSIGN: {
        setState(515);
        modification();
        break;
      }

      case modelicaParser::LPAREN: {
        setState(516);
        variable_characteristic();
        break;
      }

      case modelicaParser::STRING:
      case modelicaParser::CONSTRAINEDBY:
      case modelicaParser::IF:
      case modelicaParser::ANNOTATION:
      case modelicaParser::SEMI:
      case modelicaParser::COMMA:
      case modelicaParser::RPAREN: {
        break;
      }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Variable_characteristicContext ------------------------------------------------------------------

modelicaParser::Variable_characteristicContext::Variable_characteristicContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

modelicaParser::Class_modification1Context* modelicaParser::Variable_characteristicContext::class_modification1() {
  return getRuleContext<modelicaParser::Class_modification1Context>(0);
}

tree::TerminalNode* modelicaParser::Variable_characteristicContext::ASSIGN() {
  return getToken(modelicaParser::ASSIGN, 0);
}

modelicaParser::ExpressionContext* modelicaParser::Variable_characteristicContext::expression() {
  return getRuleContext<modelicaParser::ExpressionContext>(0);
}


size_t modelicaParser::Variable_characteristicContext::getRuleIndex() const {
  return modelicaParser::RuleVariable_characteristic;
}


modelicaParser::Variable_characteristicContext* modelicaParser::variable_characteristic() {
  Variable_characteristicContext *_localctx = _tracker.createInstance<Variable_characteristicContext>(_ctx, getState());
  enterRule(_localctx, 68, modelicaParser::RuleVariable_characteristic);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(519);
    class_modification1();
    setState(522);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == modelicaParser::ASSIGN) {
      setState(520);
      match(modelicaParser::ASSIGN);
      setState(521);
      expression();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ModificationContext ------------------------------------------------------------------

modelicaParser::ModificationContext::ModificationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* modelicaParser::ModificationContext::ASSIGN() {
  return getToken(modelicaParser::ASSIGN, 0);
}

modelicaParser::ExpressionContext* modelicaParser::ModificationContext::expression() {
  return getRuleContext<modelicaParser::ExpressionContext>(0);
}

tree::TerminalNode* modelicaParser::ModificationContext::C_ASSIGN() {
  return getToken(modelicaParser::C_ASSIGN, 0);
}


size_t modelicaParser::ModificationContext::getRuleIndex() const {
  return modelicaParser::RuleModification;
}


modelicaParser::ModificationContext* modelicaParser::modification() {
  ModificationContext *_localctx = _tracker.createInstance<ModificationContext>(_ctx, getState());
  enterRule(_localctx, 70, modelicaParser::RuleModification);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(528);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case modelicaParser::ASSIGN: {
        enterOuterAlt(_localctx, 1);
        setState(524);
        match(modelicaParser::ASSIGN);
        setState(525);
        expression();
        break;
      }

      case modelicaParser::C_ASSIGN: {
        enterOuterAlt(_localctx, 2);
        setState(526);
        match(modelicaParser::C_ASSIGN);
        setState(527);
        expression();
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

//----------------- Class_modificationContext ------------------------------------------------------------------

modelicaParser::Class_modificationContext::Class_modificationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* modelicaParser::Class_modificationContext::LPAREN() {
  return getToken(modelicaParser::LPAREN, 0);
}

tree::TerminalNode* modelicaParser::Class_modificationContext::RPAREN() {
  return getToken(modelicaParser::RPAREN, 0);
}

modelicaParser::Argument_listContext* modelicaParser::Class_modificationContext::argument_list() {
  return getRuleContext<modelicaParser::Argument_listContext>(0);
}


size_t modelicaParser::Class_modificationContext::getRuleIndex() const {
  return modelicaParser::RuleClass_modification;
}


modelicaParser::Class_modificationContext* modelicaParser::class_modification() {
  Class_modificationContext *_localctx = _tracker.createInstance<Class_modificationContext>(_ctx, getState());
  enterRule(_localctx, 72, modelicaParser::RuleClass_modification);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(530);
    match(modelicaParser::LPAREN);
    setState(532);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << modelicaParser::IDENT)
      | (1ULL << modelicaParser::FINAL)
      | (1ULL << modelicaParser::REDECLARE)
      | (1ULL << modelicaParser::REPLACEABLE)
      | (1ULL << modelicaParser::EACH))) != 0)) {
      setState(531);
      argument_list();
    }
    setState(534);
    match(modelicaParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Class_modification1Context ------------------------------------------------------------------

modelicaParser::Class_modification1Context::Class_modification1Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* modelicaParser::Class_modification1Context::LPAREN() {
  return getToken(modelicaParser::LPAREN, 0);
}

tree::TerminalNode* modelicaParser::Class_modification1Context::RPAREN() {
  return getToken(modelicaParser::RPAREN, 0);
}

modelicaParser::Argument_listContext* modelicaParser::Class_modification1Context::argument_list() {
  return getRuleContext<modelicaParser::Argument_listContext>(0);
}


size_t modelicaParser::Class_modification1Context::getRuleIndex() const {
  return modelicaParser::RuleClass_modification1;
}


modelicaParser::Class_modification1Context* modelicaParser::class_modification1() {
  Class_modification1Context *_localctx = _tracker.createInstance<Class_modification1Context>(_ctx, getState());
  enterRule(_localctx, 74, modelicaParser::RuleClass_modification1);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(536);
    match(modelicaParser::LPAREN);
    setState(538);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << modelicaParser::IDENT)
      | (1ULL << modelicaParser::FINAL)
      | (1ULL << modelicaParser::REDECLARE)
      | (1ULL << modelicaParser::REPLACEABLE)
      | (1ULL << modelicaParser::EACH))) != 0)) {
      setState(537);
      argument_list();
    }
    setState(540);
    match(modelicaParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Argument_listContext ------------------------------------------------------------------

modelicaParser::Argument_listContext::Argument_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<modelicaParser::ArgumentContext *> modelicaParser::Argument_listContext::argument() {
  return getRuleContexts<modelicaParser::ArgumentContext>();
}

modelicaParser::ArgumentContext* modelicaParser::Argument_listContext::argument(size_t i) {
  return getRuleContext<modelicaParser::ArgumentContext>(i);
}

std::vector<tree::TerminalNode *> modelicaParser::Argument_listContext::COMMA() {
  return getTokens(modelicaParser::COMMA);
}

tree::TerminalNode* modelicaParser::Argument_listContext::COMMA(size_t i) {
  return getToken(modelicaParser::COMMA, i);
}


size_t modelicaParser::Argument_listContext::getRuleIndex() const {
  return modelicaParser::RuleArgument_list;
}


modelicaParser::Argument_listContext* modelicaParser::argument_list() {
  Argument_listContext *_localctx = _tracker.createInstance<Argument_listContext>(_ctx, getState());
  enterRule(_localctx, 76, modelicaParser::RuleArgument_list);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(542);
    argument();
    setState(547);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == modelicaParser::COMMA) {
      setState(543);
      match(modelicaParser::COMMA);
      setState(544);
      argument();
      setState(549);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgumentContext ------------------------------------------------------------------

modelicaParser::ArgumentContext::ArgumentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

modelicaParser::Element_modification_or_replaceableContext* modelicaParser::ArgumentContext::element_modification_or_replaceable() {
  return getRuleContext<modelicaParser::Element_modification_or_replaceableContext>(0);
}

modelicaParser::Element_redeclarationContext* modelicaParser::ArgumentContext::element_redeclaration() {
  return getRuleContext<modelicaParser::Element_redeclarationContext>(0);
}


size_t modelicaParser::ArgumentContext::getRuleIndex() const {
  return modelicaParser::RuleArgument;
}


modelicaParser::ArgumentContext* modelicaParser::argument() {
  ArgumentContext *_localctx = _tracker.createInstance<ArgumentContext>(_ctx, getState());
  enterRule(_localctx, 78, modelicaParser::RuleArgument);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(552);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case modelicaParser::IDENT:
      case modelicaParser::FINAL:
      case modelicaParser::REPLACEABLE:
      case modelicaParser::EACH: {
        enterOuterAlt(_localctx, 1);
        setState(550);
        element_modification_or_replaceable();
        break;
      }

      case modelicaParser::REDECLARE: {
        enterOuterAlt(_localctx, 2);
        setState(551);
        element_redeclaration();
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

//----------------- Element_modification_or_replaceableContext ------------------------------------------------------------------

modelicaParser::Element_modification_or_replaceableContext::Element_modification_or_replaceableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

modelicaParser::Element_modificationContext* modelicaParser::Element_modification_or_replaceableContext::element_modification() {
  return getRuleContext<modelicaParser::Element_modificationContext>(0);
}

modelicaParser::Element_replaceableContext* modelicaParser::Element_modification_or_replaceableContext::element_replaceable() {
  return getRuleContext<modelicaParser::Element_replaceableContext>(0);
}

tree::TerminalNode* modelicaParser::Element_modification_or_replaceableContext::EACH() {
  return getToken(modelicaParser::EACH, 0);
}

tree::TerminalNode* modelicaParser::Element_modification_or_replaceableContext::FINAL() {
  return getToken(modelicaParser::FINAL, 0);
}


size_t modelicaParser::Element_modification_or_replaceableContext::getRuleIndex() const {
  return modelicaParser::RuleElement_modification_or_replaceable;
}


modelicaParser::Element_modification_or_replaceableContext* modelicaParser::element_modification_or_replaceable() {
  Element_modification_or_replaceableContext *_localctx = _tracker.createInstance<Element_modification_or_replaceableContext>(_ctx, getState());
  enterRule(_localctx, 80, modelicaParser::RuleElement_modification_or_replaceable);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(555);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == modelicaParser::EACH) {
      setState(554);
      match(modelicaParser::EACH);
    }
    setState(558);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == modelicaParser::FINAL) {
      setState(557);
      match(modelicaParser::FINAL);
    }
    setState(562);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case modelicaParser::IDENT: {
        setState(560);
        element_modification();
        break;
      }

      case modelicaParser::REPLACEABLE: {
        setState(561);
        element_replaceable();
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

//----------------- Variable_characteristic_modificationContext ------------------------------------------------------------------

modelicaParser::Variable_characteristic_modificationContext::Variable_characteristic_modificationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* modelicaParser::Variable_characteristic_modificationContext::ASSIGN() {
  return getToken(modelicaParser::ASSIGN, 0);
}

modelicaParser::ExpressionContext* modelicaParser::Variable_characteristic_modificationContext::expression() {
  return getRuleContext<modelicaParser::ExpressionContext>(0);
}

tree::TerminalNode* modelicaParser::Variable_characteristic_modificationContext::C_ASSIGN() {
  return getToken(modelicaParser::C_ASSIGN, 0);
}


size_t modelicaParser::Variable_characteristic_modificationContext::getRuleIndex() const {
  return modelicaParser::RuleVariable_characteristic_modification;
}


modelicaParser::Variable_characteristic_modificationContext* modelicaParser::variable_characteristic_modification() {
  Variable_characteristic_modificationContext *_localctx = _tracker.createInstance<Variable_characteristic_modificationContext>(_ctx, getState());
  enterRule(_localctx, 82, modelicaParser::RuleVariable_characteristic_modification);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(568);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case modelicaParser::ASSIGN: {
        enterOuterAlt(_localctx, 1);
        setState(564);
        match(modelicaParser::ASSIGN);
        setState(565);
        expression();
        break;
      }

      case modelicaParser::C_ASSIGN: {
        enterOuterAlt(_localctx, 2);
        setState(566);
        match(modelicaParser::C_ASSIGN);
        setState(567);
        expression();
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

//----------------- Element_modificationContext ------------------------------------------------------------------

modelicaParser::Element_modificationContext::Element_modificationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

modelicaParser::NameContext* modelicaParser::Element_modificationContext::name() {
  return getRuleContext<modelicaParser::NameContext>(0);
}

modelicaParser::String_commentContext* modelicaParser::Element_modificationContext::string_comment() {
  return getRuleContext<modelicaParser::String_commentContext>(0);
}

modelicaParser::Variable_characteristic_modificationContext* modelicaParser::Element_modificationContext::variable_characteristic_modification() {
  return getRuleContext<modelicaParser::Variable_characteristic_modificationContext>(0);
}


size_t modelicaParser::Element_modificationContext::getRuleIndex() const {
  return modelicaParser::RuleElement_modification;
}


modelicaParser::Element_modificationContext* modelicaParser::element_modification() {
  Element_modificationContext *_localctx = _tracker.createInstance<Element_modificationContext>(_ctx, getState());
  enterRule(_localctx, 84, modelicaParser::RuleElement_modification);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(570);
    name();
    setState(572);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == modelicaParser::ASSIGN

    || _la == modelicaParser::C_ASSIGN) {
      setState(571);
      variable_characteristic_modification();
    }
    setState(574);
    string_comment();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Element_redeclarationContext ------------------------------------------------------------------

modelicaParser::Element_redeclarationContext::Element_redeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* modelicaParser::Element_redeclarationContext::REDECLARE() {
  return getToken(modelicaParser::REDECLARE, 0);
}

modelicaParser::Short_class_definitionContext* modelicaParser::Element_redeclarationContext::short_class_definition() {
  return getRuleContext<modelicaParser::Short_class_definitionContext>(0);
}

modelicaParser::Component_clause1Context* modelicaParser::Element_redeclarationContext::component_clause1() {
  return getRuleContext<modelicaParser::Component_clause1Context>(0);
}

modelicaParser::Element_replaceableContext* modelicaParser::Element_redeclarationContext::element_replaceable() {
  return getRuleContext<modelicaParser::Element_replaceableContext>(0);
}

tree::TerminalNode* modelicaParser::Element_redeclarationContext::EACH() {
  return getToken(modelicaParser::EACH, 0);
}

tree::TerminalNode* modelicaParser::Element_redeclarationContext::FINAL() {
  return getToken(modelicaParser::FINAL, 0);
}


size_t modelicaParser::Element_redeclarationContext::getRuleIndex() const {
  return modelicaParser::RuleElement_redeclaration;
}


modelicaParser::Element_redeclarationContext* modelicaParser::element_redeclaration() {
  Element_redeclarationContext *_localctx = _tracker.createInstance<Element_redeclarationContext>(_ctx, getState());
  enterRule(_localctx, 86, modelicaParser::RuleElement_redeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(576);
    match(modelicaParser::REDECLARE);
    setState(578);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == modelicaParser::EACH) {
      setState(577);
      match(modelicaParser::EACH);
    }
    setState(581);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == modelicaParser::FINAL) {
      setState(580);
      match(modelicaParser::FINAL);
    }
    setState(586);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case modelicaParser::PARTIAL:
      case modelicaParser::CLASS:
      case modelicaParser::MODEL:
      case modelicaParser::OPERATOR:
      case modelicaParser::RECORD:
      case modelicaParser::BLOCK:
      case modelicaParser::EXPANDABLE:
      case modelicaParser::CONNECTOR:
      case modelicaParser::TYPE:
      case modelicaParser::PACKAGE:
      case modelicaParser::PURE:
      case modelicaParser::IMPURE:
      case modelicaParser::FUNCTION: {
        setState(583);
        short_class_definition();
        break;
      }

      case modelicaParser::IDENT:
      case modelicaParser::INPUT:
      case modelicaParser::OUTPUT:
      case modelicaParser::FLOW:
      case modelicaParser::STREAM:
      case modelicaParser::DISCRETE:
      case modelicaParser::PARAMETER:
      case modelicaParser::CONSTANT:
      case modelicaParser::DOT: {
        setState(584);
        component_clause1();
        break;
      }

      case modelicaParser::REPLACEABLE: {
        setState(585);
        element_replaceable();
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

//----------------- Element_replaceableContext ------------------------------------------------------------------

modelicaParser::Element_replaceableContext::Element_replaceableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* modelicaParser::Element_replaceableContext::REPLACEABLE() {
  return getToken(modelicaParser::REPLACEABLE, 0);
}

modelicaParser::Short_class_definitionContext* modelicaParser::Element_replaceableContext::short_class_definition() {
  return getRuleContext<modelicaParser::Short_class_definitionContext>(0);
}

modelicaParser::Component_clause1Context* modelicaParser::Element_replaceableContext::component_clause1() {
  return getRuleContext<modelicaParser::Component_clause1Context>(0);
}

modelicaParser::Constraining_clauseContext* modelicaParser::Element_replaceableContext::constraining_clause() {
  return getRuleContext<modelicaParser::Constraining_clauseContext>(0);
}


size_t modelicaParser::Element_replaceableContext::getRuleIndex() const {
  return modelicaParser::RuleElement_replaceable;
}


modelicaParser::Element_replaceableContext* modelicaParser::element_replaceable() {
  Element_replaceableContext *_localctx = _tracker.createInstance<Element_replaceableContext>(_ctx, getState());
  enterRule(_localctx, 88, modelicaParser::RuleElement_replaceable);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(588);
    match(modelicaParser::REPLACEABLE);
    setState(591);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case modelicaParser::PARTIAL:
      case modelicaParser::CLASS:
      case modelicaParser::MODEL:
      case modelicaParser::OPERATOR:
      case modelicaParser::RECORD:
      case modelicaParser::BLOCK:
      case modelicaParser::EXPANDABLE:
      case modelicaParser::CONNECTOR:
      case modelicaParser::TYPE:
      case modelicaParser::PACKAGE:
      case modelicaParser::PURE:
      case modelicaParser::IMPURE:
      case modelicaParser::FUNCTION: {
        setState(589);
        short_class_definition();
        break;
      }

      case modelicaParser::IDENT:
      case modelicaParser::INPUT:
      case modelicaParser::OUTPUT:
      case modelicaParser::FLOW:
      case modelicaParser::STREAM:
      case modelicaParser::DISCRETE:
      case modelicaParser::PARAMETER:
      case modelicaParser::CONSTANT:
      case modelicaParser::DOT: {
        setState(590);
        component_clause1();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(594);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == modelicaParser::CONSTRAINEDBY) {
      setState(593);
      constraining_clause();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Component_clause1Context ------------------------------------------------------------------

modelicaParser::Component_clause1Context::Component_clause1Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

modelicaParser::Type_prefixContext* modelicaParser::Component_clause1Context::type_prefix() {
  return getRuleContext<modelicaParser::Type_prefixContext>(0);
}

modelicaParser::Type_specifierContext* modelicaParser::Component_clause1Context::type_specifier() {
  return getRuleContext<modelicaParser::Type_specifierContext>(0);
}

modelicaParser::Component_declaration1Context* modelicaParser::Component_clause1Context::component_declaration1() {
  return getRuleContext<modelicaParser::Component_declaration1Context>(0);
}


size_t modelicaParser::Component_clause1Context::getRuleIndex() const {
  return modelicaParser::RuleComponent_clause1;
}


modelicaParser::Component_clause1Context* modelicaParser::component_clause1() {
  Component_clause1Context *_localctx = _tracker.createInstance<Component_clause1Context>(_ctx, getState());
  enterRule(_localctx, 90, modelicaParser::RuleComponent_clause1);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(596);
    type_prefix();
    setState(597);
    type_specifier();
    setState(598);
    component_declaration1();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Component_declaration1Context ------------------------------------------------------------------

modelicaParser::Component_declaration1Context::Component_declaration1Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

modelicaParser::DeclarationContext* modelicaParser::Component_declaration1Context::declaration() {
  return getRuleContext<modelicaParser::DeclarationContext>(0);
}

modelicaParser::CommentContext* modelicaParser::Component_declaration1Context::comment() {
  return getRuleContext<modelicaParser::CommentContext>(0);
}


size_t modelicaParser::Component_declaration1Context::getRuleIndex() const {
  return modelicaParser::RuleComponent_declaration1;
}


modelicaParser::Component_declaration1Context* modelicaParser::component_declaration1() {
  Component_declaration1Context *_localctx = _tracker.createInstance<Component_declaration1Context>(_ctx, getState());
  enterRule(_localctx, 92, modelicaParser::RuleComponent_declaration1);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(600);
    declaration();
    setState(601);
    comment();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Short_class_definitionContext ------------------------------------------------------------------

modelicaParser::Short_class_definitionContext::Short_class_definitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

modelicaParser::Class_prefixesContext* modelicaParser::Short_class_definitionContext::class_prefixes() {
  return getRuleContext<modelicaParser::Class_prefixesContext>(0);
}

modelicaParser::Short_class_specifierContext* modelicaParser::Short_class_definitionContext::short_class_specifier() {
  return getRuleContext<modelicaParser::Short_class_specifierContext>(0);
}


size_t modelicaParser::Short_class_definitionContext::getRuleIndex() const {
  return modelicaParser::RuleShort_class_definition;
}


modelicaParser::Short_class_definitionContext* modelicaParser::short_class_definition() {
  Short_class_definitionContext *_localctx = _tracker.createInstance<Short_class_definitionContext>(_ctx, getState());
  enterRule(_localctx, 94, modelicaParser::RuleShort_class_definition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(603);
    class_prefixes();
    setState(604);
    short_class_specifier();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Equation_sectionContext ------------------------------------------------------------------

modelicaParser::Equation_sectionContext::Equation_sectionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* modelicaParser::Equation_sectionContext::LEQUATION() {
  return getToken(modelicaParser::LEQUATION, 0);
}

tree::TerminalNode* modelicaParser::Equation_sectionContext::INITIAL() {
  return getToken(modelicaParser::INITIAL, 0);
}

std::vector<modelicaParser::EquationContext *> modelicaParser::Equation_sectionContext::equation() {
  return getRuleContexts<modelicaParser::EquationContext>();
}

modelicaParser::EquationContext* modelicaParser::Equation_sectionContext::equation(size_t i) {
  return getRuleContext<modelicaParser::EquationContext>(i);
}

std::vector<tree::TerminalNode *> modelicaParser::Equation_sectionContext::SEMI() {
  return getTokens(modelicaParser::SEMI);
}

tree::TerminalNode* modelicaParser::Equation_sectionContext::SEMI(size_t i) {
  return getToken(modelicaParser::SEMI, i);
}


size_t modelicaParser::Equation_sectionContext::getRuleIndex() const {
  return modelicaParser::RuleEquation_section;
}


modelicaParser::Equation_sectionContext* modelicaParser::equation_section() {
  Equation_sectionContext *_localctx = _tracker.createInstance<Equation_sectionContext>(_ctx, getState());
  enterRule(_localctx, 96, modelicaParser::RuleEquation_section);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(607);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == modelicaParser::INITIAL) {
      setState(606);
      match(modelicaParser::INITIAL);
    }
    setState(609);
    match(modelicaParser::LEQUATION);
    setState(615);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 73, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(610);
        equation();
        setState(611);
        match(modelicaParser::SEMI); 
      }
      setState(617);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 73, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Algorithm_sectionContext ------------------------------------------------------------------

modelicaParser::Algorithm_sectionContext::Algorithm_sectionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* modelicaParser::Algorithm_sectionContext::ALGORITHM() {
  return getToken(modelicaParser::ALGORITHM, 0);
}

tree::TerminalNode* modelicaParser::Algorithm_sectionContext::INITIAL() {
  return getToken(modelicaParser::INITIAL, 0);
}

std::vector<modelicaParser::StatementContext *> modelicaParser::Algorithm_sectionContext::statement() {
  return getRuleContexts<modelicaParser::StatementContext>();
}

modelicaParser::StatementContext* modelicaParser::Algorithm_sectionContext::statement(size_t i) {
  return getRuleContext<modelicaParser::StatementContext>(i);
}

std::vector<tree::TerminalNode *> modelicaParser::Algorithm_sectionContext::SEMI() {
  return getTokens(modelicaParser::SEMI);
}

tree::TerminalNode* modelicaParser::Algorithm_sectionContext::SEMI(size_t i) {
  return getToken(modelicaParser::SEMI, i);
}


size_t modelicaParser::Algorithm_sectionContext::getRuleIndex() const {
  return modelicaParser::RuleAlgorithm_section;
}


modelicaParser::Algorithm_sectionContext* modelicaParser::algorithm_section() {
  Algorithm_sectionContext *_localctx = _tracker.createInstance<Algorithm_sectionContext>(_ctx, getState());
  enterRule(_localctx, 98, modelicaParser::RuleAlgorithm_section);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(619);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == modelicaParser::INITIAL) {
      setState(618);
      match(modelicaParser::INITIAL);
    }
    setState(621);
    match(modelicaParser::ALGORITHM);
    setState(627);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << modelicaParser::IDENT)
      | (1ULL << modelicaParser::IF)
      | (1ULL << modelicaParser::BREAK)
      | (1ULL << modelicaParser::RETURN)
      | (1ULL << modelicaParser::FOR)
      | (1ULL << modelicaParser::WHILE)
      | (1ULL << modelicaParser::WHEN))) != 0) || _la == modelicaParser::DOT

    || _la == modelicaParser::LPAREN) {
      setState(622);
      statement();
      setState(623);
      match(modelicaParser::SEMI);
      setState(629);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EquationContext ------------------------------------------------------------------

modelicaParser::EquationContext::EquationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

modelicaParser::CommentContext* modelicaParser::EquationContext::comment() {
  return getRuleContext<modelicaParser::CommentContext>(0);
}

modelicaParser::Equation_valuation2Context* modelicaParser::EquationContext::equation_valuation2() {
  return getRuleContext<modelicaParser::Equation_valuation2Context>(0);
}

modelicaParser::If_equationContext* modelicaParser::EquationContext::if_equation() {
  return getRuleContext<modelicaParser::If_equationContext>(0);
}

modelicaParser::For_equationContext* modelicaParser::EquationContext::for_equation() {
  return getRuleContext<modelicaParser::For_equationContext>(0);
}

modelicaParser::Connect_clauseContext* modelicaParser::EquationContext::connect_clause() {
  return getRuleContext<modelicaParser::Connect_clauseContext>(0);
}

modelicaParser::When_equationContext* modelicaParser::EquationContext::when_equation() {
  return getRuleContext<modelicaParser::When_equationContext>(0);
}


size_t modelicaParser::EquationContext::getRuleIndex() const {
  return modelicaParser::RuleEquation;
}


modelicaParser::EquationContext* modelicaParser::equation() {
  EquationContext *_localctx = _tracker.createInstance<EquationContext>(_ctx, getState());
  enterRule(_localctx, 100, modelicaParser::RuleEquation);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(635);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case modelicaParser::IDENT:
      case modelicaParser::STRING:
      case modelicaParser::UNSIGNED_NUMBER:
      case modelicaParser::FALSE:
      case modelicaParser::TRUE:
      case modelicaParser::PURE:
      case modelicaParser::END:
      case modelicaParser::DER:
      case modelicaParser::INITIAL:
      case modelicaParser::NOT:
      case modelicaParser::ADD:
      case modelicaParser::SUB:
      case modelicaParser::DOT:
      case modelicaParser::LBRACKET:
      case modelicaParser::LPAREN:
      case modelicaParser::LBRACE:
      case modelicaParser::DOT_ADD:
      case modelicaParser::DOT_SUB: {
        setState(630);
        equation_valuation2();
        break;
      }

      case modelicaParser::IF: {
        setState(631);
        if_equation();
        break;
      }

      case modelicaParser::FOR: {
        setState(632);
        for_equation();
        break;
      }

      case modelicaParser::CONNECT: {
        setState(633);
        connect_clause();
        break;
      }

      case modelicaParser::WHEN: {
        setState(634);
        when_equation();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(637);
    comment();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Equation_valuation2Context ------------------------------------------------------------------

modelicaParser::Equation_valuation2Context::Equation_valuation2Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

modelicaParser::Simple_expressionContext* modelicaParser::Equation_valuation2Context::simple_expression() {
  return getRuleContext<modelicaParser::Simple_expressionContext>(0);
}

tree::TerminalNode* modelicaParser::Equation_valuation2Context::ASSIGN() {
  return getToken(modelicaParser::ASSIGN, 0);
}

modelicaParser::ExpressionContext* modelicaParser::Equation_valuation2Context::expression() {
  return getRuleContext<modelicaParser::ExpressionContext>(0);
}


size_t modelicaParser::Equation_valuation2Context::getRuleIndex() const {
  return modelicaParser::RuleEquation_valuation2;
}


modelicaParser::Equation_valuation2Context* modelicaParser::equation_valuation2() {
  Equation_valuation2Context *_localctx = _tracker.createInstance<Equation_valuation2Context>(_ctx, getState());
  enterRule(_localctx, 102, modelicaParser::RuleEquation_valuation2);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(639);
    simple_expression();
    setState(642);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == modelicaParser::ASSIGN) {
      setState(640);
      match(modelicaParser::ASSIGN);
      setState(641);
      expression();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

modelicaParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

modelicaParser::CommentContext* modelicaParser::StatementContext::comment() {
  return getRuleContext<modelicaParser::CommentContext>(0);
}

modelicaParser::Equation_valuationContext* modelicaParser::StatementContext::equation_valuation() {
  return getRuleContext<modelicaParser::Equation_valuationContext>(0);
}

tree::TerminalNode* modelicaParser::StatementContext::LPAREN() {
  return getToken(modelicaParser::LPAREN, 0);
}

modelicaParser::Output_expression_listContext* modelicaParser::StatementContext::output_expression_list() {
  return getRuleContext<modelicaParser::Output_expression_listContext>(0);
}

tree::TerminalNode* modelicaParser::StatementContext::RPAREN() {
  return getToken(modelicaParser::RPAREN, 0);
}

tree::TerminalNode* modelicaParser::StatementContext::C_ASSIGN() {
  return getToken(modelicaParser::C_ASSIGN, 0);
}

modelicaParser::Component_referenceContext* modelicaParser::StatementContext::component_reference() {
  return getRuleContext<modelicaParser::Component_referenceContext>(0);
}

modelicaParser::Function_call_argsContext* modelicaParser::StatementContext::function_call_args() {
  return getRuleContext<modelicaParser::Function_call_argsContext>(0);
}

tree::TerminalNode* modelicaParser::StatementContext::BREAK() {
  return getToken(modelicaParser::BREAK, 0);
}

tree::TerminalNode* modelicaParser::StatementContext::RETURN() {
  return getToken(modelicaParser::RETURN, 0);
}

modelicaParser::If_statementContext* modelicaParser::StatementContext::if_statement() {
  return getRuleContext<modelicaParser::If_statementContext>(0);
}

modelicaParser::For_statementContext* modelicaParser::StatementContext::for_statement() {
  return getRuleContext<modelicaParser::For_statementContext>(0);
}

modelicaParser::While_statementContext* modelicaParser::StatementContext::while_statement() {
  return getRuleContext<modelicaParser::While_statementContext>(0);
}

modelicaParser::When_statementContext* modelicaParser::StatementContext::when_statement() {
  return getRuleContext<modelicaParser::When_statementContext>(0);
}


size_t modelicaParser::StatementContext::getRuleIndex() const {
  return modelicaParser::RuleStatement;
}


modelicaParser::StatementContext* modelicaParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 104, modelicaParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(658);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case modelicaParser::IDENT:
      case modelicaParser::DOT: {
        setState(644);
        equation_valuation();
        break;
      }

      case modelicaParser::LPAREN: {
        setState(645);
        match(modelicaParser::LPAREN);
        setState(646);
        output_expression_list();
        setState(647);
        match(modelicaParser::RPAREN);
        setState(648);
        match(modelicaParser::C_ASSIGN);
        setState(649);
        component_reference();
        setState(650);
        function_call_args();
        break;
      }

      case modelicaParser::BREAK: {
        setState(652);
        match(modelicaParser::BREAK);
        break;
      }

      case modelicaParser::RETURN: {
        setState(653);
        match(modelicaParser::RETURN);
        break;
      }

      case modelicaParser::IF: {
        setState(654);
        if_statement();
        break;
      }

      case modelicaParser::FOR: {
        setState(655);
        for_statement();
        break;
      }

      case modelicaParser::WHILE: {
        setState(656);
        while_statement();
        break;
      }

      case modelicaParser::WHEN: {
        setState(657);
        when_statement();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(660);
    comment();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Equation_valuationContext ------------------------------------------------------------------

modelicaParser::Equation_valuationContext::Equation_valuationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

modelicaParser::Component_referenceContext* modelicaParser::Equation_valuationContext::component_reference() {
  return getRuleContext<modelicaParser::Component_referenceContext>(0);
}

tree::TerminalNode* modelicaParser::Equation_valuationContext::C_ASSIGN() {
  return getToken(modelicaParser::C_ASSIGN, 0);
}

modelicaParser::ExpressionContext* modelicaParser::Equation_valuationContext::expression() {
  return getRuleContext<modelicaParser::ExpressionContext>(0);
}

modelicaParser::Function_call_argsContext* modelicaParser::Equation_valuationContext::function_call_args() {
  return getRuleContext<modelicaParser::Function_call_argsContext>(0);
}


size_t modelicaParser::Equation_valuationContext::getRuleIndex() const {
  return modelicaParser::RuleEquation_valuation;
}


modelicaParser::Equation_valuationContext* modelicaParser::equation_valuation() {
  Equation_valuationContext *_localctx = _tracker.createInstance<Equation_valuationContext>(_ctx, getState());
  enterRule(_localctx, 106, modelicaParser::RuleEquation_valuation);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(662);
    component_reference();
    setState(666);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case modelicaParser::C_ASSIGN: {
        setState(663);
        match(modelicaParser::C_ASSIGN);
        setState(664);
        expression();
        break;
      }

      case modelicaParser::LPAREN: {
        setState(665);
        function_call_args();
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

//----------------- If_equationContext ------------------------------------------------------------------

modelicaParser::If_equationContext::If_equationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> modelicaParser::If_equationContext::IF() {
  return getTokens(modelicaParser::IF);
}

tree::TerminalNode* modelicaParser::If_equationContext::IF(size_t i) {
  return getToken(modelicaParser::IF, i);
}

std::vector<modelicaParser::ExpressionContext *> modelicaParser::If_equationContext::expression() {
  return getRuleContexts<modelicaParser::ExpressionContext>();
}

modelicaParser::ExpressionContext* modelicaParser::If_equationContext::expression(size_t i) {
  return getRuleContext<modelicaParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> modelicaParser::If_equationContext::THEN() {
  return getTokens(modelicaParser::THEN);
}

tree::TerminalNode* modelicaParser::If_equationContext::THEN(size_t i) {
  return getToken(modelicaParser::THEN, i);
}

tree::TerminalNode* modelicaParser::If_equationContext::END() {
  return getToken(modelicaParser::END, 0);
}

std::vector<modelicaParser::EquationContext *> modelicaParser::If_equationContext::equation() {
  return getRuleContexts<modelicaParser::EquationContext>();
}

modelicaParser::EquationContext* modelicaParser::If_equationContext::equation(size_t i) {
  return getRuleContext<modelicaParser::EquationContext>(i);
}

std::vector<tree::TerminalNode *> modelicaParser::If_equationContext::SEMI() {
  return getTokens(modelicaParser::SEMI);
}

tree::TerminalNode* modelicaParser::If_equationContext::SEMI(size_t i) {
  return getToken(modelicaParser::SEMI, i);
}

std::vector<tree::TerminalNode *> modelicaParser::If_equationContext::ELSEIF() {
  return getTokens(modelicaParser::ELSEIF);
}

tree::TerminalNode* modelicaParser::If_equationContext::ELSEIF(size_t i) {
  return getToken(modelicaParser::ELSEIF, i);
}

tree::TerminalNode* modelicaParser::If_equationContext::ELSE() {
  return getToken(modelicaParser::ELSE, 0);
}


size_t modelicaParser::If_equationContext::getRuleIndex() const {
  return modelicaParser::RuleIf_equation;
}


modelicaParser::If_equationContext* modelicaParser::if_equation() {
  If_equationContext *_localctx = _tracker.createInstance<If_equationContext>(_ctx, getState());
  enterRule(_localctx, 108, modelicaParser::RuleIf_equation);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(668);
    match(modelicaParser::IF);
    setState(669);
    expression();
    setState(670);
    match(modelicaParser::THEN);
    setState(676);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 80, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(671);
        equation();
        setState(672);
        match(modelicaParser::SEMI); 
      }
      setState(678);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 80, _ctx);
    }
    setState(692);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == modelicaParser::ELSEIF) {
      setState(679);
      match(modelicaParser::ELSEIF);
      setState(680);
      expression();
      setState(681);
      match(modelicaParser::THEN);
      setState(687);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 81, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(682);
          equation();
          setState(683);
          match(modelicaParser::SEMI); 
        }
        setState(689);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 81, _ctx);
      }
      setState(694);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(704);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == modelicaParser::ELSE) {
      setState(695);
      match(modelicaParser::ELSE);
      setState(701);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 83, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(696);
          equation();
          setState(697);
          match(modelicaParser::SEMI); 
        }
        setState(703);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 83, _ctx);
      }
    }
    setState(706);
    match(modelicaParser::END);
    setState(707);
    match(modelicaParser::IF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- If_statementContext ------------------------------------------------------------------

modelicaParser::If_statementContext::If_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> modelicaParser::If_statementContext::IF() {
  return getTokens(modelicaParser::IF);
}

tree::TerminalNode* modelicaParser::If_statementContext::IF(size_t i) {
  return getToken(modelicaParser::IF, i);
}

std::vector<modelicaParser::ExpressionContext *> modelicaParser::If_statementContext::expression() {
  return getRuleContexts<modelicaParser::ExpressionContext>();
}

modelicaParser::ExpressionContext* modelicaParser::If_statementContext::expression(size_t i) {
  return getRuleContext<modelicaParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> modelicaParser::If_statementContext::THEN() {
  return getTokens(modelicaParser::THEN);
}

tree::TerminalNode* modelicaParser::If_statementContext::THEN(size_t i) {
  return getToken(modelicaParser::THEN, i);
}

tree::TerminalNode* modelicaParser::If_statementContext::END() {
  return getToken(modelicaParser::END, 0);
}

std::vector<modelicaParser::StatementContext *> modelicaParser::If_statementContext::statement() {
  return getRuleContexts<modelicaParser::StatementContext>();
}

modelicaParser::StatementContext* modelicaParser::If_statementContext::statement(size_t i) {
  return getRuleContext<modelicaParser::StatementContext>(i);
}

std::vector<tree::TerminalNode *> modelicaParser::If_statementContext::SEMI() {
  return getTokens(modelicaParser::SEMI);
}

tree::TerminalNode* modelicaParser::If_statementContext::SEMI(size_t i) {
  return getToken(modelicaParser::SEMI, i);
}

std::vector<tree::TerminalNode *> modelicaParser::If_statementContext::ELSEIF() {
  return getTokens(modelicaParser::ELSEIF);
}

tree::TerminalNode* modelicaParser::If_statementContext::ELSEIF(size_t i) {
  return getToken(modelicaParser::ELSEIF, i);
}

tree::TerminalNode* modelicaParser::If_statementContext::ELSE() {
  return getToken(modelicaParser::ELSE, 0);
}


size_t modelicaParser::If_statementContext::getRuleIndex() const {
  return modelicaParser::RuleIf_statement;
}


modelicaParser::If_statementContext* modelicaParser::if_statement() {
  If_statementContext *_localctx = _tracker.createInstance<If_statementContext>(_ctx, getState());
  enterRule(_localctx, 110, modelicaParser::RuleIf_statement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(709);
    match(modelicaParser::IF);
    setState(710);
    expression();
    setState(711);
    match(modelicaParser::THEN);
    setState(717);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << modelicaParser::IDENT)
      | (1ULL << modelicaParser::IF)
      | (1ULL << modelicaParser::BREAK)
      | (1ULL << modelicaParser::RETURN)
      | (1ULL << modelicaParser::FOR)
      | (1ULL << modelicaParser::WHILE)
      | (1ULL << modelicaParser::WHEN))) != 0) || _la == modelicaParser::DOT

    || _la == modelicaParser::LPAREN) {
      setState(712);
      statement();
      setState(713);
      match(modelicaParser::SEMI);
      setState(719);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(733);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == modelicaParser::ELSEIF) {
      setState(720);
      match(modelicaParser::ELSEIF);
      setState(721);
      expression();
      setState(722);
      match(modelicaParser::THEN);
      setState(728);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << modelicaParser::IDENT)
        | (1ULL << modelicaParser::IF)
        | (1ULL << modelicaParser::BREAK)
        | (1ULL << modelicaParser::RETURN)
        | (1ULL << modelicaParser::FOR)
        | (1ULL << modelicaParser::WHILE)
        | (1ULL << modelicaParser::WHEN))) != 0) || _la == modelicaParser::DOT

      || _la == modelicaParser::LPAREN) {
        setState(723);
        statement();
        setState(724);
        match(modelicaParser::SEMI);
        setState(730);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(735);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(745);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == modelicaParser::ELSE) {
      setState(736);
      match(modelicaParser::ELSE);
      setState(742);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << modelicaParser::IDENT)
        | (1ULL << modelicaParser::IF)
        | (1ULL << modelicaParser::BREAK)
        | (1ULL << modelicaParser::RETURN)
        | (1ULL << modelicaParser::FOR)
        | (1ULL << modelicaParser::WHILE)
        | (1ULL << modelicaParser::WHEN))) != 0) || _la == modelicaParser::DOT

      || _la == modelicaParser::LPAREN) {
        setState(737);
        statement();
        setState(738);
        match(modelicaParser::SEMI);
        setState(744);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(747);
    match(modelicaParser::END);
    setState(748);
    match(modelicaParser::IF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- For_equationContext ------------------------------------------------------------------

modelicaParser::For_equationContext::For_equationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> modelicaParser::For_equationContext::FOR() {
  return getTokens(modelicaParser::FOR);
}

tree::TerminalNode* modelicaParser::For_equationContext::FOR(size_t i) {
  return getToken(modelicaParser::FOR, i);
}

modelicaParser::For_indicesContext* modelicaParser::For_equationContext::for_indices() {
  return getRuleContext<modelicaParser::For_indicesContext>(0);
}

tree::TerminalNode* modelicaParser::For_equationContext::LOOP() {
  return getToken(modelicaParser::LOOP, 0);
}

tree::TerminalNode* modelicaParser::For_equationContext::END() {
  return getToken(modelicaParser::END, 0);
}

std::vector<modelicaParser::EquationContext *> modelicaParser::For_equationContext::equation() {
  return getRuleContexts<modelicaParser::EquationContext>();
}

modelicaParser::EquationContext* modelicaParser::For_equationContext::equation(size_t i) {
  return getRuleContext<modelicaParser::EquationContext>(i);
}

std::vector<tree::TerminalNode *> modelicaParser::For_equationContext::SEMI() {
  return getTokens(modelicaParser::SEMI);
}

tree::TerminalNode* modelicaParser::For_equationContext::SEMI(size_t i) {
  return getToken(modelicaParser::SEMI, i);
}


size_t modelicaParser::For_equationContext::getRuleIndex() const {
  return modelicaParser::RuleFor_equation;
}


modelicaParser::For_equationContext* modelicaParser::for_equation() {
  For_equationContext *_localctx = _tracker.createInstance<For_equationContext>(_ctx, getState());
  enterRule(_localctx, 112, modelicaParser::RuleFor_equation);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(750);
    match(modelicaParser::FOR);
    setState(751);
    for_indices();
    setState(752);
    match(modelicaParser::LOOP);
    setState(758);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 90, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(753);
        equation();
        setState(754);
        match(modelicaParser::SEMI); 
      }
      setState(760);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 90, _ctx);
    }
    setState(761);
    match(modelicaParser::END);
    setState(762);
    match(modelicaParser::FOR);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- For_statementContext ------------------------------------------------------------------

modelicaParser::For_statementContext::For_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> modelicaParser::For_statementContext::FOR() {
  return getTokens(modelicaParser::FOR);
}

tree::TerminalNode* modelicaParser::For_statementContext::FOR(size_t i) {
  return getToken(modelicaParser::FOR, i);
}

modelicaParser::For_indicesContext* modelicaParser::For_statementContext::for_indices() {
  return getRuleContext<modelicaParser::For_indicesContext>(0);
}

tree::TerminalNode* modelicaParser::For_statementContext::LOOP() {
  return getToken(modelicaParser::LOOP, 0);
}

tree::TerminalNode* modelicaParser::For_statementContext::END() {
  return getToken(modelicaParser::END, 0);
}

std::vector<modelicaParser::StatementContext *> modelicaParser::For_statementContext::statement() {
  return getRuleContexts<modelicaParser::StatementContext>();
}

modelicaParser::StatementContext* modelicaParser::For_statementContext::statement(size_t i) {
  return getRuleContext<modelicaParser::StatementContext>(i);
}

std::vector<tree::TerminalNode *> modelicaParser::For_statementContext::SEMI() {
  return getTokens(modelicaParser::SEMI);
}

tree::TerminalNode* modelicaParser::For_statementContext::SEMI(size_t i) {
  return getToken(modelicaParser::SEMI, i);
}


size_t modelicaParser::For_statementContext::getRuleIndex() const {
  return modelicaParser::RuleFor_statement;
}


modelicaParser::For_statementContext* modelicaParser::for_statement() {
  For_statementContext *_localctx = _tracker.createInstance<For_statementContext>(_ctx, getState());
  enterRule(_localctx, 114, modelicaParser::RuleFor_statement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(764);
    match(modelicaParser::FOR);
    setState(765);
    for_indices();
    setState(766);
    match(modelicaParser::LOOP);
    setState(772);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << modelicaParser::IDENT)
      | (1ULL << modelicaParser::IF)
      | (1ULL << modelicaParser::BREAK)
      | (1ULL << modelicaParser::RETURN)
      | (1ULL << modelicaParser::FOR)
      | (1ULL << modelicaParser::WHILE)
      | (1ULL << modelicaParser::WHEN))) != 0) || _la == modelicaParser::DOT

    || _la == modelicaParser::LPAREN) {
      setState(767);
      statement();
      setState(768);
      match(modelicaParser::SEMI);
      setState(774);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(775);
    match(modelicaParser::END);
    setState(776);
    match(modelicaParser::FOR);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- For_indicesContext ------------------------------------------------------------------

modelicaParser::For_indicesContext::For_indicesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<modelicaParser::For_indexContext *> modelicaParser::For_indicesContext::for_index() {
  return getRuleContexts<modelicaParser::For_indexContext>();
}

modelicaParser::For_indexContext* modelicaParser::For_indicesContext::for_index(size_t i) {
  return getRuleContext<modelicaParser::For_indexContext>(i);
}

std::vector<tree::TerminalNode *> modelicaParser::For_indicesContext::COMMA() {
  return getTokens(modelicaParser::COMMA);
}

tree::TerminalNode* modelicaParser::For_indicesContext::COMMA(size_t i) {
  return getToken(modelicaParser::COMMA, i);
}


size_t modelicaParser::For_indicesContext::getRuleIndex() const {
  return modelicaParser::RuleFor_indices;
}


modelicaParser::For_indicesContext* modelicaParser::for_indices() {
  For_indicesContext *_localctx = _tracker.createInstance<For_indicesContext>(_ctx, getState());
  enterRule(_localctx, 116, modelicaParser::RuleFor_indices);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(778);
    for_index();
    setState(783);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == modelicaParser::COMMA) {
      setState(779);
      match(modelicaParser::COMMA);
      setState(780);
      for_index();
      setState(785);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- For_indexContext ------------------------------------------------------------------

modelicaParser::For_indexContext::For_indexContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

modelicaParser::IdContext* modelicaParser::For_indexContext::id() {
  return getRuleContext<modelicaParser::IdContext>(0);
}

tree::TerminalNode* modelicaParser::For_indexContext::IN() {
  return getToken(modelicaParser::IN, 0);
}

modelicaParser::For_rangeContext* modelicaParser::For_indexContext::for_range() {
  return getRuleContext<modelicaParser::For_rangeContext>(0);
}


size_t modelicaParser::For_indexContext::getRuleIndex() const {
  return modelicaParser::RuleFor_index;
}


modelicaParser::For_indexContext* modelicaParser::for_index() {
  For_indexContext *_localctx = _tracker.createInstance<For_indexContext>(_ctx, getState());
  enterRule(_localctx, 118, modelicaParser::RuleFor_index);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(786);
    id();
    setState(789);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == modelicaParser::IN) {
      setState(787);
      match(modelicaParser::IN);
      setState(788);
      for_range();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- For_rangeContext ------------------------------------------------------------------

modelicaParser::For_rangeContext::For_rangeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

modelicaParser::ExpressionContext* modelicaParser::For_rangeContext::expression() {
  return getRuleContext<modelicaParser::ExpressionContext>(0);
}


size_t modelicaParser::For_rangeContext::getRuleIndex() const {
  return modelicaParser::RuleFor_range;
}


modelicaParser::For_rangeContext* modelicaParser::for_range() {
  For_rangeContext *_localctx = _tracker.createInstance<For_rangeContext>(_ctx, getState());
  enterRule(_localctx, 120, modelicaParser::RuleFor_range);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(791);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- While_statementContext ------------------------------------------------------------------

modelicaParser::While_statementContext::While_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> modelicaParser::While_statementContext::WHILE() {
  return getTokens(modelicaParser::WHILE);
}

tree::TerminalNode* modelicaParser::While_statementContext::WHILE(size_t i) {
  return getToken(modelicaParser::WHILE, i);
}

modelicaParser::ExpressionContext* modelicaParser::While_statementContext::expression() {
  return getRuleContext<modelicaParser::ExpressionContext>(0);
}

tree::TerminalNode* modelicaParser::While_statementContext::LOOP() {
  return getToken(modelicaParser::LOOP, 0);
}

tree::TerminalNode* modelicaParser::While_statementContext::END() {
  return getToken(modelicaParser::END, 0);
}

std::vector<modelicaParser::StatementContext *> modelicaParser::While_statementContext::statement() {
  return getRuleContexts<modelicaParser::StatementContext>();
}

modelicaParser::StatementContext* modelicaParser::While_statementContext::statement(size_t i) {
  return getRuleContext<modelicaParser::StatementContext>(i);
}

std::vector<tree::TerminalNode *> modelicaParser::While_statementContext::SEMI() {
  return getTokens(modelicaParser::SEMI);
}

tree::TerminalNode* modelicaParser::While_statementContext::SEMI(size_t i) {
  return getToken(modelicaParser::SEMI, i);
}


size_t modelicaParser::While_statementContext::getRuleIndex() const {
  return modelicaParser::RuleWhile_statement;
}


modelicaParser::While_statementContext* modelicaParser::while_statement() {
  While_statementContext *_localctx = _tracker.createInstance<While_statementContext>(_ctx, getState());
  enterRule(_localctx, 122, modelicaParser::RuleWhile_statement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(793);
    match(modelicaParser::WHILE);
    setState(794);
    expression();
    setState(795);
    match(modelicaParser::LOOP);
    setState(801);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << modelicaParser::IDENT)
      | (1ULL << modelicaParser::IF)
      | (1ULL << modelicaParser::BREAK)
      | (1ULL << modelicaParser::RETURN)
      | (1ULL << modelicaParser::FOR)
      | (1ULL << modelicaParser::WHILE)
      | (1ULL << modelicaParser::WHEN))) != 0) || _la == modelicaParser::DOT

    || _la == modelicaParser::LPAREN) {
      setState(796);
      statement();
      setState(797);
      match(modelicaParser::SEMI);
      setState(803);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(804);
    match(modelicaParser::END);
    setState(805);
    match(modelicaParser::WHILE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- When_equationContext ------------------------------------------------------------------

modelicaParser::When_equationContext::When_equationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> modelicaParser::When_equationContext::WHEN() {
  return getTokens(modelicaParser::WHEN);
}

tree::TerminalNode* modelicaParser::When_equationContext::WHEN(size_t i) {
  return getToken(modelicaParser::WHEN, i);
}

std::vector<modelicaParser::ExpressionContext *> modelicaParser::When_equationContext::expression() {
  return getRuleContexts<modelicaParser::ExpressionContext>();
}

modelicaParser::ExpressionContext* modelicaParser::When_equationContext::expression(size_t i) {
  return getRuleContext<modelicaParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> modelicaParser::When_equationContext::THEN() {
  return getTokens(modelicaParser::THEN);
}

tree::TerminalNode* modelicaParser::When_equationContext::THEN(size_t i) {
  return getToken(modelicaParser::THEN, i);
}

tree::TerminalNode* modelicaParser::When_equationContext::END() {
  return getToken(modelicaParser::END, 0);
}

std::vector<modelicaParser::EquationContext *> modelicaParser::When_equationContext::equation() {
  return getRuleContexts<modelicaParser::EquationContext>();
}

modelicaParser::EquationContext* modelicaParser::When_equationContext::equation(size_t i) {
  return getRuleContext<modelicaParser::EquationContext>(i);
}

std::vector<tree::TerminalNode *> modelicaParser::When_equationContext::SEMI() {
  return getTokens(modelicaParser::SEMI);
}

tree::TerminalNode* modelicaParser::When_equationContext::SEMI(size_t i) {
  return getToken(modelicaParser::SEMI, i);
}

std::vector<tree::TerminalNode *> modelicaParser::When_equationContext::ELSEWHEN() {
  return getTokens(modelicaParser::ELSEWHEN);
}

tree::TerminalNode* modelicaParser::When_equationContext::ELSEWHEN(size_t i) {
  return getToken(modelicaParser::ELSEWHEN, i);
}


size_t modelicaParser::When_equationContext::getRuleIndex() const {
  return modelicaParser::RuleWhen_equation;
}


modelicaParser::When_equationContext* modelicaParser::when_equation() {
  When_equationContext *_localctx = _tracker.createInstance<When_equationContext>(_ctx, getState());
  enterRule(_localctx, 124, modelicaParser::RuleWhen_equation);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(807);
    match(modelicaParser::WHEN);
    setState(808);
    expression();
    setState(809);
    match(modelicaParser::THEN);
    setState(815);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 95, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(810);
        equation();
        setState(811);
        match(modelicaParser::SEMI); 
      }
      setState(817);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 95, _ctx);
    }
    setState(831);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == modelicaParser::ELSEWHEN) {
      setState(818);
      match(modelicaParser::ELSEWHEN);
      setState(819);
      expression();
      setState(820);
      match(modelicaParser::THEN);
      setState(826);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 96, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(821);
          equation();
          setState(822);
          match(modelicaParser::SEMI); 
        }
        setState(828);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 96, _ctx);
      }
      setState(833);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(834);
    match(modelicaParser::END);
    setState(835);
    match(modelicaParser::WHEN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- When_statementContext ------------------------------------------------------------------

modelicaParser::When_statementContext::When_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> modelicaParser::When_statementContext::WHEN() {
  return getTokens(modelicaParser::WHEN);
}

tree::TerminalNode* modelicaParser::When_statementContext::WHEN(size_t i) {
  return getToken(modelicaParser::WHEN, i);
}

std::vector<modelicaParser::ExpressionContext *> modelicaParser::When_statementContext::expression() {
  return getRuleContexts<modelicaParser::ExpressionContext>();
}

modelicaParser::ExpressionContext* modelicaParser::When_statementContext::expression(size_t i) {
  return getRuleContext<modelicaParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> modelicaParser::When_statementContext::THEN() {
  return getTokens(modelicaParser::THEN);
}

tree::TerminalNode* modelicaParser::When_statementContext::THEN(size_t i) {
  return getToken(modelicaParser::THEN, i);
}

tree::TerminalNode* modelicaParser::When_statementContext::END() {
  return getToken(modelicaParser::END, 0);
}

std::vector<modelicaParser::StatementContext *> modelicaParser::When_statementContext::statement() {
  return getRuleContexts<modelicaParser::StatementContext>();
}

modelicaParser::StatementContext* modelicaParser::When_statementContext::statement(size_t i) {
  return getRuleContext<modelicaParser::StatementContext>(i);
}

std::vector<tree::TerminalNode *> modelicaParser::When_statementContext::SEMI() {
  return getTokens(modelicaParser::SEMI);
}

tree::TerminalNode* modelicaParser::When_statementContext::SEMI(size_t i) {
  return getToken(modelicaParser::SEMI, i);
}

std::vector<tree::TerminalNode *> modelicaParser::When_statementContext::ELSEWHEN() {
  return getTokens(modelicaParser::ELSEWHEN);
}

tree::TerminalNode* modelicaParser::When_statementContext::ELSEWHEN(size_t i) {
  return getToken(modelicaParser::ELSEWHEN, i);
}


size_t modelicaParser::When_statementContext::getRuleIndex() const {
  return modelicaParser::RuleWhen_statement;
}


modelicaParser::When_statementContext* modelicaParser::when_statement() {
  When_statementContext *_localctx = _tracker.createInstance<When_statementContext>(_ctx, getState());
  enterRule(_localctx, 126, modelicaParser::RuleWhen_statement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(837);
    match(modelicaParser::WHEN);
    setState(838);
    expression();
    setState(839);
    match(modelicaParser::THEN);
    setState(845);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << modelicaParser::IDENT)
      | (1ULL << modelicaParser::IF)
      | (1ULL << modelicaParser::BREAK)
      | (1ULL << modelicaParser::RETURN)
      | (1ULL << modelicaParser::FOR)
      | (1ULL << modelicaParser::WHILE)
      | (1ULL << modelicaParser::WHEN))) != 0) || _la == modelicaParser::DOT

    || _la == modelicaParser::LPAREN) {
      setState(840);
      statement();
      setState(841);
      match(modelicaParser::SEMI);
      setState(847);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(861);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == modelicaParser::ELSEWHEN) {
      setState(848);
      match(modelicaParser::ELSEWHEN);
      setState(849);
      expression();
      setState(850);
      match(modelicaParser::THEN);
      setState(856);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << modelicaParser::IDENT)
        | (1ULL << modelicaParser::IF)
        | (1ULL << modelicaParser::BREAK)
        | (1ULL << modelicaParser::RETURN)
        | (1ULL << modelicaParser::FOR)
        | (1ULL << modelicaParser::WHILE)
        | (1ULL << modelicaParser::WHEN))) != 0) || _la == modelicaParser::DOT

      || _la == modelicaParser::LPAREN) {
        setState(851);
        statement();
        setState(852);
        match(modelicaParser::SEMI);
        setState(858);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(863);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(864);
    match(modelicaParser::END);
    setState(865);
    match(modelicaParser::WHEN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Connect_clauseContext ------------------------------------------------------------------

modelicaParser::Connect_clauseContext::Connect_clauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* modelicaParser::Connect_clauseContext::CONNECT() {
  return getToken(modelicaParser::CONNECT, 0);
}

tree::TerminalNode* modelicaParser::Connect_clauseContext::LPAREN() {
  return getToken(modelicaParser::LPAREN, 0);
}

std::vector<modelicaParser::Component_referenceContext *> modelicaParser::Connect_clauseContext::component_reference() {
  return getRuleContexts<modelicaParser::Component_referenceContext>();
}

modelicaParser::Component_referenceContext* modelicaParser::Connect_clauseContext::component_reference(size_t i) {
  return getRuleContext<modelicaParser::Component_referenceContext>(i);
}

tree::TerminalNode* modelicaParser::Connect_clauseContext::COMMA() {
  return getToken(modelicaParser::COMMA, 0);
}

tree::TerminalNode* modelicaParser::Connect_clauseContext::RPAREN() {
  return getToken(modelicaParser::RPAREN, 0);
}


size_t modelicaParser::Connect_clauseContext::getRuleIndex() const {
  return modelicaParser::RuleConnect_clause;
}


modelicaParser::Connect_clauseContext* modelicaParser::connect_clause() {
  Connect_clauseContext *_localctx = _tracker.createInstance<Connect_clauseContext>(_ctx, getState());
  enterRule(_localctx, 128, modelicaParser::RuleConnect_clause);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(867);
    match(modelicaParser::CONNECT);
    setState(868);
    match(modelicaParser::LPAREN);
    setState(869);
    component_reference();
    setState(870);
    match(modelicaParser::COMMA);
    setState(871);
    component_reference();
    setState(872);
    match(modelicaParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

modelicaParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

modelicaParser::Simple_expressionContext* modelicaParser::ExpressionContext::simple_expression() {
  return getRuleContext<modelicaParser::Simple_expressionContext>(0);
}

tree::TerminalNode* modelicaParser::ExpressionContext::IF() {
  return getToken(modelicaParser::IF, 0);
}

std::vector<modelicaParser::ExpressionContext *> modelicaParser::ExpressionContext::expression() {
  return getRuleContexts<modelicaParser::ExpressionContext>();
}

modelicaParser::ExpressionContext* modelicaParser::ExpressionContext::expression(size_t i) {
  return getRuleContext<modelicaParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> modelicaParser::ExpressionContext::THEN() {
  return getTokens(modelicaParser::THEN);
}

tree::TerminalNode* modelicaParser::ExpressionContext::THEN(size_t i) {
  return getToken(modelicaParser::THEN, i);
}

tree::TerminalNode* modelicaParser::ExpressionContext::ELSE() {
  return getToken(modelicaParser::ELSE, 0);
}

std::vector<tree::TerminalNode *> modelicaParser::ExpressionContext::ELSEIF() {
  return getTokens(modelicaParser::ELSEIF);
}

tree::TerminalNode* modelicaParser::ExpressionContext::ELSEIF(size_t i) {
  return getToken(modelicaParser::ELSEIF, i);
}


size_t modelicaParser::ExpressionContext::getRuleIndex() const {
  return modelicaParser::RuleExpression;
}


modelicaParser::ExpressionContext* modelicaParser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 130, modelicaParser::RuleExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(892);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case modelicaParser::IDENT:
      case modelicaParser::STRING:
      case modelicaParser::UNSIGNED_NUMBER:
      case modelicaParser::FALSE:
      case modelicaParser::TRUE:
      case modelicaParser::PURE:
      case modelicaParser::END:
      case modelicaParser::DER:
      case modelicaParser::INITIAL:
      case modelicaParser::NOT:
      case modelicaParser::ADD:
      case modelicaParser::SUB:
      case modelicaParser::DOT:
      case modelicaParser::LBRACKET:
      case modelicaParser::LPAREN:
      case modelicaParser::LBRACE:
      case modelicaParser::DOT_ADD:
      case modelicaParser::DOT_SUB: {
        enterOuterAlt(_localctx, 1);
        setState(874);
        simple_expression();
        break;
      }

      case modelicaParser::IF: {
        enterOuterAlt(_localctx, 2);
        setState(875);
        match(modelicaParser::IF);
        setState(876);
        expression();
        setState(877);
        match(modelicaParser::THEN);
        setState(878);
        expression();
        setState(886);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == modelicaParser::ELSEIF) {
          setState(879);
          match(modelicaParser::ELSEIF);
          setState(880);
          expression();
          setState(881);
          match(modelicaParser::THEN);
          setState(882);
          expression();
          setState(888);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(889);
        match(modelicaParser::ELSE);
        setState(890);
        expression();
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

//----------------- Simple_expressionContext ------------------------------------------------------------------

modelicaParser::Simple_expressionContext::Simple_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<modelicaParser::Logical_expressionContext *> modelicaParser::Simple_expressionContext::logical_expression() {
  return getRuleContexts<modelicaParser::Logical_expressionContext>();
}

modelicaParser::Logical_expressionContext* modelicaParser::Simple_expressionContext::logical_expression(size_t i) {
  return getRuleContext<modelicaParser::Logical_expressionContext>(i);
}

std::vector<tree::TerminalNode *> modelicaParser::Simple_expressionContext::COLON() {
  return getTokens(modelicaParser::COLON);
}

tree::TerminalNode* modelicaParser::Simple_expressionContext::COLON(size_t i) {
  return getToken(modelicaParser::COLON, i);
}


size_t modelicaParser::Simple_expressionContext::getRuleIndex() const {
  return modelicaParser::RuleSimple_expression;
}


modelicaParser::Simple_expressionContext* modelicaParser::simple_expression() {
  Simple_expressionContext *_localctx = _tracker.createInstance<Simple_expressionContext>(_ctx, getState());
  enterRule(_localctx, 132, modelicaParser::RuleSimple_expression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(894);
    logical_expression();
    setState(901);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == modelicaParser::COLON) {
      setState(895);
      match(modelicaParser::COLON);
      setState(896);
      logical_expression();
      setState(899);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == modelicaParser::COLON) {
        setState(897);
        match(modelicaParser::COLON);
        setState(898);
        logical_expression();
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

//----------------- Logical_expressionContext ------------------------------------------------------------------

modelicaParser::Logical_expressionContext::Logical_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<modelicaParser::Logical_termContext *> modelicaParser::Logical_expressionContext::logical_term() {
  return getRuleContexts<modelicaParser::Logical_termContext>();
}

modelicaParser::Logical_termContext* modelicaParser::Logical_expressionContext::logical_term(size_t i) {
  return getRuleContext<modelicaParser::Logical_termContext>(i);
}

std::vector<tree::TerminalNode *> modelicaParser::Logical_expressionContext::OR() {
  return getTokens(modelicaParser::OR);
}

tree::TerminalNode* modelicaParser::Logical_expressionContext::OR(size_t i) {
  return getToken(modelicaParser::OR, i);
}


size_t modelicaParser::Logical_expressionContext::getRuleIndex() const {
  return modelicaParser::RuleLogical_expression;
}


modelicaParser::Logical_expressionContext* modelicaParser::logical_expression() {
  Logical_expressionContext *_localctx = _tracker.createInstance<Logical_expressionContext>(_ctx, getState());
  enterRule(_localctx, 134, modelicaParser::RuleLogical_expression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(903);
    logical_term();
    setState(908);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == modelicaParser::OR) {
      setState(904);
      match(modelicaParser::OR);
      setState(905);
      logical_term();
      setState(910);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Logical_termContext ------------------------------------------------------------------

modelicaParser::Logical_termContext::Logical_termContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<modelicaParser::Logical_factorContext *> modelicaParser::Logical_termContext::logical_factor() {
  return getRuleContexts<modelicaParser::Logical_factorContext>();
}

modelicaParser::Logical_factorContext* modelicaParser::Logical_termContext::logical_factor(size_t i) {
  return getRuleContext<modelicaParser::Logical_factorContext>(i);
}

std::vector<tree::TerminalNode *> modelicaParser::Logical_termContext::AND() {
  return getTokens(modelicaParser::AND);
}

tree::TerminalNode* modelicaParser::Logical_termContext::AND(size_t i) {
  return getToken(modelicaParser::AND, i);
}


size_t modelicaParser::Logical_termContext::getRuleIndex() const {
  return modelicaParser::RuleLogical_term;
}


modelicaParser::Logical_termContext* modelicaParser::logical_term() {
  Logical_termContext *_localctx = _tracker.createInstance<Logical_termContext>(_ctx, getState());
  enterRule(_localctx, 136, modelicaParser::RuleLogical_term);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(911);
    logical_factor();
    setState(916);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == modelicaParser::AND) {
      setState(912);
      match(modelicaParser::AND);
      setState(913);
      logical_factor();
      setState(918);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Logical_factorContext ------------------------------------------------------------------

modelicaParser::Logical_factorContext::Logical_factorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

modelicaParser::RelationContext* modelicaParser::Logical_factorContext::relation() {
  return getRuleContext<modelicaParser::RelationContext>(0);
}

tree::TerminalNode* modelicaParser::Logical_factorContext::NOT() {
  return getToken(modelicaParser::NOT, 0);
}


size_t modelicaParser::Logical_factorContext::getRuleIndex() const {
  return modelicaParser::RuleLogical_factor;
}


modelicaParser::Logical_factorContext* modelicaParser::logical_factor() {
  Logical_factorContext *_localctx = _tracker.createInstance<Logical_factorContext>(_ctx, getState());
  enterRule(_localctx, 138, modelicaParser::RuleLogical_factor);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(920);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == modelicaParser::NOT) {
      setState(919);
      match(modelicaParser::NOT);
    }
    setState(922);
    relation();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RelationContext ------------------------------------------------------------------

modelicaParser::RelationContext::RelationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

modelicaParser::Arithmetic_expressionContext* modelicaParser::RelationContext::arithmetic_expression() {
  return getRuleContext<modelicaParser::Arithmetic_expressionContext>(0);
}

modelicaParser::If_relationContext* modelicaParser::RelationContext::if_relation() {
  return getRuleContext<modelicaParser::If_relationContext>(0);
}


size_t modelicaParser::RelationContext::getRuleIndex() const {
  return modelicaParser::RuleRelation;
}


modelicaParser::RelationContext* modelicaParser::relation() {
  RelationContext *_localctx = _tracker.createInstance<RelationContext>(_ctx, getState());
  enterRule(_localctx, 140, modelicaParser::RuleRelation);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(926);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 108, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(924);
      arithmetic_expression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(925);
      if_relation();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- If_relationContext ------------------------------------------------------------------

modelicaParser::If_relationContext::If_relationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<modelicaParser::Arithmetic_expressionContext *> modelicaParser::If_relationContext::arithmetic_expression() {
  return getRuleContexts<modelicaParser::Arithmetic_expressionContext>();
}

modelicaParser::Arithmetic_expressionContext* modelicaParser::If_relationContext::arithmetic_expression(size_t i) {
  return getRuleContext<modelicaParser::Arithmetic_expressionContext>(i);
}

modelicaParser::Relational_operatorContext* modelicaParser::If_relationContext::relational_operator() {
  return getRuleContext<modelicaParser::Relational_operatorContext>(0);
}


size_t modelicaParser::If_relationContext::getRuleIndex() const {
  return modelicaParser::RuleIf_relation;
}


modelicaParser::If_relationContext* modelicaParser::if_relation() {
  If_relationContext *_localctx = _tracker.createInstance<If_relationContext>(_ctx, getState());
  enterRule(_localctx, 142, modelicaParser::RuleIf_relation);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(928);
    arithmetic_expression();
    setState(929);
    relational_operator();
    setState(930);
    arithmetic_expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Relational_operatorContext ------------------------------------------------------------------

modelicaParser::Relational_operatorContext::Relational_operatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* modelicaParser::Relational_operatorContext::LT() {
  return getToken(modelicaParser::LT, 0);
}

tree::TerminalNode* modelicaParser::Relational_operatorContext::LE() {
  return getToken(modelicaParser::LE, 0);
}

tree::TerminalNode* modelicaParser::Relational_operatorContext::GT() {
  return getToken(modelicaParser::GT, 0);
}

tree::TerminalNode* modelicaParser::Relational_operatorContext::GE() {
  return getToken(modelicaParser::GE, 0);
}

tree::TerminalNode* modelicaParser::Relational_operatorContext::EQ() {
  return getToken(modelicaParser::EQ, 0);
}

tree::TerminalNode* modelicaParser::Relational_operatorContext::L_OP() {
  return getToken(modelicaParser::L_OP, 0);
}


size_t modelicaParser::Relational_operatorContext::getRuleIndex() const {
  return modelicaParser::RuleRelational_operator;
}


modelicaParser::Relational_operatorContext* modelicaParser::relational_operator() {
  Relational_operatorContext *_localctx = _tracker.createInstance<Relational_operatorContext>(_ctx, getState());
  enterRule(_localctx, 144, modelicaParser::RuleRelational_operator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(932);
    _la = _input->LA(1);
    if (!(((((_la - 73) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 73)) & ((1ULL << (modelicaParser::LT - 73))
      | (1ULL << (modelicaParser::LE - 73))
      | (1ULL << (modelicaParser::GT - 73))
      | (1ULL << (modelicaParser::GE - 73))
      | (1ULL << (modelicaParser::EQ - 73))
      | (1ULL << (modelicaParser::L_OP - 73)))) != 0))) {
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

//----------------- Arithmetic_expressionContext ------------------------------------------------------------------

modelicaParser::Arithmetic_expressionContext::Arithmetic_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<modelicaParser::TermContext *> modelicaParser::Arithmetic_expressionContext::term() {
  return getRuleContexts<modelicaParser::TermContext>();
}

modelicaParser::TermContext* modelicaParser::Arithmetic_expressionContext::term(size_t i) {
  return getRuleContext<modelicaParser::TermContext>(i);
}

std::vector<modelicaParser::Add_operatorContext *> modelicaParser::Arithmetic_expressionContext::add_operator() {
  return getRuleContexts<modelicaParser::Add_operatorContext>();
}

modelicaParser::Add_operatorContext* modelicaParser::Arithmetic_expressionContext::add_operator(size_t i) {
  return getRuleContext<modelicaParser::Add_operatorContext>(i);
}


size_t modelicaParser::Arithmetic_expressionContext::getRuleIndex() const {
  return modelicaParser::RuleArithmetic_expression;
}


modelicaParser::Arithmetic_expressionContext* modelicaParser::arithmetic_expression() {
  Arithmetic_expressionContext *_localctx = _tracker.createInstance<Arithmetic_expressionContext>(_ctx, getState());
  enterRule(_localctx, 146, modelicaParser::RuleArithmetic_expression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(935);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 68) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 68)) & ((1ULL << (modelicaParser::ADD - 68))
      | (1ULL << (modelicaParser::SUB - 68))
      | (1ULL << (modelicaParser::DOT_ADD - 68))
      | (1ULL << (modelicaParser::DOT_SUB - 68)))) != 0)) {
      setState(934);
      add_operator();
    }
    setState(937);
    term();
    setState(943);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 68) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 68)) & ((1ULL << (modelicaParser::ADD - 68))
      | (1ULL << (modelicaParser::SUB - 68))
      | (1ULL << (modelicaParser::DOT_ADD - 68))
      | (1ULL << (modelicaParser::DOT_SUB - 68)))) != 0)) {
      setState(938);
      add_operator();
      setState(939);
      term();
      setState(945);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Add_operatorContext ------------------------------------------------------------------

modelicaParser::Add_operatorContext::Add_operatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* modelicaParser::Add_operatorContext::ADD() {
  return getToken(modelicaParser::ADD, 0);
}

tree::TerminalNode* modelicaParser::Add_operatorContext::SUB() {
  return getToken(modelicaParser::SUB, 0);
}

tree::TerminalNode* modelicaParser::Add_operatorContext::DOT_ADD() {
  return getToken(modelicaParser::DOT_ADD, 0);
}

tree::TerminalNode* modelicaParser::Add_operatorContext::DOT_SUB() {
  return getToken(modelicaParser::DOT_SUB, 0);
}


size_t modelicaParser::Add_operatorContext::getRuleIndex() const {
  return modelicaParser::RuleAdd_operator;
}


modelicaParser::Add_operatorContext* modelicaParser::add_operator() {
  Add_operatorContext *_localctx = _tracker.createInstance<Add_operatorContext>(_ctx, getState());
  enterRule(_localctx, 148, modelicaParser::RuleAdd_operator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(946);
    _la = _input->LA(1);
    if (!(((((_la - 68) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 68)) & ((1ULL << (modelicaParser::ADD - 68))
      | (1ULL << (modelicaParser::SUB - 68))
      | (1ULL << (modelicaParser::DOT_ADD - 68))
      | (1ULL << (modelicaParser::DOT_SUB - 68)))) != 0))) {
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

//----------------- TermContext ------------------------------------------------------------------

modelicaParser::TermContext::TermContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<modelicaParser::FactorContext *> modelicaParser::TermContext::factor() {
  return getRuleContexts<modelicaParser::FactorContext>();
}

modelicaParser::FactorContext* modelicaParser::TermContext::factor(size_t i) {
  return getRuleContext<modelicaParser::FactorContext>(i);
}

std::vector<modelicaParser::Mul_operatorContext *> modelicaParser::TermContext::mul_operator() {
  return getRuleContexts<modelicaParser::Mul_operatorContext>();
}

modelicaParser::Mul_operatorContext* modelicaParser::TermContext::mul_operator(size_t i) {
  return getRuleContext<modelicaParser::Mul_operatorContext>(i);
}


size_t modelicaParser::TermContext::getRuleIndex() const {
  return modelicaParser::RuleTerm;
}


modelicaParser::TermContext* modelicaParser::term() {
  TermContext *_localctx = _tracker.createInstance<TermContext>(_ctx, getState());
  enterRule(_localctx, 150, modelicaParser::RuleTerm);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(948);
    factor();
    setState(954);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 70) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 70)) & ((1ULL << (modelicaParser::MUL - 70))
      | (1ULL << (modelicaParser::DIV - 70))
      | (1ULL << (modelicaParser::DOT_MUL - 70))
      | (1ULL << (modelicaParser::DOT_DIV - 70)))) != 0)) {
      setState(949);
      mul_operator();
      setState(950);
      factor();
      setState(956);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Mul_operatorContext ------------------------------------------------------------------

modelicaParser::Mul_operatorContext::Mul_operatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* modelicaParser::Mul_operatorContext::MUL() {
  return getToken(modelicaParser::MUL, 0);
}

tree::TerminalNode* modelicaParser::Mul_operatorContext::DIV() {
  return getToken(modelicaParser::DIV, 0);
}

tree::TerminalNode* modelicaParser::Mul_operatorContext::DOT_MUL() {
  return getToken(modelicaParser::DOT_MUL, 0);
}

tree::TerminalNode* modelicaParser::Mul_operatorContext::DOT_DIV() {
  return getToken(modelicaParser::DOT_DIV, 0);
}


size_t modelicaParser::Mul_operatorContext::getRuleIndex() const {
  return modelicaParser::RuleMul_operator;
}


modelicaParser::Mul_operatorContext* modelicaParser::mul_operator() {
  Mul_operatorContext *_localctx = _tracker.createInstance<Mul_operatorContext>(_ctx, getState());
  enterRule(_localctx, 152, modelicaParser::RuleMul_operator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(957);
    _la = _input->LA(1);
    if (!(((((_la - 70) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 70)) & ((1ULL << (modelicaParser::MUL - 70))
      | (1ULL << (modelicaParser::DIV - 70))
      | (1ULL << (modelicaParser::DOT_MUL - 70))
      | (1ULL << (modelicaParser::DOT_DIV - 70)))) != 0))) {
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

//----------------- FactorContext ------------------------------------------------------------------

modelicaParser::FactorContext::FactorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<modelicaParser::PrimaryContext *> modelicaParser::FactorContext::primary() {
  return getRuleContexts<modelicaParser::PrimaryContext>();
}

modelicaParser::PrimaryContext* modelicaParser::FactorContext::primary(size_t i) {
  return getRuleContext<modelicaParser::PrimaryContext>(i);
}

tree::TerminalNode* modelicaParser::FactorContext::POWER() {
  return getToken(modelicaParser::POWER, 0);
}

tree::TerminalNode* modelicaParser::FactorContext::DOT_P() {
  return getToken(modelicaParser::DOT_P, 0);
}


size_t modelicaParser::FactorContext::getRuleIndex() const {
  return modelicaParser::RuleFactor;
}


modelicaParser::FactorContext* modelicaParser::factor() {
  FactorContext *_localctx = _tracker.createInstance<FactorContext>(_ctx, getState());
  enterRule(_localctx, 154, modelicaParser::RuleFactor);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(959);
    primary();
    setState(962);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == modelicaParser::POWER

    || _la == modelicaParser::DOT_P) {
      setState(960);
      _la = _input->LA(1);
      if (!(_la == modelicaParser::POWER

      || _la == modelicaParser::DOT_P)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(961);
      primary();
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

modelicaParser::NumberContext::NumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* modelicaParser::NumberContext::UNSIGNED_NUMBER() {
  return getToken(modelicaParser::UNSIGNED_NUMBER, 0);
}


size_t modelicaParser::NumberContext::getRuleIndex() const {
  return modelicaParser::RuleNumber;
}


modelicaParser::NumberContext* modelicaParser::number() {
  NumberContext *_localctx = _tracker.createInstance<NumberContext>(_ctx, getState());
  enterRule(_localctx, 156, modelicaParser::RuleNumber);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(964);
    match(modelicaParser::UNSIGNED_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StringContext ------------------------------------------------------------------

modelicaParser::StringContext::StringContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* modelicaParser::StringContext::STRING() {
  return getToken(modelicaParser::STRING, 0);
}


size_t modelicaParser::StringContext::getRuleIndex() const {
  return modelicaParser::RuleString;
}


modelicaParser::StringContext* modelicaParser::string() {
  StringContext *_localctx = _tracker.createInstance<StringContext>(_ctx, getState());
  enterRule(_localctx, 158, modelicaParser::RuleString);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(966);
    match(modelicaParser::STRING);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Boolean_myContext ------------------------------------------------------------------

modelicaParser::Boolean_myContext::Boolean_myContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* modelicaParser::Boolean_myContext::FALSE() {
  return getToken(modelicaParser::FALSE, 0);
}

tree::TerminalNode* modelicaParser::Boolean_myContext::TRUE() {
  return getToken(modelicaParser::TRUE, 0);
}


size_t modelicaParser::Boolean_myContext::getRuleIndex() const {
  return modelicaParser::RuleBoolean_my;
}


modelicaParser::Boolean_myContext* modelicaParser::boolean_my() {
  Boolean_myContext *_localctx = _tracker.createInstance<Boolean_myContext>(_ctx, getState());
  enterRule(_localctx, 160, modelicaParser::RuleBoolean_my);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(968);
    _la = _input->LA(1);
    if (!(_la == modelicaParser::FALSE

    || _la == modelicaParser::TRUE)) {
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

//----------------- PrimaryContext ------------------------------------------------------------------

modelicaParser::PrimaryContext::PrimaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

modelicaParser::NumberContext* modelicaParser::PrimaryContext::number() {
  return getRuleContext<modelicaParser::NumberContext>(0);
}

modelicaParser::StringContext* modelicaParser::PrimaryContext::string() {
  return getRuleContext<modelicaParser::StringContext>(0);
}

modelicaParser::Boolean_myContext* modelicaParser::PrimaryContext::boolean_my() {
  return getRuleContext<modelicaParser::Boolean_myContext>(0);
}

modelicaParser::Function_call_argsContext* modelicaParser::PrimaryContext::function_call_args() {
  return getRuleContext<modelicaParser::Function_call_argsContext>(0);
}

tree::TerminalNode* modelicaParser::PrimaryContext::DER() {
  return getToken(modelicaParser::DER, 0);
}

tree::TerminalNode* modelicaParser::PrimaryContext::INITIAL() {
  return getToken(modelicaParser::INITIAL, 0);
}

tree::TerminalNode* modelicaParser::PrimaryContext::PURE() {
  return getToken(modelicaParser::PURE, 0);
}

modelicaParser::Component_referenceContext* modelicaParser::PrimaryContext::component_reference() {
  return getRuleContext<modelicaParser::Component_referenceContext>(0);
}

modelicaParser::Function_callContext* modelicaParser::PrimaryContext::function_call() {
  return getRuleContext<modelicaParser::Function_callContext>(0);
}

tree::TerminalNode* modelicaParser::PrimaryContext::LPAREN() {
  return getToken(modelicaParser::LPAREN, 0);
}

modelicaParser::Output_expression_listContext* modelicaParser::PrimaryContext::output_expression_list() {
  return getRuleContext<modelicaParser::Output_expression_listContext>(0);
}

tree::TerminalNode* modelicaParser::PrimaryContext::RPAREN() {
  return getToken(modelicaParser::RPAREN, 0);
}

tree::TerminalNode* modelicaParser::PrimaryContext::LBRACKET() {
  return getToken(modelicaParser::LBRACKET, 0);
}

std::vector<modelicaParser::Expression_listContext *> modelicaParser::PrimaryContext::expression_list() {
  return getRuleContexts<modelicaParser::Expression_listContext>();
}

modelicaParser::Expression_listContext* modelicaParser::PrimaryContext::expression_list(size_t i) {
  return getRuleContext<modelicaParser::Expression_listContext>(i);
}

tree::TerminalNode* modelicaParser::PrimaryContext::RBRACKET() {
  return getToken(modelicaParser::RBRACKET, 0);
}

std::vector<tree::TerminalNode *> modelicaParser::PrimaryContext::SEMI() {
  return getTokens(modelicaParser::SEMI);
}

tree::TerminalNode* modelicaParser::PrimaryContext::SEMI(size_t i) {
  return getToken(modelicaParser::SEMI, i);
}

tree::TerminalNode* modelicaParser::PrimaryContext::LBRACE() {
  return getToken(modelicaParser::LBRACE, 0);
}

modelicaParser::Array_argumentsContext* modelicaParser::PrimaryContext::array_arguments() {
  return getRuleContext<modelicaParser::Array_argumentsContext>(0);
}

tree::TerminalNode* modelicaParser::PrimaryContext::RBRACE() {
  return getToken(modelicaParser::RBRACE, 0);
}

tree::TerminalNode* modelicaParser::PrimaryContext::END() {
  return getToken(modelicaParser::END, 0);
}


size_t modelicaParser::PrimaryContext::getRuleIndex() const {
  return modelicaParser::RulePrimary;
}


modelicaParser::PrimaryContext* modelicaParser::primary() {
  PrimaryContext *_localctx = _tracker.createInstance<PrimaryContext>(_ctx, getState());
  enterRule(_localctx, 162, modelicaParser::RulePrimary);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(997);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 114, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(970);
      number();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(971);
      string();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(972);
      boolean_my();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(973);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << modelicaParser::PURE)
        | (1ULL << modelicaParser::DER)
        | (1ULL << modelicaParser::INITIAL))) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(974);
      function_call_args();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(975);
      component_reference();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(976);
      function_call();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(977);
      match(modelicaParser::LPAREN);
      setState(978);
      output_expression_list();
      setState(979);
      match(modelicaParser::RPAREN);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(981);
      match(modelicaParser::LBRACKET);
      setState(982);
      expression_list();
      setState(987);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == modelicaParser::SEMI) {
        setState(983);
        match(modelicaParser::SEMI);
        setState(984);
        expression_list();
        setState(989);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(990);
      match(modelicaParser::RBRACKET);
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(992);
      match(modelicaParser::LBRACE);
      setState(993);
      array_arguments();
      setState(994);
      match(modelicaParser::RBRACE);
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(996);
      match(modelicaParser::END);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Function_callContext ------------------------------------------------------------------

modelicaParser::Function_callContext::Function_callContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

modelicaParser::Component_referenceContext* modelicaParser::Function_callContext::component_reference() {
  return getRuleContext<modelicaParser::Component_referenceContext>(0);
}

modelicaParser::Function_call_argsContext* modelicaParser::Function_callContext::function_call_args() {
  return getRuleContext<modelicaParser::Function_call_argsContext>(0);
}


size_t modelicaParser::Function_callContext::getRuleIndex() const {
  return modelicaParser::RuleFunction_call;
}


modelicaParser::Function_callContext* modelicaParser::function_call() {
  Function_callContext *_localctx = _tracker.createInstance<Function_callContext>(_ctx, getState());
  enterRule(_localctx, 164, modelicaParser::RuleFunction_call);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(999);
    component_reference();
    setState(1000);
    function_call_args();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Type_specifierContext ------------------------------------------------------------------

modelicaParser::Type_specifierContext::Type_specifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

modelicaParser::Type_specifier_nameContext* modelicaParser::Type_specifierContext::type_specifier_name() {
  return getRuleContext<modelicaParser::Type_specifier_nameContext>(0);
}

tree::TerminalNode* modelicaParser::Type_specifierContext::DOT() {
  return getToken(modelicaParser::DOT, 0);
}


size_t modelicaParser::Type_specifierContext::getRuleIndex() const {
  return modelicaParser::RuleType_specifier;
}


modelicaParser::Type_specifierContext* modelicaParser::type_specifier() {
  Type_specifierContext *_localctx = _tracker.createInstance<Type_specifierContext>(_ctx, getState());
  enterRule(_localctx, 166, modelicaParser::RuleType_specifier);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1003);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == modelicaParser::DOT) {
      setState(1002);
      match(modelicaParser::DOT);
    }
    setState(1005);
    type_specifier_name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Type_specifier_nameContext ------------------------------------------------------------------

modelicaParser::Type_specifier_nameContext::Type_specifier_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<modelicaParser::IdContext *> modelicaParser::Type_specifier_nameContext::id() {
  return getRuleContexts<modelicaParser::IdContext>();
}

modelicaParser::IdContext* modelicaParser::Type_specifier_nameContext::id(size_t i) {
  return getRuleContext<modelicaParser::IdContext>(i);
}

std::vector<tree::TerminalNode *> modelicaParser::Type_specifier_nameContext::DOT() {
  return getTokens(modelicaParser::DOT);
}

tree::TerminalNode* modelicaParser::Type_specifier_nameContext::DOT(size_t i) {
  return getToken(modelicaParser::DOT, i);
}


size_t modelicaParser::Type_specifier_nameContext::getRuleIndex() const {
  return modelicaParser::RuleType_specifier_name;
}


modelicaParser::Type_specifier_nameContext* modelicaParser::type_specifier_name() {
  Type_specifier_nameContext *_localctx = _tracker.createInstance<Type_specifier_nameContext>(_ctx, getState());
  enterRule(_localctx, 168, modelicaParser::RuleType_specifier_name);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1007);
    id();
    setState(1012);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == modelicaParser::DOT) {
      setState(1008);
      match(modelicaParser::DOT);
      setState(1009);
      id();
      setState(1014);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NameContext ------------------------------------------------------------------

modelicaParser::NameContext::NameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<modelicaParser::IdContext *> modelicaParser::NameContext::id() {
  return getRuleContexts<modelicaParser::IdContext>();
}

modelicaParser::IdContext* modelicaParser::NameContext::id(size_t i) {
  return getRuleContext<modelicaParser::IdContext>(i);
}

std::vector<tree::TerminalNode *> modelicaParser::NameContext::DOT() {
  return getTokens(modelicaParser::DOT);
}

tree::TerminalNode* modelicaParser::NameContext::DOT(size_t i) {
  return getToken(modelicaParser::DOT, i);
}


size_t modelicaParser::NameContext::getRuleIndex() const {
  return modelicaParser::RuleName;
}


modelicaParser::NameContext* modelicaParser::name() {
  NameContext *_localctx = _tracker.createInstance<NameContext>(_ctx, getState());
  enterRule(_localctx, 170, modelicaParser::RuleName);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1015);
    id();
    setState(1020);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 117, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1016);
        match(modelicaParser::DOT);
        setState(1017);
        id(); 
      }
      setState(1022);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 117, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Component_referenceContext ------------------------------------------------------------------

modelicaParser::Component_referenceContext::Component_referenceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<modelicaParser::IdContext *> modelicaParser::Component_referenceContext::id() {
  return getRuleContexts<modelicaParser::IdContext>();
}

modelicaParser::IdContext* modelicaParser::Component_referenceContext::id(size_t i) {
  return getRuleContext<modelicaParser::IdContext>(i);
}

std::vector<tree::TerminalNode *> modelicaParser::Component_referenceContext::DOT() {
  return getTokens(modelicaParser::DOT);
}

tree::TerminalNode* modelicaParser::Component_referenceContext::DOT(size_t i) {
  return getToken(modelicaParser::DOT, i);
}

std::vector<modelicaParser::Array_subscriptsContext *> modelicaParser::Component_referenceContext::array_subscripts() {
  return getRuleContexts<modelicaParser::Array_subscriptsContext>();
}

modelicaParser::Array_subscriptsContext* modelicaParser::Component_referenceContext::array_subscripts(size_t i) {
  return getRuleContext<modelicaParser::Array_subscriptsContext>(i);
}


size_t modelicaParser::Component_referenceContext::getRuleIndex() const {
  return modelicaParser::RuleComponent_reference;
}


modelicaParser::Component_referenceContext* modelicaParser::component_reference() {
  Component_referenceContext *_localctx = _tracker.createInstance<Component_referenceContext>(_ctx, getState());
  enterRule(_localctx, 172, modelicaParser::RuleComponent_reference);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1024);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == modelicaParser::DOT) {
      setState(1023);
      match(modelicaParser::DOT);
    }
    setState(1026);
    id();
    setState(1028);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == modelicaParser::LBRACKET) {
      setState(1027);
      array_subscripts();
    }
    setState(1037);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == modelicaParser::DOT) {
      setState(1030);
      match(modelicaParser::DOT);
      setState(1031);
      id();
      setState(1033);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == modelicaParser::LBRACKET) {
        setState(1032);
        array_subscripts();
      }
      setState(1039);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Function_call_argsContext ------------------------------------------------------------------

modelicaParser::Function_call_argsContext::Function_call_argsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* modelicaParser::Function_call_argsContext::LPAREN() {
  return getToken(modelicaParser::LPAREN, 0);
}

tree::TerminalNode* modelicaParser::Function_call_argsContext::RPAREN() {
  return getToken(modelicaParser::RPAREN, 0);
}

modelicaParser::Function_argumentsContext* modelicaParser::Function_call_argsContext::function_arguments() {
  return getRuleContext<modelicaParser::Function_argumentsContext>(0);
}


size_t modelicaParser::Function_call_argsContext::getRuleIndex() const {
  return modelicaParser::RuleFunction_call_args;
}


modelicaParser::Function_call_argsContext* modelicaParser::function_call_args() {
  Function_call_argsContext *_localctx = _tracker.createInstance<Function_call_argsContext>(_ctx, getState());
  enterRule(_localctx, 174, modelicaParser::RuleFunction_call_args);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1040);
    match(modelicaParser::LPAREN);
    setState(1042);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << modelicaParser::IDENT)
      | (1ULL << modelicaParser::STRING)
      | (1ULL << modelicaParser::UNSIGNED_NUMBER)
      | (1ULL << modelicaParser::FALSE)
      | (1ULL << modelicaParser::TRUE)
      | (1ULL << modelicaParser::PURE)
      | (1ULL << modelicaParser::FUNCTION)
      | (1ULL << modelicaParser::END)
      | (1ULL << modelicaParser::DER)
      | (1ULL << modelicaParser::IF)
      | (1ULL << modelicaParser::INITIAL))) != 0) || ((((_la - 67) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 67)) & ((1ULL << (modelicaParser::NOT - 67))
      | (1ULL << (modelicaParser::ADD - 67))
      | (1ULL << (modelicaParser::SUB - 67))
      | (1ULL << (modelicaParser::DOT - 67))
      | (1ULL << (modelicaParser::LBRACKET - 67))
      | (1ULL << (modelicaParser::LPAREN - 67))
      | (1ULL << (modelicaParser::LBRACE - 67))
      | (1ULL << (modelicaParser::DOT_ADD - 67))
      | (1ULL << (modelicaParser::DOT_SUB - 67)))) != 0)) {
      setState(1041);
      function_arguments();
    }
    setState(1044);
    match(modelicaParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Function_argumentsContext ------------------------------------------------------------------

modelicaParser::Function_argumentsContext::Function_argumentsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

modelicaParser::ExpressionContext* modelicaParser::Function_argumentsContext::expression() {
  return getRuleContext<modelicaParser::ExpressionContext>(0);
}

tree::TerminalNode* modelicaParser::Function_argumentsContext::COMMA() {
  return getToken(modelicaParser::COMMA, 0);
}

modelicaParser::Function_arguments_non_firstContext* modelicaParser::Function_argumentsContext::function_arguments_non_first() {
  return getRuleContext<modelicaParser::Function_arguments_non_firstContext>(0);
}

tree::TerminalNode* modelicaParser::Function_argumentsContext::FOR() {
  return getToken(modelicaParser::FOR, 0);
}

modelicaParser::For_indicesContext* modelicaParser::Function_argumentsContext::for_indices() {
  return getRuleContext<modelicaParser::For_indicesContext>(0);
}

modelicaParser::Function_partial_applicationContext* modelicaParser::Function_argumentsContext::function_partial_application() {
  return getRuleContext<modelicaParser::Function_partial_applicationContext>(0);
}

modelicaParser::Named_argumentsContext* modelicaParser::Function_argumentsContext::named_arguments() {
  return getRuleContext<modelicaParser::Named_argumentsContext>(0);
}


size_t modelicaParser::Function_argumentsContext::getRuleIndex() const {
  return modelicaParser::RuleFunction_arguments;
}


modelicaParser::Function_argumentsContext* modelicaParser::function_arguments() {
  Function_argumentsContext *_localctx = _tracker.createInstance<Function_argumentsContext>(_ctx, getState());
  enterRule(_localctx, 176, modelicaParser::RuleFunction_arguments);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1059);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 125, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1046);
      expression();
      setState(1051);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case modelicaParser::COMMA: {
          setState(1047);
          match(modelicaParser::COMMA);
          setState(1048);
          function_arguments_non_first();
          break;
        }

        case modelicaParser::FOR: {
          setState(1049);
          match(modelicaParser::FOR);
          setState(1050);
          for_indices();
          break;
        }

        case modelicaParser::RPAREN: {
          break;
        }

      default:
        break;
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1053);
      function_partial_application();
      setState(1056);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == modelicaParser::COMMA) {
        setState(1054);
        match(modelicaParser::COMMA);
        setState(1055);
        function_arguments_non_first();
      }
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1058);
      named_arguments();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Function_arguments_non_firstContext ------------------------------------------------------------------

modelicaParser::Function_arguments_non_firstContext::Function_arguments_non_firstContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

modelicaParser::Function_argumentContext* modelicaParser::Function_arguments_non_firstContext::function_argument() {
  return getRuleContext<modelicaParser::Function_argumentContext>(0);
}

tree::TerminalNode* modelicaParser::Function_arguments_non_firstContext::COMMA() {
  return getToken(modelicaParser::COMMA, 0);
}

modelicaParser::Function_arguments_non_firstContext* modelicaParser::Function_arguments_non_firstContext::function_arguments_non_first() {
  return getRuleContext<modelicaParser::Function_arguments_non_firstContext>(0);
}

modelicaParser::Named_argumentsContext* modelicaParser::Function_arguments_non_firstContext::named_arguments() {
  return getRuleContext<modelicaParser::Named_argumentsContext>(0);
}


size_t modelicaParser::Function_arguments_non_firstContext::getRuleIndex() const {
  return modelicaParser::RuleFunction_arguments_non_first;
}


modelicaParser::Function_arguments_non_firstContext* modelicaParser::function_arguments_non_first() {
  Function_arguments_non_firstContext *_localctx = _tracker.createInstance<Function_arguments_non_firstContext>(_ctx, getState());
  enterRule(_localctx, 178, modelicaParser::RuleFunction_arguments_non_first);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1067);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 127, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1061);
      function_argument();
      setState(1064);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == modelicaParser::COMMA) {
        setState(1062);
        match(modelicaParser::COMMA);
        setState(1063);
        function_arguments_non_first();
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1066);
      named_arguments();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Array_argumentsContext ------------------------------------------------------------------

modelicaParser::Array_argumentsContext::Array_argumentsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<modelicaParser::ExpressionContext *> modelicaParser::Array_argumentsContext::expression() {
  return getRuleContexts<modelicaParser::ExpressionContext>();
}

modelicaParser::ExpressionContext* modelicaParser::Array_argumentsContext::expression(size_t i) {
  return getRuleContext<modelicaParser::ExpressionContext>(i);
}

tree::TerminalNode* modelicaParser::Array_argumentsContext::FOR() {
  return getToken(modelicaParser::FOR, 0);
}

modelicaParser::For_indicesContext* modelicaParser::Array_argumentsContext::for_indices() {
  return getRuleContext<modelicaParser::For_indicesContext>(0);
}

std::vector<tree::TerminalNode *> modelicaParser::Array_argumentsContext::COMMA() {
  return getTokens(modelicaParser::COMMA);
}

tree::TerminalNode* modelicaParser::Array_argumentsContext::COMMA(size_t i) {
  return getToken(modelicaParser::COMMA, i);
}


size_t modelicaParser::Array_argumentsContext::getRuleIndex() const {
  return modelicaParser::RuleArray_arguments;
}


modelicaParser::Array_argumentsContext* modelicaParser::array_arguments() {
  Array_argumentsContext *_localctx = _tracker.createInstance<Array_argumentsContext>(_ctx, getState());
  enterRule(_localctx, 180, modelicaParser::RuleArray_arguments);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1069);
    expression();
    setState(1079);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case modelicaParser::COMMA:
      case modelicaParser::RBRACE: {
        setState(1074);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == modelicaParser::COMMA) {
          setState(1070);
          match(modelicaParser::COMMA);
          setState(1071);
          expression();
          setState(1076);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        break;
      }

      case modelicaParser::FOR: {
        setState(1077);
        match(modelicaParser::FOR);
        setState(1078);
        for_indices();
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

//----------------- Named_argumentsContext ------------------------------------------------------------------

modelicaParser::Named_argumentsContext::Named_argumentsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<modelicaParser::Named_argumentContext *> modelicaParser::Named_argumentsContext::named_argument() {
  return getRuleContexts<modelicaParser::Named_argumentContext>();
}

modelicaParser::Named_argumentContext* modelicaParser::Named_argumentsContext::named_argument(size_t i) {
  return getRuleContext<modelicaParser::Named_argumentContext>(i);
}

std::vector<tree::TerminalNode *> modelicaParser::Named_argumentsContext::COMMA() {
  return getTokens(modelicaParser::COMMA);
}

tree::TerminalNode* modelicaParser::Named_argumentsContext::COMMA(size_t i) {
  return getToken(modelicaParser::COMMA, i);
}


size_t modelicaParser::Named_argumentsContext::getRuleIndex() const {
  return modelicaParser::RuleNamed_arguments;
}


modelicaParser::Named_argumentsContext* modelicaParser::named_arguments() {
  Named_argumentsContext *_localctx = _tracker.createInstance<Named_argumentsContext>(_ctx, getState());
  enterRule(_localctx, 182, modelicaParser::RuleNamed_arguments);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1081);
    named_argument();
    setState(1086);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == modelicaParser::COMMA) {
      setState(1082);
      match(modelicaParser::COMMA);
      setState(1083);
      named_argument();
      setState(1088);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Named_argumentContext ------------------------------------------------------------------

modelicaParser::Named_argumentContext::Named_argumentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

modelicaParser::IdContext* modelicaParser::Named_argumentContext::id() {
  return getRuleContext<modelicaParser::IdContext>(0);
}

tree::TerminalNode* modelicaParser::Named_argumentContext::ASSIGN() {
  return getToken(modelicaParser::ASSIGN, 0);
}

modelicaParser::Function_argumentContext* modelicaParser::Named_argumentContext::function_argument() {
  return getRuleContext<modelicaParser::Function_argumentContext>(0);
}


size_t modelicaParser::Named_argumentContext::getRuleIndex() const {
  return modelicaParser::RuleNamed_argument;
}


modelicaParser::Named_argumentContext* modelicaParser::named_argument() {
  Named_argumentContext *_localctx = _tracker.createInstance<Named_argumentContext>(_ctx, getState());
  enterRule(_localctx, 184, modelicaParser::RuleNamed_argument);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1089);
    id();
    setState(1090);
    match(modelicaParser::ASSIGN);
    setState(1091);
    function_argument();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Function_argumentContext ------------------------------------------------------------------

modelicaParser::Function_argumentContext::Function_argumentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

modelicaParser::Function_partial_applicationContext* modelicaParser::Function_argumentContext::function_partial_application() {
  return getRuleContext<modelicaParser::Function_partial_applicationContext>(0);
}

modelicaParser::ExpressionContext* modelicaParser::Function_argumentContext::expression() {
  return getRuleContext<modelicaParser::ExpressionContext>(0);
}


size_t modelicaParser::Function_argumentContext::getRuleIndex() const {
  return modelicaParser::RuleFunction_argument;
}


modelicaParser::Function_argumentContext* modelicaParser::function_argument() {
  Function_argumentContext *_localctx = _tracker.createInstance<Function_argumentContext>(_ctx, getState());
  enterRule(_localctx, 186, modelicaParser::RuleFunction_argument);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1095);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case modelicaParser::FUNCTION: {
        enterOuterAlt(_localctx, 1);
        setState(1093);
        function_partial_application();
        break;
      }

      case modelicaParser::IDENT:
      case modelicaParser::STRING:
      case modelicaParser::UNSIGNED_NUMBER:
      case modelicaParser::FALSE:
      case modelicaParser::TRUE:
      case modelicaParser::PURE:
      case modelicaParser::END:
      case modelicaParser::DER:
      case modelicaParser::IF:
      case modelicaParser::INITIAL:
      case modelicaParser::NOT:
      case modelicaParser::ADD:
      case modelicaParser::SUB:
      case modelicaParser::DOT:
      case modelicaParser::LBRACKET:
      case modelicaParser::LPAREN:
      case modelicaParser::LBRACE:
      case modelicaParser::DOT_ADD:
      case modelicaParser::DOT_SUB: {
        enterOuterAlt(_localctx, 2);
        setState(1094);
        expression();
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

//----------------- Function_partial_applicationContext ------------------------------------------------------------------

modelicaParser::Function_partial_applicationContext::Function_partial_applicationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* modelicaParser::Function_partial_applicationContext::FUNCTION() {
  return getToken(modelicaParser::FUNCTION, 0);
}

modelicaParser::Type_specifierContext* modelicaParser::Function_partial_applicationContext::type_specifier() {
  return getRuleContext<modelicaParser::Type_specifierContext>(0);
}

tree::TerminalNode* modelicaParser::Function_partial_applicationContext::LPAREN() {
  return getToken(modelicaParser::LPAREN, 0);
}

tree::TerminalNode* modelicaParser::Function_partial_applicationContext::RPAREN() {
  return getToken(modelicaParser::RPAREN, 0);
}

modelicaParser::Named_argumentsContext* modelicaParser::Function_partial_applicationContext::named_arguments() {
  return getRuleContext<modelicaParser::Named_argumentsContext>(0);
}


size_t modelicaParser::Function_partial_applicationContext::getRuleIndex() const {
  return modelicaParser::RuleFunction_partial_application;
}


modelicaParser::Function_partial_applicationContext* modelicaParser::function_partial_application() {
  Function_partial_applicationContext *_localctx = _tracker.createInstance<Function_partial_applicationContext>(_ctx, getState());
  enterRule(_localctx, 188, modelicaParser::RuleFunction_partial_application);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1097);
    match(modelicaParser::FUNCTION);
    setState(1098);
    type_specifier();
    setState(1099);
    match(modelicaParser::LPAREN);
    setState(1101);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == modelicaParser::IDENT) {
      setState(1100);
      named_arguments();
    }
    setState(1103);
    match(modelicaParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Output_expression_listContext ------------------------------------------------------------------

modelicaParser::Output_expression_listContext::Output_expression_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<modelicaParser::ExpressionContext *> modelicaParser::Output_expression_listContext::expression() {
  return getRuleContexts<modelicaParser::ExpressionContext>();
}

modelicaParser::ExpressionContext* modelicaParser::Output_expression_listContext::expression(size_t i) {
  return getRuleContext<modelicaParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> modelicaParser::Output_expression_listContext::COMMA() {
  return getTokens(modelicaParser::COMMA);
}

tree::TerminalNode* modelicaParser::Output_expression_listContext::COMMA(size_t i) {
  return getToken(modelicaParser::COMMA, i);
}


size_t modelicaParser::Output_expression_listContext::getRuleIndex() const {
  return modelicaParser::RuleOutput_expression_list;
}


modelicaParser::Output_expression_listContext* modelicaParser::output_expression_list() {
  Output_expression_listContext *_localctx = _tracker.createInstance<Output_expression_listContext>(_ctx, getState());
  enterRule(_localctx, 190, modelicaParser::RuleOutput_expression_list);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1106);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << modelicaParser::IDENT)
      | (1ULL << modelicaParser::STRING)
      | (1ULL << modelicaParser::UNSIGNED_NUMBER)
      | (1ULL << modelicaParser::FALSE)
      | (1ULL << modelicaParser::TRUE)
      | (1ULL << modelicaParser::PURE)
      | (1ULL << modelicaParser::END)
      | (1ULL << modelicaParser::DER)
      | (1ULL << modelicaParser::IF)
      | (1ULL << modelicaParser::INITIAL))) != 0) || ((((_la - 67) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 67)) & ((1ULL << (modelicaParser::NOT - 67))
      | (1ULL << (modelicaParser::ADD - 67))
      | (1ULL << (modelicaParser::SUB - 67))
      | (1ULL << (modelicaParser::DOT - 67))
      | (1ULL << (modelicaParser::LBRACKET - 67))
      | (1ULL << (modelicaParser::LPAREN - 67))
      | (1ULL << (modelicaParser::LBRACE - 67))
      | (1ULL << (modelicaParser::DOT_ADD - 67))
      | (1ULL << (modelicaParser::DOT_SUB - 67)))) != 0)) {
      setState(1105);
      expression();
    }
    setState(1114);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == modelicaParser::COMMA) {
      setState(1108);
      match(modelicaParser::COMMA);
      setState(1110);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << modelicaParser::IDENT)
        | (1ULL << modelicaParser::STRING)
        | (1ULL << modelicaParser::UNSIGNED_NUMBER)
        | (1ULL << modelicaParser::FALSE)
        | (1ULL << modelicaParser::TRUE)
        | (1ULL << modelicaParser::PURE)
        | (1ULL << modelicaParser::END)
        | (1ULL << modelicaParser::DER)
        | (1ULL << modelicaParser::IF)
        | (1ULL << modelicaParser::INITIAL))) != 0) || ((((_la - 67) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 67)) & ((1ULL << (modelicaParser::NOT - 67))
        | (1ULL << (modelicaParser::ADD - 67))
        | (1ULL << (modelicaParser::SUB - 67))
        | (1ULL << (modelicaParser::DOT - 67))
        | (1ULL << (modelicaParser::LBRACKET - 67))
        | (1ULL << (modelicaParser::LPAREN - 67))
        | (1ULL << (modelicaParser::LBRACE - 67))
        | (1ULL << (modelicaParser::DOT_ADD - 67))
        | (1ULL << (modelicaParser::DOT_SUB - 67)))) != 0)) {
        setState(1109);
        expression();
      }
      setState(1116);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Expression_listContext ------------------------------------------------------------------

modelicaParser::Expression_listContext::Expression_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<modelicaParser::ExpressionContext *> modelicaParser::Expression_listContext::expression() {
  return getRuleContexts<modelicaParser::ExpressionContext>();
}

modelicaParser::ExpressionContext* modelicaParser::Expression_listContext::expression(size_t i) {
  return getRuleContext<modelicaParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> modelicaParser::Expression_listContext::COMMA() {
  return getTokens(modelicaParser::COMMA);
}

tree::TerminalNode* modelicaParser::Expression_listContext::COMMA(size_t i) {
  return getToken(modelicaParser::COMMA, i);
}


size_t modelicaParser::Expression_listContext::getRuleIndex() const {
  return modelicaParser::RuleExpression_list;
}


modelicaParser::Expression_listContext* modelicaParser::expression_list() {
  Expression_listContext *_localctx = _tracker.createInstance<Expression_listContext>(_ctx, getState());
  enterRule(_localctx, 192, modelicaParser::RuleExpression_list);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1117);
    expression();
    setState(1122);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == modelicaParser::COMMA) {
      setState(1118);
      match(modelicaParser::COMMA);
      setState(1119);
      expression();
      setState(1124);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Array_subscriptsContext ------------------------------------------------------------------

modelicaParser::Array_subscriptsContext::Array_subscriptsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* modelicaParser::Array_subscriptsContext::LBRACKET() {
  return getToken(modelicaParser::LBRACKET, 0);
}

std::vector<modelicaParser::SubscriptContext *> modelicaParser::Array_subscriptsContext::subscript() {
  return getRuleContexts<modelicaParser::SubscriptContext>();
}

modelicaParser::SubscriptContext* modelicaParser::Array_subscriptsContext::subscript(size_t i) {
  return getRuleContext<modelicaParser::SubscriptContext>(i);
}

tree::TerminalNode* modelicaParser::Array_subscriptsContext::RBRACKET() {
  return getToken(modelicaParser::RBRACKET, 0);
}

std::vector<tree::TerminalNode *> modelicaParser::Array_subscriptsContext::COMMA() {
  return getTokens(modelicaParser::COMMA);
}

tree::TerminalNode* modelicaParser::Array_subscriptsContext::COMMA(size_t i) {
  return getToken(modelicaParser::COMMA, i);
}


size_t modelicaParser::Array_subscriptsContext::getRuleIndex() const {
  return modelicaParser::RuleArray_subscripts;
}


modelicaParser::Array_subscriptsContext* modelicaParser::array_subscripts() {
  Array_subscriptsContext *_localctx = _tracker.createInstance<Array_subscriptsContext>(_ctx, getState());
  enterRule(_localctx, 194, modelicaParser::RuleArray_subscripts);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1125);
    match(modelicaParser::LBRACKET);
    setState(1126);
    subscript();
    setState(1131);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == modelicaParser::COMMA) {
      setState(1127);
      match(modelicaParser::COMMA);
      setState(1128);
      subscript();
      setState(1133);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1134);
    match(modelicaParser::RBRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SubscriptContext ------------------------------------------------------------------

modelicaParser::SubscriptContext::SubscriptContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* modelicaParser::SubscriptContext::COLON() {
  return getToken(modelicaParser::COLON, 0);
}

modelicaParser::ExpressionContext* modelicaParser::SubscriptContext::expression() {
  return getRuleContext<modelicaParser::ExpressionContext>(0);
}


size_t modelicaParser::SubscriptContext::getRuleIndex() const {
  return modelicaParser::RuleSubscript;
}


modelicaParser::SubscriptContext* modelicaParser::subscript() {
  SubscriptContext *_localctx = _tracker.createInstance<SubscriptContext>(_ctx, getState());
  enterRule(_localctx, 196, modelicaParser::RuleSubscript);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1138);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case modelicaParser::COLON: {
        enterOuterAlt(_localctx, 1);
        setState(1136);
        match(modelicaParser::COLON);
        break;
      }

      case modelicaParser::IDENT:
      case modelicaParser::STRING:
      case modelicaParser::UNSIGNED_NUMBER:
      case modelicaParser::FALSE:
      case modelicaParser::TRUE:
      case modelicaParser::PURE:
      case modelicaParser::END:
      case modelicaParser::DER:
      case modelicaParser::IF:
      case modelicaParser::INITIAL:
      case modelicaParser::NOT:
      case modelicaParser::ADD:
      case modelicaParser::SUB:
      case modelicaParser::DOT:
      case modelicaParser::LBRACKET:
      case modelicaParser::LPAREN:
      case modelicaParser::LBRACE:
      case modelicaParser::DOT_ADD:
      case modelicaParser::DOT_SUB: {
        enterOuterAlt(_localctx, 2);
        setState(1137);
        expression();
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

//----------------- CommentContext ------------------------------------------------------------------

modelicaParser::CommentContext::CommentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

modelicaParser::String_commentContext* modelicaParser::CommentContext::string_comment() {
  return getRuleContext<modelicaParser::String_commentContext>(0);
}

modelicaParser::Annotation_commentContext* modelicaParser::CommentContext::annotation_comment() {
  return getRuleContext<modelicaParser::Annotation_commentContext>(0);
}


size_t modelicaParser::CommentContext::getRuleIndex() const {
  return modelicaParser::RuleComment;
}


modelicaParser::CommentContext* modelicaParser::comment() {
  CommentContext *_localctx = _tracker.createInstance<CommentContext>(_ctx, getState());
  enterRule(_localctx, 198, modelicaParser::RuleComment);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1140);
    string_comment();
    setState(1142);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == modelicaParser::ANNOTATION) {
      setState(1141);
      annotation_comment();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- String_commentContext ------------------------------------------------------------------

modelicaParser::String_commentContext::String_commentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> modelicaParser::String_commentContext::STRING() {
  return getTokens(modelicaParser::STRING);
}

tree::TerminalNode* modelicaParser::String_commentContext::STRING(size_t i) {
  return getToken(modelicaParser::STRING, i);
}

std::vector<tree::TerminalNode *> modelicaParser::String_commentContext::ADD() {
  return getTokens(modelicaParser::ADD);
}

tree::TerminalNode* modelicaParser::String_commentContext::ADD(size_t i) {
  return getToken(modelicaParser::ADD, i);
}


size_t modelicaParser::String_commentContext::getRuleIndex() const {
  return modelicaParser::RuleString_comment;
}


modelicaParser::String_commentContext* modelicaParser::string_comment() {
  String_commentContext *_localctx = _tracker.createInstance<String_commentContext>(_ctx, getState());
  enterRule(_localctx, 200, modelicaParser::RuleString_comment);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1152);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == modelicaParser::STRING) {
      setState(1144);
      match(modelicaParser::STRING);
      setState(1149);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == modelicaParser::ADD) {
        setState(1145);
        match(modelicaParser::ADD);
        setState(1146);
        match(modelicaParser::STRING);
        setState(1151);
        _errHandler->sync(this);
        _la = _input->LA(1);
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

//----------------- Annotation_commentContext ------------------------------------------------------------------

modelicaParser::Annotation_commentContext::Annotation_commentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* modelicaParser::Annotation_commentContext::ANNOTATION() {
  return getToken(modelicaParser::ANNOTATION, 0);
}

modelicaParser::Class_modificationContext* modelicaParser::Annotation_commentContext::class_modification() {
  return getRuleContext<modelicaParser::Class_modificationContext>(0);
}


size_t modelicaParser::Annotation_commentContext::getRuleIndex() const {
  return modelicaParser::RuleAnnotation_comment;
}


modelicaParser::Annotation_commentContext* modelicaParser::annotation_comment() {
  Annotation_commentContext *_localctx = _tracker.createInstance<Annotation_commentContext>(_ctx, getState());
  enterRule(_localctx, 202, modelicaParser::RuleAnnotation_comment);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1154);
    match(modelicaParser::ANNOTATION);
    setState(1155);
    class_modification();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> modelicaParser::_decisionToDFA;
atn::PredictionContextCache modelicaParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN modelicaParser::_atn;
std::vector<uint16_t> modelicaParser::_serializedATN;

std::vector<std::string> modelicaParser::_ruleNames = {
  "stored_definition", "class_definition", "class_prefixes", "id", "class_specifier", 
  "long_class_specifier", "short_class_specifier_name", "base_prefix_name", 
  "short_class_specifier_enumeration", "specifier_enumeration", "base_prefix_specifier", 
  "short_class_specifier", "der_class_specifier", "base_prefix", "enum_list", 
  "enumeration_option_name", "enumeration_literal", "action_scope", "composition", 
  "language_specification", "external_function_call", "element_list", "element", 
  "import_clause", "import_list", "extends_clause", "constraining_clause", 
  "component_clause", "type_prefix", "component_list", "component_declaration", 
  "condition_attribute", "variable_name", "declaration", "variable_characteristic", 
  "modification", "class_modification", "class_modification1", "argument_list", 
  "argument", "element_modification_or_replaceable", "variable_characteristic_modification", 
  "element_modification", "element_redeclaration", "element_replaceable", 
  "component_clause1", "component_declaration1", "short_class_definition", 
  "equation_section", "algorithm_section", "equation", "equation_valuation2", 
  "statement", "equation_valuation", "if_equation", "if_statement", "for_equation", 
  "for_statement", "for_indices", "for_index", "for_range", "while_statement", 
  "when_equation", "when_statement", "connect_clause", "expression", "simple_expression", 
  "logical_expression", "logical_term", "logical_factor", "relation", "if_relation", 
  "relational_operator", "arithmetic_expression", "add_operator", "term", 
  "mul_operator", "factor", "number", "string", "boolean_my", "primary", 
  "function_call", "type_specifier", "type_specifier_name", "name", "component_reference", 
  "function_call_args", "function_arguments", "function_arguments_non_first", 
  "array_arguments", "named_arguments", "named_argument", "function_argument", 
  "function_partial_application", "output_expression_list", "expression_list", 
  "array_subscripts", "subscript", "comment", "string_comment", "annotation_comment"
};

std::vector<std::string> modelicaParser::_literalNames = {
  "", "'\uFEFF'", "", "", "", "", "", "", "", "'false'", "'true'", "'within'", 
  "'final'", "'encapsulated'", "'partial'", "'class'", "'model'", "'operator'", 
  "'record'", "'block'", "'expandable'", "'connector'", "'type'", "'package'", 
  "'pure'", "'impure'", "'function'", "'end'", "'extends'", "'enumeration'", 
  "'der'", "'input'", "'output'", "'public'", "'protected'", "'external'", 
  "'redeclare'", "'inner'", "'outer'", "'replaceable'", "'import'", "'constrainedby'", 
  "'flow'", "'stream'", "'discrete'", "'parameter'", "'constant'", "'if'", 
  "'each'", "'initial'", "'algorithm'", "'break'", "'return'", "'then'", 
  "'elseif'", "'else'", "'for'", "'loop'", "'in'", "'while'", "'when'", 
  "'elsewhen'", "'connect'", "'annotation'", "'equation'", "'&&'", "'||'", 
  "'!'", "'+'", "'-'", "'*'", "'/'", "'%'", "'<'", "'<='", "'>'", "'>='", 
  "'='", "'=='", "';'", "','", "'.'", "'['", "']'", "'('", "')'", "'{'", 
  "'}'", "'^'", "'.+'", "'.-'", "'.*'", "'./'", "'.^'", "':'", "':='", "'<>'"
};

std::vector<std::string> modelicaParser::_symbolicNames = {
  "", "", "BOM", "WS", "LINE_COMMENT", "ML_COMMENT", "IDENT", "STRING", 
  "UNSIGNED_NUMBER", "FALSE", "TRUE", "WITHIN", "FINAL", "ENCAPSULATED", 
  "PARTIAL", "CLASS", "MODEL", "OPERATOR", "RECORD", "BLOCK", "EXPANDABLE", 
  "CONNECTOR", "TYPE", "PACKAGE", "PURE", "IMPURE", "FUNCTION", "END", "EXTENDS", 
  "ENUMERATION", "DER", "INPUT", "OUTPUT", "PUBLIC", "PROTECTED", "EXTERNAL", 
  "REDECLARE", "INNER", "OUTER", "REPLACEABLE", "IMPORT", "CONSTRAINEDBY", 
  "FLOW", "STREAM", "DISCRETE", "PARAMETER", "CONSTANT", "IF", "EACH", "INITIAL", 
  "ALGORITHM", "BREAK", "RETURN", "THEN", "ELSEIF", "ELSE", "FOR", "LOOP", 
  "IN", "WHILE", "WHEN", "ELSEWHEN", "CONNECT", "ANNOTATION", "LEQUATION", 
  "AND", "OR", "NOT", "ADD", "SUB", "MUL", "DIV", "MOD", "LT", "LE", "GT", 
  "GE", "ASSIGN", "EQ", "SEMI", "COMMA", "DOT", "LBRACKET", "RBRACKET", 
  "LPAREN", "RPAREN", "LBRACE", "RBRACE", "POWER", "DOT_ADD", "DOT_SUB", 
  "DOT_MUL", "DOT_DIV", "DOT_P", "COLON", "C_ASSIGN", "L_OP"
};

dfa::Vocabulary modelicaParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> modelicaParser::_tokenNames;

modelicaParser::Initializer::Initializer() {
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

  static const uint16_t serializedATNSegment0[] = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
       0x3, 0x62, 0x488, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
       0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 
       0x7, 0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 
       0x4, 0xb, 0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 
       0xe, 0x9, 0xe, 0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 
       0x9, 0x11, 0x4, 0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 
       0x9, 0x14, 0x4, 0x15, 0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 
       0x9, 0x17, 0x4, 0x18, 0x9, 0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 
       0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 
       0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 0x1f, 0x9, 0x1f, 0x4, 0x20, 
       0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 0x9, 0x22, 0x4, 0x23, 
       0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 0x25, 0x4, 0x26, 
       0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x4, 0x28, 0x9, 0x28, 0x4, 0x29, 
       0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x4, 0x2b, 0x9, 0x2b, 0x4, 0x2c, 
       0x9, 0x2c, 0x4, 0x2d, 0x9, 0x2d, 0x4, 0x2e, 0x9, 0x2e, 0x4, 0x2f, 
       0x9, 0x2f, 0x4, 0x30, 0x9, 0x30, 0x4, 0x31, 0x9, 0x31, 0x4, 0x32, 
       0x9, 0x32, 0x4, 0x33, 0x9, 0x33, 0x4, 0x34, 0x9, 0x34, 0x4, 0x35, 
       0x9, 0x35, 0x4, 0x36, 0x9, 0x36, 0x4, 0x37, 0x9, 0x37, 0x4, 0x38, 
       0x9, 0x38, 0x4, 0x39, 0x9, 0x39, 0x4, 0x3a, 0x9, 0x3a, 0x4, 0x3b, 
       0x9, 0x3b, 0x4, 0x3c, 0x9, 0x3c, 0x4, 0x3d, 0x9, 0x3d, 0x4, 0x3e, 
       0x9, 0x3e, 0x4, 0x3f, 0x9, 0x3f, 0x4, 0x40, 0x9, 0x40, 0x4, 0x41, 
       0x9, 0x41, 0x4, 0x42, 0x9, 0x42, 0x4, 0x43, 0x9, 0x43, 0x4, 0x44, 
       0x9, 0x44, 0x4, 0x45, 0x9, 0x45, 0x4, 0x46, 0x9, 0x46, 0x4, 0x47, 
       0x9, 0x47, 0x4, 0x48, 0x9, 0x48, 0x4, 0x49, 0x9, 0x49, 0x4, 0x4a, 
       0x9, 0x4a, 0x4, 0x4b, 0x9, 0x4b, 0x4, 0x4c, 0x9, 0x4c, 0x4, 0x4d, 
       0x9, 0x4d, 0x4, 0x4e, 0x9, 0x4e, 0x4, 0x4f, 0x9, 0x4f, 0x4, 0x50, 
       0x9, 0x50, 0x4, 0x51, 0x9, 0x51, 0x4, 0x52, 0x9, 0x52, 0x4, 0x53, 
       0x9, 0x53, 0x4, 0x54, 0x9, 0x54, 0x4, 0x55, 0x9, 0x55, 0x4, 0x56, 
       0x9, 0x56, 0x4, 0x57, 0x9, 0x57, 0x4, 0x58, 0x9, 0x58, 0x4, 0x59, 
       0x9, 0x59, 0x4, 0x5a, 0x9, 0x5a, 0x4, 0x5b, 0x9, 0x5b, 0x4, 0x5c, 
       0x9, 0x5c, 0x4, 0x5d, 0x9, 0x5d, 0x4, 0x5e, 0x9, 0x5e, 0x4, 0x5f, 
       0x9, 0x5f, 0x4, 0x60, 0x9, 0x60, 0x4, 0x61, 0x9, 0x61, 0x4, 0x62, 
       0x9, 0x62, 0x4, 0x63, 0x9, 0x63, 0x4, 0x64, 0x9, 0x64, 0x4, 0x65, 
       0x9, 0x65, 0x4, 0x66, 0x9, 0x66, 0x4, 0x67, 0x9, 0x67, 0x3, 0x2, 
       0x5, 0x2, 0xd0, 0xa, 0x2, 0x3, 0x2, 0x3, 0x2, 0x5, 0x2, 0xd4, 0xa, 
       0x2, 0x3, 0x2, 0x5, 0x2, 0xd7, 0xa, 0x2, 0x3, 0x2, 0x5, 0x2, 0xda, 
       0xa, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x7, 0x2, 0xdf, 0xa, 0x2, 
       0xc, 0x2, 0xe, 0x2, 0xe2, 0xb, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 
       0x5, 0x3, 0xe7, 0xa, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 
       0x5, 0x4, 0xed, 0xa, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 
       0xf2, 0xa, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0xf7, 0xa, 
       0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0xfd, 0xa, 
       0x4, 0x3, 0x4, 0x5, 0x4, 0x100, 0xa, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 
       0x4, 0x104, 0xa, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 
       0x6, 0x5, 0x6, 0x10b, 0xa, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
       0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 
       0x116, 0xa, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
       0x5, 0x7, 0x11d, 0xa, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 
       0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 
       0xb, 0x5, 0xb, 0x12a, 0xa, 0xb, 0x3, 0xb, 0x5, 0xb, 0x12d, 0xa, 0xb, 
       0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 
       0xc, 0x5, 0xc, 0x136, 0xa, 0xc, 0x3, 0xc, 0x5, 0xc, 0x139, 0xa, 0xc, 
       0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0x13d, 0xa, 0xd, 0x3, 0xd, 0x3, 0xd, 
       0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
       0xe, 0x3, 0xe, 0x3, 0xe, 0x7, 0xe, 0x14a, 0xa, 0xe, 0xc, 0xe, 0xe, 
       0xe, 0x14d, 0xb, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x5, 
       0xf, 0x153, 0xa, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x7, 0x10, 
       0x158, 0xa, 0x10, 0xc, 0x10, 0xe, 0x10, 0x15b, 0xb, 0x10, 0x3, 0x11, 
       0x3, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 0x3, 0x13, 
       0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
       0x7, 0x14, 0x16a, 0xa, 0x14, 0xc, 0x14, 0xe, 0x14, 0x16d, 0xb, 0x14, 
       0x3, 0x14, 0x3, 0x14, 0x5, 0x14, 0x171, 0xa, 0x14, 0x3, 0x14, 0x5, 
       0x14, 0x174, 0xa, 0x14, 0x3, 0x14, 0x5, 0x14, 0x177, 0xa, 0x14, 0x3, 
       0x14, 0x5, 0x14, 0x17a, 0xa, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
       0x5, 0x14, 0x17f, 0xa, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 0x3, 
       0x16, 0x3, 0x16, 0x5, 0x16, 0x186, 0xa, 0x16, 0x3, 0x16, 0x3, 0x16, 
       0x3, 0x16, 0x5, 0x16, 0x18b, 0xa, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 
       0x17, 0x3, 0x17, 0x3, 0x17, 0x7, 0x17, 0x192, 0xa, 0x17, 0xc, 0x17, 
       0xe, 0x17, 0x195, 0xb, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x5, 
       0x18, 0x19a, 0xa, 0x18, 0x3, 0x18, 0x5, 0x18, 0x19d, 0xa, 0x18, 0x3, 
       0x18, 0x5, 0x18, 0x1a0, 0xa, 0x18, 0x3, 0x18, 0x5, 0x18, 0x1a3, 0xa, 
       0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x5, 
       0x18, 0x1aa, 0xa, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x5, 0x18, 
       0x1af, 0xa, 0x18, 0x5, 0x18, 0x1b1, 0xa, 0x18, 0x5, 0x18, 0x1b3, 
       0xa, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 
       0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 
       0x3, 0x19, 0x5, 0x19, 0x1c1, 0xa, 0x19, 0x3, 0x19, 0x5, 0x19, 0x1c4, 
       0xa, 0x19, 0x5, 0x19, 0x1c6, 0xa, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 
       0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x7, 0x1a, 0x1cd, 0xa, 0x1a, 0xc, 0x1a, 
       0xe, 0x1a, 0x1d0, 0xb, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x5, 
       0x1b, 0x1d5, 0xa, 0x1b, 0x3, 0x1b, 0x5, 0x1b, 0x1d8, 0xa, 0x1b, 0x3, 
       0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x5, 0x1c, 0x1dd, 0xa, 0x1c, 0x3, 0x1d, 
       0x3, 0x1d, 0x3, 0x1d, 0x5, 0x1d, 0x1e2, 0xa, 0x1d, 0x3, 0x1d, 0x3, 
       0x1d, 0x3, 0x1e, 0x5, 0x1e, 0x1e7, 0xa, 0x1e, 0x3, 0x1e, 0x5, 0x1e, 
       0x1ea, 0xa, 0x1e, 0x3, 0x1e, 0x5, 0x1e, 0x1ed, 0xa, 0x1e, 0x3, 0x1f, 
       0x3, 0x1f, 0x3, 0x1f, 0x7, 0x1f, 0x1f2, 0xa, 0x1f, 0xc, 0x1f, 0xe, 
       0x1f, 0x1f5, 0xb, 0x1f, 0x3, 0x20, 0x3, 0x20, 0x5, 0x20, 0x1f9, 0xa, 
       0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 
       0x22, 0x3, 0x22, 0x3, 0x23, 0x3, 0x23, 0x5, 0x23, 0x204, 0xa, 0x23, 
       0x3, 0x23, 0x3, 0x23, 0x5, 0x23, 0x208, 0xa, 0x23, 0x3, 0x24, 0x3, 
       0x24, 0x3, 0x24, 0x5, 0x24, 0x20d, 0xa, 0x24, 0x3, 0x25, 0x3, 0x25, 
       0x3, 0x25, 0x3, 0x25, 0x5, 0x25, 0x213, 0xa, 0x25, 0x3, 0x26, 0x3, 
       0x26, 0x5, 0x26, 0x217, 0xa, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x27, 
       0x3, 0x27, 0x5, 0x27, 0x21d, 0xa, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 
       0x28, 0x3, 0x28, 0x3, 0x28, 0x7, 0x28, 0x224, 0xa, 0x28, 0xc, 0x28, 
       0xe, 0x28, 0x227, 0xb, 0x28, 0x3, 0x29, 0x3, 0x29, 0x5, 0x29, 0x22b, 
       0xa, 0x29, 0x3, 0x2a, 0x5, 0x2a, 0x22e, 0xa, 0x2a, 0x3, 0x2a, 0x5, 
       0x2a, 0x231, 0xa, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x5, 0x2a, 0x235, 0xa, 
       0x2a, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x5, 0x2b, 0x23b, 
       0xa, 0x2b, 0x3, 0x2c, 0x3, 0x2c, 0x5, 0x2c, 0x23f, 0xa, 0x2c, 0x3, 
       0x2c, 0x3, 0x2c, 0x3, 0x2d, 0x3, 0x2d, 0x5, 0x2d, 0x245, 0xa, 0x2d, 
       0x3, 0x2d, 0x5, 0x2d, 0x248, 0xa, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 
       0x2d, 0x5, 0x2d, 0x24d, 0xa, 0x2d, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 
       0x5, 0x2e, 0x252, 0xa, 0x2e, 0x3, 0x2e, 0x5, 0x2e, 0x255, 0xa, 0x2e, 
       0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x30, 0x3, 0x30, 
       0x3, 0x30, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x32, 0x5, 0x32, 
       0x262, 0xa, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x7, 
       0x32, 0x268, 0xa, 0x32, 0xc, 0x32, 0xe, 0x32, 0x26b, 0xb, 0x32, 0x3, 
       0x33, 0x5, 0x33, 0x26e, 0xa, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 
       0x3, 0x33, 0x7, 0x33, 0x274, 0xa, 0x33, 0xc, 0x33, 0xe, 0x33, 0x277, 
       0xb, 0x33, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 
       0x5, 0x34, 0x27e, 0xa, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x35, 0x3, 
       0x35, 0x3, 0x35, 0x5, 0x35, 0x285, 0xa, 0x35, 0x3, 0x36, 0x3, 0x36, 
       0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 
       0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 
       0x5, 0x36, 0x295, 0xa, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x37, 0x3, 
       0x37, 0x3, 0x37, 0x3, 0x37, 0x5, 0x37, 0x29d, 0xa, 0x37, 0x3, 0x38, 
       0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x7, 0x38, 
       0x2a5, 0xa, 0x38, 0xc, 0x38, 0xe, 0x38, 0x2a8, 0xb, 0x38, 0x3, 0x38, 
       0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x7, 0x38, 
       0x2b0, 0xa, 0x38, 0xc, 0x38, 0xe, 0x38, 0x2b3, 0xb, 0x38, 0x7, 0x38, 
       0x2b5, 0xa, 0x38, 0xc, 0x38, 0xe, 0x38, 0x2b8, 0xb, 0x38, 0x3, 0x38, 
       0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x7, 0x38, 0x2be, 0xa, 0x38, 0xc, 
       0x38, 0xe, 0x38, 0x2c1, 0xb, 0x38, 0x5, 0x38, 0x2c3, 0xa, 0x38, 0x3, 
       0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 
       0x39, 0x3, 0x39, 0x3, 0x39, 0x7, 0x39, 0x2ce, 0xa, 0x39, 0xc, 0x39, 
       0xe, 0x39, 0x2d1, 0xb, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 
       0x39, 0x3, 0x39, 0x3, 0x39, 0x7, 0x39, 0x2d9, 0xa, 0x39, 0xc, 0x39, 
       0xe, 0x39, 0x2dc, 0xb, 0x39, 0x7, 0x39, 0x2de, 0xa, 0x39, 0xc, 0x39, 
       0xe, 0x39, 0x2e1, 0xb, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 
       0x39, 0x7, 0x39, 0x2e7, 0xa, 0x39, 0xc, 0x39, 0xe, 0x39, 0x2ea, 0xb, 
       0x39, 0x5, 0x39, 0x2ec, 0xa, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 
       0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 
       0x7, 0x3a, 0x2f7, 0xa, 0x3a, 0xc, 0x3a, 0xe, 0x3a, 0x2fa, 0xb, 0x3a, 
       0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 
       0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x7, 0x3b, 0x305, 0xa, 0x3b, 0xc, 
       0x3b, 0xe, 0x3b, 0x308, 0xb, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 
       0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x7, 0x3c, 0x310, 0xa, 0x3c, 0xc, 
       0x3c, 0xe, 0x3c, 0x313, 0xb, 0x3c, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 
       0x5, 0x3d, 0x318, 0xa, 0x3d, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3f, 0x3, 
       0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x7, 0x3f, 0x322, 
       0xa, 0x3f, 0xc, 0x3f, 0xe, 0x3f, 0x325, 0xb, 0x3f, 0x3, 0x3f, 0x3, 
       0x3f, 0x3, 0x3f, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 
       0x40, 0x3, 0x40, 0x7, 0x40, 0x330, 0xa, 0x40, 0xc, 0x40, 0xe, 0x40, 
       0x333, 0xb, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 
       0x40, 0x3, 0x40, 0x7, 0x40, 0x33b, 0xa, 0x40, 0xc, 0x40, 0xe, 0x40, 
       0x33e, 0xb, 0x40, 0x7, 0x40, 0x340, 0xa, 0x40, 0xc, 0x40, 0xe, 0x40, 
       0x343, 0xb, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x41, 0x3, 
       0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x7, 0x41, 0x34e, 
       0xa, 0x41, 0xc, 0x41, 0xe, 0x41, 0x351, 0xb, 0x41, 0x3, 0x41, 0x3, 
       0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x7, 0x41, 0x359, 
       0xa, 0x41, 0xc, 0x41, 0xe, 0x41, 0x35c, 0xb, 0x41, 0x7, 0x41, 0x35e, 
       0xa, 0x41, 0xc, 0x41, 0xe, 0x41, 0x361, 0xb, 0x41, 0x3, 0x41, 0x3, 
       0x41, 0x3, 0x41, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 
       0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 
       0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 
       0x43, 0x7, 0x43, 0x377, 0xa, 0x43, 0xc, 0x43, 0xe, 0x43, 0x37a, 0xb, 
       0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x5, 0x43, 0x37f, 0xa, 0x43, 
       0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x5, 0x44, 
       0x386, 0xa, 0x44, 0x5, 0x44, 0x388, 0xa, 0x44, 0x3, 0x45, 0x3, 0x45, 
       0x3, 0x45, 0x7, 0x45, 0x38d, 0xa, 0x45, 0xc, 0x45, 0xe, 0x45, 0x390, 
       0xb, 0x45, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x7, 0x46, 0x395, 0xa, 
       0x46, 0xc, 0x46, 0xe, 0x46, 0x398, 0xb, 0x46, 0x3, 0x47, 0x5, 0x47, 
       0x39b, 0xa, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x48, 0x3, 0x48, 0x5, 
       0x48, 0x3a1, 0xa, 0x48, 0x3, 0x49, 0x3, 0x49, 0x3, 0x49, 0x3, 0x49, 
       0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4b, 0x5, 0x4b, 0x3aa, 0xa, 0x4b, 0x3, 
       0x4b, 0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 0x7, 0x4b, 0x3b0, 0xa, 0x4b, 
       0xc, 0x4b, 0xe, 0x4b, 0x3b3, 0xb, 0x4b, 0x3, 0x4c, 0x3, 0x4c, 0x3, 
       0x4d, 0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 0x7, 0x4d, 0x3bb, 0xa, 0x4d, 
       0xc, 0x4d, 0xe, 0x4d, 0x3be, 0xb, 0x4d, 0x3, 0x4e, 0x3, 0x4e, 0x3, 
       0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x5, 0x4f, 0x3c5, 0xa, 0x4f, 0x3, 0x50, 
       0x3, 0x50, 0x3, 0x51, 0x3, 0x51, 0x3, 0x52, 0x3, 0x52, 0x3, 0x53, 
       0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 
       0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 
       0x3, 0x53, 0x3, 0x53, 0x7, 0x53, 0x3dc, 0xa, 0x53, 0xc, 0x53, 0xe, 
       0x53, 0x3df, 0xb, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 
       0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x5, 0x53, 0x3e8, 0xa, 0x53, 0x3, 
       0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x55, 0x5, 0x55, 0x3ee, 0xa, 0x55, 
       0x3, 0x55, 0x3, 0x55, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x7, 0x56, 
       0x3f5, 0xa, 0x56, 0xc, 0x56, 0xe, 0x56, 0x3f8, 0xb, 0x56, 0x3, 0x57, 
       0x3, 0x57, 0x3, 0x57, 0x7, 0x57, 0x3fd, 0xa, 0x57, 0xc, 0x57, 0xe, 
       0x57, 0x400, 0xb, 0x57, 0x3, 0x58, 0x5, 0x58, 0x403, 0xa, 0x58, 0x3, 
       0x58, 0x3, 0x58, 0x5, 0x58, 0x407, 0xa, 0x58, 0x3, 0x58, 0x3, 0x58, 
       0x3, 0x58, 0x5, 0x58, 0x40c, 0xa, 0x58, 0x7, 0x58, 0x40e, 0xa, 0x58, 
       0xc, 0x58, 0xe, 0x58, 0x411, 0xb, 0x58, 0x3, 0x59, 0x3, 0x59, 0x5, 
       0x59, 0x415, 0xa, 0x59, 0x3, 0x59, 0x3, 0x59, 0x3, 0x5a, 0x3, 0x5a, 
       0x3, 0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x5, 0x5a, 0x41e, 0xa, 0x5a, 0x3, 
       0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x5, 0x5a, 0x423, 0xa, 0x5a, 0x3, 0x5a, 
       0x5, 0x5a, 0x426, 0xa, 0x5a, 0x3, 0x5b, 0x3, 0x5b, 0x3, 0x5b, 0x5, 
       0x5b, 0x42b, 0xa, 0x5b, 0x3, 0x5b, 0x5, 0x5b, 0x42e, 0xa, 0x5b, 0x3, 
       0x5c, 0x3, 0x5c, 0x3, 0x5c, 0x7, 0x5c, 0x433, 0xa, 0x5c, 0xc, 0x5c, 
       0xe, 0x5c, 0x436, 0xb, 0x5c, 0x3, 0x5c, 0x3, 0x5c, 0x5, 0x5c, 0x43a, 
       0xa, 0x5c, 0x3, 0x5d, 0x3, 0x5d, 0x3, 0x5d, 0x7, 0x5d, 0x43f, 0xa, 
       0x5d, 0xc, 0x5d, 0xe, 0x5d, 0x442, 0xb, 0x5d, 0x3, 0x5e, 0x3, 0x5e, 
       0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5f, 0x3, 0x5f, 0x5, 0x5f, 0x44a, 0xa, 
       0x5f, 0x3, 0x60, 0x3, 0x60, 0x3, 0x60, 0x3, 0x60, 0x5, 0x60, 0x450, 
       0xa, 0x60, 0x3, 0x60, 0x3, 0x60, 0x3, 0x61, 0x5, 0x61, 0x455, 0xa, 
       0x61, 0x3, 0x61, 0x3, 0x61, 0x5, 0x61, 0x459, 0xa, 0x61, 0x7, 0x61, 
       0x45b, 0xa, 0x61, 0xc, 0x61, 0xe, 0x61, 0x45e, 0xb, 0x61, 0x3, 0x62, 
       0x3, 0x62, 0x3, 0x62, 0x7, 0x62, 0x463, 0xa, 0x62, 0xc, 0x62, 0xe, 
       0x62, 0x466, 0xb, 0x62, 0x3, 0x63, 0x3, 0x63, 0x3, 0x63, 0x3, 0x63, 
       0x7, 0x63, 0x46c, 0xa, 0x63, 0xc, 0x63, 0xe, 0x63, 0x46f, 0xb, 0x63, 
       0x3, 0x63, 0x3, 0x63, 0x3, 0x64, 0x3, 0x64, 0x5, 0x64, 0x475, 0xa, 
       0x64, 0x3, 0x65, 0x3, 0x65, 0x5, 0x65, 0x479, 0xa, 0x65, 0x3, 0x66, 
       0x3, 0x66, 0x3, 0x66, 0x7, 0x66, 0x47e, 0xa, 0x66, 0xc, 0x66, 0xe, 
       0x66, 0x481, 0xb, 0x66, 0x5, 0x66, 0x483, 0xa, 0x66, 0x3, 0x67, 0x3, 
       0x67, 0x3, 0x67, 0x3, 0x67, 0x2, 0x2, 0x68, 0x2, 0x4, 0x6, 0x8, 0xa, 
       0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 
       0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 
       0x3a, 0x3c, 0x3e, 0x40, 0x42, 0x44, 0x46, 0x48, 0x4a, 0x4c, 0x4e, 
       0x50, 0x52, 0x54, 0x56, 0x58, 0x5a, 0x5c, 0x5e, 0x60, 0x62, 0x64, 
       0x66, 0x68, 0x6a, 0x6c, 0x6e, 0x70, 0x72, 0x74, 0x76, 0x78, 0x7a, 
       0x7c, 0x7e, 0x80, 0x82, 0x84, 0x86, 0x88, 0x8a, 0x8c, 0x8e, 0x90, 
       0x92, 0x94, 0x96, 0x98, 0x9a, 0x9c, 0x9e, 0xa0, 0xa2, 0xa4, 0xa6, 
       0xa8, 0xaa, 0xac, 0xae, 0xb0, 0xb2, 0xb4, 0xb6, 0xb8, 0xba, 0xbc, 
       0xbe, 0xc0, 0xc2, 0xc4, 0xc6, 0xc8, 0xca, 0xcc, 0x2, 0xd, 0x3, 0x2, 
       0x1a, 0x1b, 0x3, 0x2, 0x21, 0x22, 0x3, 0x2, 0x23, 0x24, 0x3, 0x2, 
       0x2c, 0x2d, 0x3, 0x2, 0x2e, 0x30, 0x5, 0x2, 0x4b, 0x4e, 0x50, 0x50, 
       0x62, 0x62, 0x4, 0x2, 0x46, 0x47, 0x5b, 0x5c, 0x4, 0x2, 0x48, 0x49, 
       0x5d, 0x5e, 0x4, 0x2, 0x5a, 0x5a, 0x5f, 0x5f, 0x3, 0x2, 0xb, 0xc, 
       0x5, 0x2, 0x1a, 0x1a, 0x20, 0x20, 0x33, 0x33, 0x2, 0x4d0, 0x2, 0xcf, 
       0x3, 0x2, 0x2, 0x2, 0x4, 0xe6, 0x3, 0x2, 0x2, 0x2, 0x6, 0xec, 0x3, 
       0x2, 0x2, 0x2, 0x8, 0x105, 0x3, 0x2, 0x2, 0x2, 0xa, 0x10a, 0x3, 0x2, 
       0x2, 0x2, 0xc, 0x11c, 0x3, 0x2, 0x2, 0x2, 0xe, 0x11e, 0x3, 0x2, 0x2, 
       0x2, 0x10, 0x120, 0x3, 0x2, 0x2, 0x2, 0x12, 0x122, 0x3, 0x2, 0x2, 
       0x2, 0x14, 0x124, 0x3, 0x2, 0x2, 0x2, 0x16, 0x130, 0x3, 0x2, 0x2, 
       0x2, 0x18, 0x13c, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x140, 0x3, 0x2, 0x2, 
       0x2, 0x1c, 0x152, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x154, 0x3, 0x2, 0x2, 
       0x2, 0x20, 0x15c, 0x3, 0x2, 0x2, 0x2, 0x22, 0x15e, 0x3, 0x2, 0x2, 
       0x2, 0x24, 0x161, 0x3, 0x2, 0x2, 0x2, 0x26, 0x163, 0x3, 0x2, 0x2, 
       0x2, 0x28, 0x180, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x185, 0x3, 0x2, 0x2, 
       0x2, 0x2c, 0x193, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x1b2, 0x3, 0x2, 0x2, 
       0x2, 0x30, 0x1b4, 0x3, 0x2, 0x2, 0x2, 0x32, 0x1c9, 0x3, 0x2, 0x2, 
       0x2, 0x34, 0x1d1, 0x3, 0x2, 0x2, 0x2, 0x36, 0x1d9, 0x3, 0x2, 0x2, 
       0x2, 0x38, 0x1de, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x1e6, 0x3, 0x2, 0x2, 
       0x2, 0x3c, 0x1ee, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x1f6, 0x3, 0x2, 0x2, 
       0x2, 0x40, 0x1fc, 0x3, 0x2, 0x2, 0x2, 0x42, 0x1ff, 0x3, 0x2, 0x2, 
       0x2, 0x44, 0x201, 0x3, 0x2, 0x2, 0x2, 0x46, 0x209, 0x3, 0x2, 0x2, 
       0x2, 0x48, 0x212, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x214, 0x3, 0x2, 0x2, 
       0x2, 0x4c, 0x21a, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x220, 0x3, 0x2, 0x2, 
       0x2, 0x50, 0x22a, 0x3, 0x2, 0x2, 0x2, 0x52, 0x22d, 0x3, 0x2, 0x2, 
       0x2, 0x54, 0x23a, 0x3, 0x2, 0x2, 0x2, 0x56, 0x23c, 0x3, 0x2, 0x2, 
       0x2, 0x58, 0x242, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x24e, 0x3, 0x2, 0x2, 
       0x2, 0x5c, 0x256, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x25a, 0x3, 0x2, 0x2, 
       0x2, 0x60, 0x25d, 0x3, 0x2, 0x2, 0x2, 0x62, 0x261, 0x3, 0x2, 0x2, 
       0x2, 0x64, 0x26d, 0x3, 0x2, 0x2, 0x2, 0x66, 0x27d, 0x3, 0x2, 0x2, 
       0x2, 0x68, 0x281, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x294, 0x3, 0x2, 0x2, 
       0x2, 0x6c, 0x298, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x29e, 0x3, 0x2, 0x2, 
       0x2, 0x70, 0x2c7, 0x3, 0x2, 0x2, 0x2, 0x72, 0x2f0, 0x3, 0x2, 0x2, 
       0x2, 0x74, 0x2fe, 0x3, 0x2, 0x2, 0x2, 0x76, 0x30c, 0x3, 0x2, 0x2, 
       0x2, 0x78, 0x314, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x319, 0x3, 0x2, 0x2, 
       0x2, 0x7c, 0x31b, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x329, 0x3, 0x2, 0x2, 
       0x2, 0x80, 0x347, 0x3, 0x2, 0x2, 0x2, 0x82, 0x365, 0x3, 0x2, 0x2, 
       0x2, 0x84, 0x37e, 0x3, 0x2, 0x2, 0x2, 0x86, 0x380, 0x3, 0x2, 0x2, 
       0x2, 0x88, 0x389, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x391, 0x3, 0x2, 0x2, 
       0x2, 0x8c, 0x39a, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x3a0, 0x3, 0x2, 0x2, 
       0x2, 0x90, 0x3a2, 0x3, 0x2, 0x2, 0x2, 0x92, 0x3a6, 0x3, 0x2, 0x2, 
       0x2, 0x94, 0x3a9, 0x3, 0x2, 0x2, 0x2, 0x96, 0x3b4, 0x3, 0x2, 0x2, 
       0x2, 0x98, 0x3b6, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x3bf, 0x3, 0x2, 0x2, 
       0x2, 0x9c, 0x3c1, 0x3, 0x2, 0x2, 0x2, 0x9e, 0x3c6, 0x3, 0x2, 0x2, 
       0x2, 0xa0, 0x3c8, 0x3, 0x2, 0x2, 0x2, 0xa2, 0x3ca, 0x3, 0x2, 0x2, 
       0x2, 0xa4, 0x3e7, 0x3, 0x2, 0x2, 0x2, 0xa6, 0x3e9, 0x3, 0x2, 0x2, 
       0x2, 0xa8, 0x3ed, 0x3, 0x2, 0x2, 0x2, 0xaa, 0x3f1, 0x3, 0x2, 0x2, 
       0x2, 0xac, 0x3f9, 0x3, 0x2, 0x2, 0x2, 0xae, 0x402, 0x3, 0x2, 0x2, 
       0x2, 0xb0, 0x412, 0x3, 0x2, 0x2, 0x2, 0xb2, 0x425, 0x3, 0x2, 0x2, 
       0x2, 0xb4, 0x42d, 0x3, 0x2, 0x2, 0x2, 0xb6, 0x42f, 0x3, 0x2, 0x2, 
       0x2, 0xb8, 0x43b, 0x3, 0x2, 0x2, 0x2, 0xba, 0x443, 0x3, 0x2, 0x2, 
       0x2, 0xbc, 0x449, 0x3, 0x2, 0x2, 0x2, 0xbe, 0x44b, 0x3, 0x2, 0x2, 
       0x2, 0xc0, 0x454, 0x3, 0x2, 0x2, 0x2, 0xc2, 0x45f, 0x3, 0x2, 0x2, 
       0x2, 0xc4, 0x467, 0x3, 0x2, 0x2, 0x2, 0xc6, 0x474, 0x3, 0x2, 0x2, 
       0x2, 0xc8, 0x476, 0x3, 0x2, 0x2, 0x2, 0xca, 0x482, 0x3, 0x2, 0x2, 
       0x2, 0xcc, 0x484, 0x3, 0x2, 0x2, 0x2, 0xce, 0xd0, 0x7, 0x3, 0x2, 
       0x2, 0xcf, 0xce, 0x3, 0x2, 0x2, 0x2, 0xcf, 0xd0, 0x3, 0x2, 0x2, 0x2, 
       0xd0, 0xd6, 0x3, 0x2, 0x2, 0x2, 0xd1, 0xd3, 0x7, 0xd, 0x2, 0x2, 0xd2, 
       0xd4, 0x5, 0xac, 0x57, 0x2, 0xd3, 0xd2, 0x3, 0x2, 0x2, 0x2, 0xd3, 
       0xd4, 0x3, 0x2, 0x2, 0x2, 0xd4, 0xd5, 0x3, 0x2, 0x2, 0x2, 0xd5, 0xd7, 
       0x7, 0x51, 0x2, 0x2, 0xd6, 0xd1, 0x3, 0x2, 0x2, 0x2, 0xd6, 0xd7, 
       0x3, 0x2, 0x2, 0x2, 0xd7, 0xe0, 0x3, 0x2, 0x2, 0x2, 0xd8, 0xda, 0x7, 
       0xe, 0x2, 0x2, 0xd9, 0xd8, 0x3, 0x2, 0x2, 0x2, 0xd9, 0xda, 0x3, 0x2, 
       0x2, 0x2, 0xda, 0xdb, 0x3, 0x2, 0x2, 0x2, 0xdb, 0xdc, 0x5, 0x4, 0x3, 
       0x2, 0xdc, 0xdd, 0x7, 0x51, 0x2, 0x2, 0xdd, 0xdf, 0x3, 0x2, 0x2, 
       0x2, 0xde, 0xd9, 0x3, 0x2, 0x2, 0x2, 0xdf, 0xe2, 0x3, 0x2, 0x2, 0x2, 
       0xe0, 0xde, 0x3, 0x2, 0x2, 0x2, 0xe0, 0xe1, 0x3, 0x2, 0x2, 0x2, 0xe1, 
       0xe3, 0x3, 0x2, 0x2, 0x2, 0xe2, 0xe0, 0x3, 0x2, 0x2, 0x2, 0xe3, 0xe4, 
       0x7, 0x2, 0x2, 0x3, 0xe4, 0x3, 0x3, 0x2, 0x2, 0x2, 0xe5, 0xe7, 0x7, 
       0xf, 0x2, 0x2, 0xe6, 0xe5, 0x3, 0x2, 0x2, 0x2, 0xe6, 0xe7, 0x3, 0x2, 
       0x2, 0x2, 0xe7, 0xe8, 0x3, 0x2, 0x2, 0x2, 0xe8, 0xe9, 0x5, 0x6, 0x4, 
       0x2, 0xe9, 0xea, 0x5, 0xa, 0x6, 0x2, 0xea, 0x5, 0x3, 0x2, 0x2, 0x2, 
       0xeb, 0xed, 0x7, 0x10, 0x2, 0x2, 0xec, 0xeb, 0x3, 0x2, 0x2, 0x2, 
       0xec, 0xed, 0x3, 0x2, 0x2, 0x2, 0xed, 0x103, 0x3, 0x2, 0x2, 0x2, 
       0xee, 0x104, 0x7, 0x11, 0x2, 0x2, 0xef, 0x104, 0x7, 0x12, 0x2, 0x2, 
       0xf0, 0xf2, 0x7, 0x13, 0x2, 0x2, 0xf1, 0xf0, 0x3, 0x2, 0x2, 0x2, 
       0xf1, 0xf2, 0x3, 0x2, 0x2, 0x2, 0xf2, 0xf3, 0x3, 0x2, 0x2, 0x2, 0xf3, 
       0x104, 0x7, 0x14, 0x2, 0x2, 0xf4, 0x104, 0x7, 0x15, 0x2, 0x2, 0xf5, 
       0xf7, 0x7, 0x16, 0x2, 0x2, 0xf6, 0xf5, 0x3, 0x2, 0x2, 0x2, 0xf6, 
       0xf7, 0x3, 0x2, 0x2, 0x2, 0xf7, 0xf8, 0x3, 0x2, 0x2, 0x2, 0xf8, 0x104, 
       0x7, 0x17, 0x2, 0x2, 0xf9, 0x104, 0x7, 0x18, 0x2, 0x2, 0xfa, 0x104, 
       0x7, 0x19, 0x2, 0x2, 0xfb, 0xfd, 0x9, 0x2, 0x2, 0x2, 0xfc, 0xfb, 
       0x3, 0x2, 0x2, 0x2, 0xfc, 0xfd, 0x3, 0x2, 0x2, 0x2, 0xfd, 0xff, 0x3, 
       0x2, 0x2, 0x2, 0xfe, 0x100, 0x7, 0x13, 0x2, 0x2, 0xff, 0xfe, 0x3, 
       0x2, 0x2, 0x2, 0xff, 0x100, 0x3, 0x2, 0x2, 0x2, 0x100, 0x101, 0x3, 
       0x2, 0x2, 0x2, 0x101, 0x104, 0x7, 0x1c, 0x2, 0x2, 0x102, 0x104, 0x7, 
       0x13, 0x2, 0x2, 0x103, 0xee, 0x3, 0x2, 0x2, 0x2, 0x103, 0xef, 0x3, 
       0x2, 0x2, 0x2, 0x103, 0xf1, 0x3, 0x2, 0x2, 0x2, 0x103, 0xf4, 0x3, 
       0x2, 0x2, 0x2, 0x103, 0xf6, 0x3, 0x2, 0x2, 0x2, 0x103, 0xf9, 0x3, 
       0x2, 0x2, 0x2, 0x103, 0xfa, 0x3, 0x2, 0x2, 0x2, 0x103, 0xfc, 0x3, 
       0x2, 0x2, 0x2, 0x103, 0x102, 0x3, 0x2, 0x2, 0x2, 0x104, 0x7, 0x3, 
       0x2, 0x2, 0x2, 0x105, 0x106, 0x7, 0x8, 0x2, 0x2, 0x106, 0x9, 0x3, 
       0x2, 0x2, 0x2, 0x107, 0x10b, 0x5, 0xc, 0x7, 0x2, 0x108, 0x10b, 0x5, 
       0x18, 0xd, 0x2, 0x109, 0x10b, 0x5, 0x1a, 0xe, 0x2, 0x10a, 0x107, 
       0x3, 0x2, 0x2, 0x2, 0x10a, 0x108, 0x3, 0x2, 0x2, 0x2, 0x10a, 0x109, 
       0x3, 0x2, 0x2, 0x2, 0x10b, 0xb, 0x3, 0x2, 0x2, 0x2, 0x10c, 0x10d, 
       0x5, 0x8, 0x5, 0x2, 0x10d, 0x10e, 0x5, 0xca, 0x66, 0x2, 0x10e, 0x10f, 
       0x5, 0x26, 0x14, 0x2, 0x10f, 0x110, 0x7, 0x1d, 0x2, 0x2, 0x110, 0x111, 
       0x5, 0x8, 0x5, 0x2, 0x111, 0x11d, 0x3, 0x2, 0x2, 0x2, 0x112, 0x113, 
       0x7, 0x1e, 0x2, 0x2, 0x113, 0x115, 0x5, 0x8, 0x5, 0x2, 0x114, 0x116, 
       0x5, 0x4a, 0x26, 0x2, 0x115, 0x114, 0x3, 0x2, 0x2, 0x2, 0x115, 0x116, 
       0x3, 0x2, 0x2, 0x2, 0x116, 0x117, 0x3, 0x2, 0x2, 0x2, 0x117, 0x118, 
       0x5, 0xca, 0x66, 0x2, 0x118, 0x119, 0x5, 0x26, 0x14, 0x2, 0x119, 
       0x11a, 0x7, 0x1d, 0x2, 0x2, 0x11a, 0x11b, 0x5, 0x8, 0x5, 0x2, 0x11b, 
       0x11d, 0x3, 0x2, 0x2, 0x2, 0x11c, 0x10c, 0x3, 0x2, 0x2, 0x2, 0x11c, 
       0x112, 0x3, 0x2, 0x2, 0x2, 0x11d, 0xd, 0x3, 0x2, 0x2, 0x2, 0x11e, 
       0x11f, 0x5, 0x8, 0x5, 0x2, 0x11f, 0xf, 0x3, 0x2, 0x2, 0x2, 0x120, 
       0x121, 0x5, 0x8, 0x5, 0x2, 0x121, 0x11, 0x3, 0x2, 0x2, 0x2, 0x122, 
       0x123, 0x7, 0x1f, 0x2, 0x2, 0x123, 0x13, 0x3, 0x2, 0x2, 0x2, 0x124, 
       0x125, 0x5, 0xe, 0x8, 0x2, 0x125, 0x126, 0x7, 0x4f, 0x2, 0x2, 0x126, 
       0x127, 0x5, 0x12, 0xa, 0x2, 0x127, 0x12c, 0x7, 0x56, 0x2, 0x2, 0x128, 
       0x12a, 0x5, 0x1e, 0x10, 0x2, 0x129, 0x128, 0x3, 0x2, 0x2, 0x2, 0x129, 
       0x12a, 0x3, 0x2, 0x2, 0x2, 0x12a, 0x12d, 0x3, 0x2, 0x2, 0x2, 0x12b, 
       0x12d, 0x7, 0x60, 0x2, 0x2, 0x12c, 0x129, 0x3, 0x2, 0x2, 0x2, 0x12c, 
       0x12b, 0x3, 0x2, 0x2, 0x2, 0x12d, 0x12e, 0x3, 0x2, 0x2, 0x2, 0x12e, 
       0x12f, 0x7, 0x57, 0x2, 0x2, 0x12f, 0x15, 0x3, 0x2, 0x2, 0x2, 0x130, 
       0x131, 0x5, 0x10, 0x9, 0x2, 0x131, 0x132, 0x7, 0x4f, 0x2, 0x2, 0x132, 
       0x133, 0x5, 0x1c, 0xf, 0x2, 0x133, 0x135, 0x5, 0xa8, 0x55, 0x2, 0x134, 
       0x136, 0x5, 0xc4, 0x63, 0x2, 0x135, 0x134, 0x3, 0x2, 0x2, 0x2, 0x135, 
       0x136, 0x3, 0x2, 0x2, 0x2, 0x136, 0x138, 0x3, 0x2, 0x2, 0x2, 0x137, 
       0x139, 0x5, 0x4c, 0x27, 0x2, 0x138, 0x137, 0x3, 0x2, 0x2, 0x2, 0x138, 
       0x139, 0x3, 0x2, 0x2, 0x2, 0x139, 0x17, 0x3, 0x2, 0x2, 0x2, 0x13a, 
       0x13d, 0x5, 0x16, 0xc, 0x2, 0x13b, 0x13d, 0x5, 0x14, 0xb, 0x2, 0x13c, 
       0x13a, 0x3, 0x2, 0x2, 0x2, 0x13c, 0x13b, 0x3, 0x2, 0x2, 0x2, 0x13d, 
       0x13e, 0x3, 0x2, 0x2, 0x2, 0x13e, 0x13f, 0x5, 0xc8, 0x65, 0x2, 0x13f, 
       0x19, 0x3, 0x2, 0x2, 0x2, 0x140, 0x141, 0x5, 0x8, 0x5, 0x2, 0x141, 
       0x142, 0x7, 0x4f, 0x2, 0x2, 0x142, 0x143, 0x7, 0x20, 0x2, 0x2, 0x143, 
       0x144, 0x7, 0x56, 0x2, 0x2, 0x144, 0x145, 0x5, 0xa8, 0x55, 0x2, 0x145, 
       0x146, 0x7, 0x52, 0x2, 0x2, 0x146, 0x14b, 0x5, 0x8, 0x5, 0x2, 0x147, 
       0x148, 0x7, 0x52, 0x2, 0x2, 0x148, 0x14a, 0x5, 0x8, 0x5, 0x2, 0x149, 
       0x147, 0x3, 0x2, 0x2, 0x2, 0x14a, 0x14d, 0x3, 0x2, 0x2, 0x2, 0x14b, 
       0x149, 0x3, 0x2, 0x2, 0x2, 0x14b, 0x14c, 0x3, 0x2, 0x2, 0x2, 0x14c, 
       0x14e, 0x3, 0x2, 0x2, 0x2, 0x14d, 0x14b, 0x3, 0x2, 0x2, 0x2, 0x14e, 
       0x14f, 0x7, 0x57, 0x2, 0x2, 0x14f, 0x150, 0x5, 0xc8, 0x65, 0x2, 0x150, 
       0x1b, 0x3, 0x2, 0x2, 0x2, 0x151, 0x153, 0x9, 0x3, 0x2, 0x2, 0x152, 
       0x151, 0x3, 0x2, 0x2, 0x2, 0x152, 0x153, 0x3, 0x2, 0x2, 0x2, 0x153, 
       0x1d, 0x3, 0x2, 0x2, 0x2, 0x154, 0x159, 0x5, 0x22, 0x12, 0x2, 0x155, 
       0x156, 0x7, 0x52, 0x2, 0x2, 0x156, 0x158, 0x5, 0x22, 0x12, 0x2, 0x157, 
       0x155, 0x3, 0x2, 0x2, 0x2, 0x158, 0x15b, 0x3, 0x2, 0x2, 0x2, 0x159, 
       0x157, 0x3, 0x2, 0x2, 0x2, 0x159, 0x15a, 0x3, 0x2, 0x2, 0x2, 0x15a, 
       0x1f, 0x3, 0x2, 0x2, 0x2, 0x15b, 0x159, 0x3, 0x2, 0x2, 0x2, 0x15c, 
       0x15d, 0x5, 0x8, 0x5, 0x2, 0x15d, 0x21, 0x3, 0x2, 0x2, 0x2, 0x15e, 
       0x15f, 0x5, 0x20, 0x11, 0x2, 0x15f, 0x160, 0x5, 0xc8, 0x65, 0x2, 
       0x160, 0x23, 0x3, 0x2, 0x2, 0x2, 0x161, 0x162, 0x9, 0x4, 0x2, 0x2, 
       0x162, 0x25, 0x3, 0x2, 0x2, 0x2, 0x163, 0x16b, 0x5, 0x2c, 0x17, 0x2, 
       0x164, 0x165, 0x5, 0x24, 0x13, 0x2, 0x165, 0x166, 0x5, 0x2c, 0x17, 
       0x2, 0x166, 0x16a, 0x3, 0x2, 0x2, 0x2, 0x167, 0x16a, 0x5, 0x62, 0x32, 
       0x2, 0x168, 0x16a, 0x5, 0x64, 0x33, 0x2, 0x169, 0x164, 0x3, 0x2, 
       0x2, 0x2, 0x169, 0x167, 0x3, 0x2, 0x2, 0x2, 0x169, 0x168, 0x3, 0x2, 
       0x2, 0x2, 0x16a, 0x16d, 0x3, 0x2, 0x2, 0x2, 0x16b, 0x169, 0x3, 0x2, 
       0x2, 0x2, 0x16b, 0x16c, 0x3, 0x2, 0x2, 0x2, 0x16c, 0x179, 0x3, 0x2, 
       0x2, 0x2, 0x16d, 0x16b, 0x3, 0x2, 0x2, 0x2, 0x16e, 0x170, 0x7, 0x25, 
       0x2, 0x2, 0x16f, 0x171, 0x5, 0x28, 0x15, 0x2, 0x170, 0x16f, 0x3, 
       0x2, 0x2, 0x2, 0x170, 0x171, 0x3, 0x2, 0x2, 0x2, 0x171, 0x173, 0x3, 
       0x2, 0x2, 0x2, 0x172, 0x174, 0x5, 0x2a, 0x16, 0x2, 0x173, 0x172, 
       0x3, 0x2, 0x2, 0x2, 0x173, 0x174, 0x3, 0x2, 0x2, 0x2, 0x174, 0x176, 
       0x3, 0x2, 0x2, 0x2, 0x175, 0x177, 0x5, 0xcc, 0x67, 0x2, 0x176, 0x175, 
       0x3, 0x2, 0x2, 0x2, 0x176, 0x177, 0x3, 0x2, 0x2, 0x2, 0x177, 0x178, 
       0x3, 0x2, 0x2, 0x2, 0x178, 0x17a, 0x7, 0x51, 0x2, 0x2, 0x179, 0x16e, 
       0x3, 0x2, 0x2, 0x2, 0x179, 0x17a, 0x3, 0x2, 0x2, 0x2, 0x17a, 0x17e, 
       0x3, 0x2, 0x2, 0x2, 0x17b, 0x17c, 0x5, 0xcc, 0x67, 0x2, 0x17c, 0x17d, 
       0x7, 0x51, 0x2, 0x2, 0x17d, 0x17f, 0x3, 0x2, 0x2, 0x2, 0x17e, 0x17b, 
       0x3, 0x2, 0x2, 0x2, 0x17e, 0x17f, 0x3, 0x2, 0x2, 0x2, 0x17f, 0x27, 
       0x3, 0x2, 0x2, 0x2, 0x180, 0x181, 0x7, 0x9, 0x2, 0x2, 0x181, 0x29, 
       0x3, 0x2, 0x2, 0x2, 0x182, 0x183, 0x5, 0xae, 0x58, 0x2, 0x183, 0x184, 
       0x7, 0x4f, 0x2, 0x2, 0x184, 0x186, 0x3, 0x2, 0x2, 0x2, 0x185, 0x182, 
       0x3, 0x2, 0x2, 0x2, 0x185, 0x186, 0x3, 0x2, 0x2, 0x2, 0x186, 0x187, 
       0x3, 0x2, 0x2, 0x2, 0x187, 0x188, 0x5, 0x8, 0x5, 0x2, 0x188, 0x18a, 
       0x7, 0x56, 0x2, 0x2, 0x189, 0x18b, 0x5, 0xc2, 0x62, 0x2, 0x18a, 0x189, 
       0x3, 0x2, 0x2, 0x2, 0x18a, 0x18b, 0x3, 0x2, 0x2, 0x2, 0x18b, 0x18c, 
       0x3, 0x2, 0x2, 0x2, 0x18c, 0x18d, 0x7, 0x57, 0x2, 0x2, 0x18d, 0x2b, 
       0x3, 0x2, 0x2, 0x2, 0x18e, 0x18f, 0x5, 0x2e, 0x18, 0x2, 0x18f, 0x190, 
       0x7, 0x51, 0x2, 0x2, 0x190, 0x192, 0x3, 0x2, 0x2, 0x2, 0x191, 0x18e, 
       0x3, 0x2, 0x2, 0x2, 0x192, 0x195, 0x3, 0x2, 0x2, 0x2, 0x193, 0x191, 
       0x3, 0x2, 0x2, 0x2, 0x193, 0x194, 0x3, 0x2, 0x2, 0x2, 0x194, 0x2d, 
       0x3, 0x2, 0x2, 0x2, 0x195, 0x193, 0x3, 0x2, 0x2, 0x2, 0x196, 0x1b3, 
       0x5, 0x30, 0x19, 0x2, 0x197, 0x1b3, 0x5, 0x34, 0x1b, 0x2, 0x198, 
       0x19a, 0x7, 0x26, 0x2, 0x2, 0x199, 0x198, 0x3, 0x2, 0x2, 0x2, 0x199, 
       0x19a, 0x3, 0x2, 0x2, 0x2, 0x19a, 0x19c, 0x3, 0x2, 0x2, 0x2, 0x19b, 
       0x19d, 0x7, 0xe, 0x2, 0x2, 0x19c, 0x19b, 0x3, 0x2, 0x2, 0x2, 0x19c, 
       0x19d, 0x3, 0x2, 0x2, 0x2, 0x19d, 0x19f, 0x3, 0x2, 0x2, 0x2, 0x19e, 
       0x1a0, 0x7, 0x27, 0x2, 0x2, 0x19f, 0x19e, 0x3, 0x2, 0x2, 0x2, 0x19f, 
       0x1a0, 0x3, 0x2, 0x2, 0x2, 0x1a0, 0x1a2, 0x3, 0x2, 0x2, 0x2, 0x1a1, 
       0x1a3, 0x7, 0x28, 0x2, 0x2, 0x1a2, 0x1a1, 0x3, 0x2, 0x2, 0x2, 0x1a2, 
       0x1a3, 0x3, 0x2, 0x2, 0x2, 0x1a3, 0x1b0, 0x3, 0x2, 0x2, 0x2, 0x1a4, 
       0x1b1, 0x5, 0x4, 0x3, 0x2, 0x1a5, 0x1b1, 0x5, 0x38, 0x1d, 0x2, 0x1a6, 
       0x1a9, 0x7, 0x29, 0x2, 0x2, 0x1a7, 0x1aa, 0x5, 0x4, 0x3, 0x2, 0x1a8, 
       0x1aa, 0x5, 0x38, 0x1d, 0x2, 0x1a9, 0x1a7, 0x3, 0x2, 0x2, 0x2, 0x1a9, 
       0x1a8, 0x3, 0x2, 0x2, 0x2, 0x1aa, 0x1ae, 0x3, 0x2, 0x2, 0x2, 0x1ab, 
       0x1ac, 0x5, 0x36, 0x1c, 0x2, 0x1ac, 0x1ad, 0x5, 0xc8, 0x65, 0x2, 
       0x1ad, 0x1af, 0x3, 0x2, 0x2, 0x2, 0x1ae, 0x1ab, 0x3, 0x2, 0x2, 0x2, 
       0x1ae, 0x1af, 0x3, 0x2, 0x2, 0x2, 0x1af, 0x1b1, 0x3, 0x2, 0x2, 0x2, 
       0x1b0, 0x1a4, 0x3, 0x2, 0x2, 0x2, 0x1b0, 0x1a5, 0x3, 0x2, 0x2, 0x2, 
       0x1b0, 0x1a6, 0x3, 0x2, 0x2, 0x2, 0x1b1, 0x1b3, 0x3, 0x2, 0x2, 0x2, 
       0x1b2, 0x196, 0x3, 0x2, 0x2, 0x2, 0x1b2, 0x197, 0x3, 0x2, 0x2, 0x2, 
       0x1b2, 0x199, 0x3, 0x2, 0x2, 0x2, 0x1b3, 0x2f, 0x3, 0x2, 0x2, 0x2, 
       0x1b4, 0x1c5, 0x7, 0x2a, 0x2, 0x2, 0x1b5, 0x1b6, 0x5, 0x8, 0x5, 0x2, 
       0x1b6, 0x1b7, 0x7, 0x4f, 0x2, 0x2, 0x1b7, 0x1b8, 0x5, 0xac, 0x57, 
       0x2, 0x1b8, 0x1c6, 0x3, 0x2, 0x2, 0x2, 0x1b9, 0x1c3, 0x5, 0xac, 0x57, 
       0x2, 0x1ba, 0x1c0, 0x7, 0x53, 0x2, 0x2, 0x1bb, 0x1c1, 0x7, 0x48, 
       0x2, 0x2, 0x1bc, 0x1bd, 0x7, 0x58, 0x2, 0x2, 0x1bd, 0x1be, 0x5, 0x32, 
       0x1a, 0x2, 0x1be, 0x1bf, 0x7, 0x59, 0x2, 0x2, 0x1bf, 0x1c1, 0x3, 
       0x2, 0x2, 0x2, 0x1c0, 0x1bb, 0x3, 0x2, 0x2, 0x2, 0x1c0, 0x1bc, 0x3, 
       0x2, 0x2, 0x2, 0x1c1, 0x1c4, 0x3, 0x2, 0x2, 0x2, 0x1c2, 0x1c4, 0x7, 
       0x5d, 0x2, 0x2, 0x1c3, 0x1ba, 0x3, 0x2, 0x2, 0x2, 0x1c3, 0x1c2, 0x3, 
       0x2, 0x2, 0x2, 0x1c3, 0x1c4, 0x3, 0x2, 0x2, 0x2, 0x1c4, 0x1c6, 0x3, 
       0x2, 0x2, 0x2, 0x1c5, 0x1b5, 0x3, 0x2, 0x2, 0x2, 0x1c5, 0x1b9, 0x3, 
       0x2, 0x2, 0x2, 0x1c6, 0x1c7, 0x3, 0x2, 0x2, 0x2, 0x1c7, 0x1c8, 0x5, 
       0xc8, 0x65, 0x2, 0x1c8, 0x31, 0x3, 0x2, 0x2, 0x2, 0x1c9, 0x1ce, 0x5, 
       0x8, 0x5, 0x2, 0x1ca, 0x1cb, 0x7, 0x52, 0x2, 0x2, 0x1cb, 0x1cd, 0x5, 
       0x8, 0x5, 0x2, 0x1cc, 0x1ca, 0x3, 0x2, 0x2, 0x2, 0x1cd, 0x1d0, 0x3, 
       0x2, 0x2, 0x2, 0x1ce, 0x1cc, 0x3, 0x2, 0x2, 0x2, 0x1ce, 0x1cf, 0x3, 
       0x2, 0x2, 0x2, 0x1cf, 0x33, 0x3, 0x2, 0x2, 0x2, 0x1d0, 0x1ce, 0x3, 
       0x2, 0x2, 0x2, 0x1d1, 0x1d2, 0x7, 0x1e, 0x2, 0x2, 0x1d2, 0x1d4, 0x5, 
       0xa8, 0x55, 0x2, 0x1d3, 0x1d5, 0x5, 0x4a, 0x26, 0x2, 0x1d4, 0x1d3, 
       0x3, 0x2, 0x2, 0x2, 0x1d4, 0x1d5, 0x3, 0x2, 0x2, 0x2, 0x1d5, 0x1d7, 
       0x3, 0x2, 0x2, 0x2, 0x1d6, 0x1d8, 0x5, 0xcc, 0x67, 0x2, 0x1d7, 0x1d6, 
       0x3, 0x2, 0x2, 0x2, 0x1d7, 0x1d8, 0x3, 0x2, 0x2, 0x2, 0x1d8, 0x35, 
       0x3, 0x2, 0x2, 0x2, 0x1d9, 0x1da, 0x7, 0x2b, 0x2, 0x2, 0x1da, 0x1dc, 
       0x5, 0xa8, 0x55, 0x2, 0x1db, 0x1dd, 0x5, 0x4a, 0x26, 0x2, 0x1dc, 
       0x1db, 0x3, 0x2, 0x2, 0x2, 0x1dc, 0x1dd, 0x3, 0x2, 0x2, 0x2, 0x1dd, 
       0x37, 0x3, 0x2, 0x2, 0x2, 0x1de, 0x1df, 0x5, 0x3a, 0x1e, 0x2, 0x1df, 
       0x1e1, 0x5, 0xa8, 0x55, 0x2, 0x1e0, 0x1e2, 0x5, 0xc4, 0x63, 0x2, 
       0x1e1, 0x1e0, 0x3, 0x2, 0x2, 0x2, 0x1e1, 0x1e2, 0x3, 0x2, 0x2, 0x2, 
       0x1e2, 0x1e3, 0x3, 0x2, 0x2, 0x2, 0x1e3, 0x1e4, 0x5, 0x3c, 0x1f, 
       0x2, 0x1e4, 0x39, 0x3, 0x2, 0x2, 0x2, 0x1e5, 0x1e7, 0x9, 0x5, 0x2, 
       0x2, 0x1e6, 0x1e5, 0x3, 0x2, 0x2, 0x2, 0x1e6, 0x1e7, 0x3, 0x2, 0x2, 
       0x2, 0x1e7, 0x1e9, 0x3, 0x2, 0x2, 0x2, 0x1e8, 0x1ea, 0x9, 0x6, 0x2, 
       0x2, 0x1e9, 0x1e8, 0x3, 0x2, 0x2, 0x2, 0x1e9, 0x1ea, 0x3, 0x2, 0x2, 
       0x2, 0x1ea, 0x1ec, 0x3, 0x2, 0x2, 0x2, 0x1eb, 0x1ed, 0x9, 0x3, 0x2, 
       0x2, 0x1ec, 0x1eb, 0x3, 0x2, 0x2, 0x2, 0x1ec, 0x1ed, 0x3, 0x2, 0x2, 
       0x2, 0x1ed, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x1ee, 0x1f3, 0x5, 0x3e, 0x20, 
       0x2, 0x1ef, 0x1f0, 0x7, 0x52, 0x2, 0x2, 0x1f0, 0x1f2, 0x5, 0x3e, 
       0x20, 0x2, 0x1f1, 0x1ef, 0x3, 0x2, 0x2, 0x2, 0x1f2, 0x1f5, 0x3, 0x2, 
       0x2, 0x2, 0x1f3, 0x1f1, 0x3, 0x2, 0x2, 0x2, 0x1f3, 0x1f4, 0x3, 0x2, 
       0x2, 0x2, 0x1f4, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x1f5, 0x1f3, 0x3, 0x2, 
       0x2, 0x2, 0x1f6, 0x1f8, 0x5, 0x44, 0x23, 0x2, 0x1f7, 0x1f9, 0x5, 
       0x40, 0x21, 0x2, 0x1f8, 0x1f7, 0x3, 0x2, 0x2, 0x2, 0x1f8, 0x1f9, 
       0x3, 0x2, 0x2, 0x2, 0x1f9, 0x1fa, 0x3, 0x2, 0x2, 0x2, 0x1fa, 0x1fb, 
       0x5, 0xc8, 0x65, 0x2, 0x1fb, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x1fc, 0x1fd, 
       0x7, 0x31, 0x2, 0x2, 0x1fd, 0x1fe, 0x5, 0x84, 0x43, 0x2, 0x1fe, 0x41, 
       0x3, 0x2, 0x2, 0x2, 0x1ff, 0x200, 0x5, 0x8, 0x5, 0x2, 0x200, 0x43, 
       0x3, 0x2, 0x2, 0x2, 0x201, 0x203, 0x5, 0x42, 0x22, 0x2, 0x202, 0x204, 
       0x5, 0xc4, 0x63, 0x2, 0x203, 0x202, 0x3, 0x2, 0x2, 0x2, 0x203, 0x204, 
       0x3, 0x2, 0x2, 0x2, 0x204, 0x207, 0x3, 0x2, 0x2, 0x2, 0x205, 0x208, 
       0x5, 0x48, 0x25, 0x2, 0x206, 0x208, 0x5, 0x46, 0x24, 0x2, 0x207, 
       0x205, 0x3, 0x2, 0x2, 0x2, 0x207, 0x206, 0x3, 0x2, 0x2, 0x2, 0x207, 
       0x208, 0x3, 0x2, 0x2, 0x2, 0x208, 0x45, 0x3, 0x2, 0x2, 0x2, 0x209, 
       0x20c, 0x5, 0x4c, 0x27, 0x2, 0x20a, 0x20b, 0x7, 0x4f, 0x2, 0x2, 0x20b, 
       0x20d, 0x5, 0x84, 0x43, 0x2, 0x20c, 0x20a, 0x3, 0x2, 0x2, 0x2, 0x20c, 
       0x20d, 0x3, 0x2, 0x2, 0x2, 0x20d, 0x47, 0x3, 0x2, 0x2, 0x2, 0x20e, 
       0x20f, 0x7, 0x4f, 0x2, 0x2, 0x20f, 0x213, 0x5, 0x84, 0x43, 0x2, 0x210, 
       0x211, 0x7, 0x61, 0x2, 0x2, 0x211, 0x213, 0x5, 0x84, 0x43, 0x2, 0x212, 
       0x20e, 0x3, 0x2, 0x2, 0x2, 0x212, 0x210, 0x3, 0x2, 0x2, 0x2, 0x213, 
       0x49, 0x3, 0x2, 0x2, 0x2, 0x214, 0x216, 0x7, 0x56, 0x2, 0x2, 0x215, 
       0x217, 0x5, 0x4e, 0x28, 0x2, 0x216, 0x215, 0x3, 0x2, 0x2, 0x2, 0x216, 
       0x217, 0x3, 0x2, 0x2, 0x2, 0x217, 0x218, 0x3, 0x2, 0x2, 0x2, 0x218, 
       0x219, 0x7, 0x57, 0x2, 0x2, 0x219, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x21a, 
       0x21c, 0x7, 0x56, 0x2, 0x2, 0x21b, 0x21d, 0x5, 0x4e, 0x28, 0x2, 0x21c, 
       0x21b, 0x3, 0x2, 0x2, 0x2, 0x21c, 0x21d, 0x3, 0x2, 0x2, 0x2, 0x21d, 
       0x21e, 0x3, 0x2, 0x2, 0x2, 0x21e, 0x21f, 0x7, 0x57, 0x2, 0x2, 0x21f, 
       0x4d, 0x3, 0x2, 0x2, 0x2, 0x220, 0x225, 0x5, 0x50, 0x29, 0x2, 0x221, 
       0x222, 0x7, 0x52, 0x2, 0x2, 0x222, 0x224, 0x5, 0x50, 0x29, 0x2, 0x223, 
       0x221, 0x3, 0x2, 0x2, 0x2, 0x224, 0x227, 0x3, 0x2, 0x2, 0x2, 0x225, 
       0x223, 0x3, 0x2, 0x2, 0x2, 0x225, 0x226, 0x3, 0x2, 0x2, 0x2, 0x226, 
       0x4f, 0x3, 0x2, 0x2, 0x2, 0x227, 0x225, 0x3, 0x2, 0x2, 0x2, 0x228, 
       0x22b, 0x5, 0x52, 0x2a, 0x2, 0x229, 0x22b, 0x5, 0x58, 0x2d, 0x2, 
       0x22a, 0x228, 0x3, 0x2, 0x2, 0x2, 0x22a, 0x229, 0x3, 0x2, 0x2, 0x2, 
       0x22b, 0x51, 0x3, 0x2, 0x2, 0x2, 0x22c, 0x22e, 0x7, 0x32, 0x2, 0x2, 
       0x22d, 0x22c, 0x3, 0x2, 0x2, 0x2, 0x22d, 0x22e, 0x3, 0x2, 0x2, 0x2, 
       0x22e, 0x230, 0x3, 0x2, 0x2, 0x2, 0x22f, 0x231, 0x7, 0xe, 0x2, 0x2, 
       0x230, 0x22f, 0x3, 0x2, 0x2, 0x2, 0x230, 0x231, 0x3, 0x2, 0x2, 0x2, 
       0x231, 0x234, 0x3, 0x2, 0x2, 0x2, 0x232, 0x235, 0x5, 0x56, 0x2c, 
       0x2, 0x233, 0x235, 0x5, 0x5a, 0x2e, 0x2, 0x234, 0x232, 0x3, 0x2, 
       0x2, 0x2, 0x234, 0x233, 0x3, 0x2, 0x2, 0x2, 0x235, 0x53, 0x3, 0x2, 
       0x2, 0x2, 0x236, 0x237, 0x7, 0x4f, 0x2, 0x2, 0x237, 0x23b, 0x5, 0x84, 
       0x43, 0x2, 0x238, 0x239, 0x7, 0x61, 0x2, 0x2, 0x239, 0x23b, 0x5, 
       0x84, 0x43, 0x2, 0x23a, 0x236, 0x3, 0x2, 0x2, 0x2, 0x23a, 0x238, 
       0x3, 0x2, 0x2, 0x2, 0x23b, 0x55, 0x3, 0x2, 0x2, 0x2, 0x23c, 0x23e, 
       0x5, 0xac, 0x57, 0x2, 0x23d, 0x23f, 0x5, 0x54, 0x2b, 0x2, 0x23e, 
       0x23d, 0x3, 0x2, 0x2, 0x2, 0x23e, 0x23f, 0x3, 0x2, 0x2, 0x2, 0x23f, 
       0x240, 0x3, 0x2, 0x2, 0x2, 0x240, 0x241, 0x5, 0xca, 0x66, 0x2, 0x241, 
       0x57, 0x3, 0x2, 0x2, 0x2, 0x242, 0x244, 0x7, 0x26, 0x2, 0x2, 0x243, 
       0x245, 0x7, 0x32, 0x2, 0x2, 0x244, 0x243, 0x3, 0x2, 0x2, 0x2, 0x244, 
       0x245, 0x3, 0x2, 0x2, 0x2, 0x245, 0x247, 0x3, 0x2, 0x2, 0x2, 0x246, 
       0x248, 0x7, 0xe, 0x2, 0x2, 0x247, 0x246, 0x3, 0x2, 0x2, 0x2, 0x247, 
       0x248, 0x3, 0x2, 0x2, 0x2, 0x248, 0x24c, 0x3, 0x2, 0x2, 0x2, 0x249, 
       0x24d, 0x5, 0x60, 0x31, 0x2, 0x24a, 0x24d, 0x5, 0x5c, 0x2f, 0x2, 
       0x24b, 0x24d, 0x5, 0x5a, 0x2e, 0x2, 0x24c, 0x249, 0x3, 0x2, 0x2, 
       0x2, 0x24c, 0x24a, 0x3, 0x2, 0x2, 0x2, 0x24c, 0x24b, 0x3, 0x2, 0x2, 
       0x2, 0x24d, 0x59, 0x3, 0x2, 0x2, 0x2, 0x24e, 0x251, 0x7, 0x29, 0x2, 
       0x2, 0x24f, 0x252, 0x5, 0x60, 0x31, 0x2, 0x250, 0x252, 0x5, 0x5c, 
       0x2f, 0x2, 0x251, 0x24f, 0x3, 0x2, 0x2, 0x2, 0x251, 0x250, 0x3, 0x2, 
       0x2, 0x2, 0x252, 0x254, 0x3, 0x2, 0x2, 0x2, 0x253, 0x255, 0x5, 0x36, 
       0x1c, 0x2, 0x254, 0x253, 0x3, 0x2, 0x2, 0x2, 0x254, 0x255, 0x3, 0x2, 
       0x2, 0x2, 0x255, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x256, 0x257, 0x5, 0x3a, 
       0x1e, 0x2, 0x257, 0x258, 0x5, 0xa8, 0x55, 0x2, 0x258, 0x259, 0x5, 
       0x5e, 0x30, 0x2, 0x259, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x25a, 0x25b, 0x5, 
       0x44, 0x23, 0x2, 0x25b, 0x25c, 0x5, 0xc8, 0x65, 0x2, 0x25c, 0x5f, 
       0x3, 0x2, 0x2, 0x2, 0x25d, 0x25e, 0x5, 0x6, 0x4, 0x2, 0x25e, 0x25f, 
       0x5, 0x18, 0xd, 0x2, 0x25f, 0x61, 0x3, 0x2, 0x2, 0x2, 0x260, 0x262, 
       0x7, 0x33, 0x2, 0x2, 0x261, 0x260, 0x3, 0x2, 0x2, 0x2, 0x261, 0x262, 
       0x3, 0x2, 0x2, 0x2, 0x262, 0x263, 0x3, 0x2, 0x2, 0x2, 0x263, 0x269, 
       0x7, 0x42, 0x2, 0x2, 0x264, 0x265, 0x5, 0x66, 0x34, 0x2, 0x265, 0x266, 
       0x7, 0x51, 0x2, 0x2, 0x266, 0x268, 0x3, 0x2, 0x2, 0x2, 0x267, 0x264, 
       0x3, 0x2, 0x2, 0x2, 0x268, 0x26b, 0x3, 0x2, 0x2, 0x2, 0x269, 0x267, 
       0x3, 0x2, 0x2, 0x2, 0x269, 0x26a, 0x3, 0x2, 0x2, 0x2, 0x26a, 0x63, 
       0x3, 0x2, 0x2, 0x2, 0x26b, 0x269, 0x3, 0x2, 0x2, 0x2, 0x26c, 0x26e, 
       0x7, 0x33, 0x2, 0x2, 0x26d, 0x26c, 0x3, 0x2, 0x2, 0x2, 0x26d, 0x26e, 
       0x3, 0x2, 0x2, 0x2, 0x26e, 0x26f, 0x3, 0x2, 0x2, 0x2, 0x26f, 0x275, 
       0x7, 0x34, 0x2, 0x2, 0x270, 0x271, 0x5, 0x6a, 0x36, 0x2, 0x271, 0x272, 
       0x7, 0x51, 0x2, 0x2, 0x272, 0x274, 0x3, 0x2, 0x2, 0x2, 0x273, 0x270, 
       0x3, 0x2, 0x2, 0x2, 0x274, 0x277, 0x3, 0x2, 0x2, 0x2, 0x275, 0x273, 
       0x3, 0x2, 0x2, 0x2, 0x275, 0x276, 0x3, 0x2, 0x2, 0x2, 0x276, 0x65, 
       0x3, 0x2, 0x2, 0x2, 0x277, 0x275, 0x3, 0x2, 0x2, 0x2, 0x278, 0x27e, 
       0x5, 0x68, 0x35, 0x2, 0x279, 0x27e, 0x5, 0x6e, 0x38, 0x2, 0x27a, 
       0x27e, 0x5, 0x72, 0x3a, 0x2, 0x27b, 0x27e, 0x5, 0x82, 0x42, 0x2, 
       0x27c, 0x27e, 0x5, 0x7e, 0x40, 0x2, 0x27d, 0x278, 0x3, 0x2, 0x2, 
       0x2, 0x27d, 0x279, 0x3, 0x2, 0x2, 0x2, 0x27d, 0x27a, 0x3, 0x2, 0x2, 
       0x2, 0x27d, 0x27b, 0x3, 0x2, 0x2, 0x2, 0x27d, 0x27c, 0x3, 0x2, 0x2, 
       0x2, 0x27e, 0x27f, 0x3, 0x2, 0x2, 0x2, 0x27f, 0x280, 0x5, 0xc8, 0x65, 
       0x2, 0x280, 0x67, 0x3, 0x2, 0x2, 0x2, 0x281, 0x284, 0x5, 0x86, 0x44, 
       0x2, 0x282, 0x283, 0x7, 0x4f, 0x2, 0x2, 0x283, 0x285, 0x5, 0x84, 
       0x43, 0x2, 0x284, 0x282, 0x3, 0x2, 0x2, 0x2, 0x284, 0x285, 0x3, 0x2, 
       0x2, 0x2, 0x285, 0x69, 0x3, 0x2, 0x2, 0x2, 0x286, 0x295, 0x5, 0x6c, 
       0x37, 0x2, 0x287, 0x288, 0x7, 0x56, 0x2, 0x2, 0x288, 0x289, 0x5, 
       0xc0, 0x61, 0x2, 0x289, 0x28a, 0x7, 0x57, 0x2, 0x2, 0x28a, 0x28b, 
       0x7, 0x61, 0x2, 0x2, 0x28b, 0x28c, 0x5, 0xae, 0x58, 0x2, 0x28c, 0x28d, 
       0x5, 0xb0, 0x59, 0x2, 0x28d, 0x295, 0x3, 0x2, 0x2, 0x2, 0x28e, 0x295, 
       0x7, 0x35, 0x2, 0x2, 0x28f, 0x295, 0x7, 0x36, 0x2, 0x2, 0x290, 0x295, 
       0x5, 0x70, 0x39, 0x2, 0x291, 0x295, 0x5, 0x74, 0x3b, 0x2, 0x292, 
       0x295, 0x5, 0x7c, 0x3f, 0x2, 0x293, 0x295, 0x5, 0x80, 0x41, 0x2, 
       0x294, 0x286, 0x3, 0x2, 0x2, 0x2, 0x294, 0x287, 0x3, 0x2, 0x2, 0x2, 
       0x294, 0x28e, 0x3, 0x2, 0x2, 0x2, 0x294, 0x28f, 0x3, 0x2, 0x2, 0x2, 
       0x294, 0x290, 0x3, 0x2, 0x2, 0x2, 0x294, 0x291, 0x3, 0x2, 0x2, 0x2, 
       0x294, 0x292, 0x3, 0x2, 0x2, 0x2, 0x294, 0x293, 0x3, 0x2, 0x2, 0x2, 
       0x295, 0x296, 0x3, 0x2, 0x2, 0x2, 0x296, 0x297, 0x5, 0xc8, 0x65, 
       0x2, 0x297, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x298, 0x29c, 0x5, 0xae, 0x58, 
       0x2, 0x299, 0x29a, 0x7, 0x61, 0x2, 0x2, 0x29a, 0x29d, 0x5, 0x84, 
       0x43, 0x2, 0x29b, 0x29d, 0x5, 0xb0, 0x59, 0x2, 0x29c, 0x299, 0x3, 
       0x2, 0x2, 0x2, 0x29c, 0x29b, 0x3, 0x2, 0x2, 0x2, 0x29d, 0x6d, 0x3, 
       0x2, 0x2, 0x2, 0x29e, 0x29f, 0x7, 0x31, 0x2, 0x2, 0x29f, 0x2a0, 0x5, 
       0x84, 0x43, 0x2, 0x2a0, 0x2a6, 0x7, 0x37, 0x2, 0x2, 0x2a1, 0x2a2, 
       0x5, 0x66, 0x34, 0x2, 0x2a2, 0x2a3, 0x7, 0x51, 0x2, 0x2, 0x2a3, 0x2a5, 
       0x3, 0x2, 0x2, 0x2, 0x2a4, 0x2a1, 0x3, 0x2, 0x2, 0x2, 0x2a5, 0x2a8, 
       0x3, 0x2, 0x2, 0x2, 0x2a6, 0x2a4, 0x3, 0x2, 0x2, 0x2, 0x2a6, 0x2a7, 
       0x3, 0x2, 0x2, 0x2, 0x2a7, 0x2b6, 0x3, 0x2, 0x2, 0x2, 0x2a8, 0x2a6, 
       0x3, 0x2, 0x2, 0x2, 0x2a9, 0x2aa, 0x7, 0x38, 0x2, 0x2, 0x2aa, 0x2ab, 
       0x5, 0x84, 0x43, 0x2, 0x2ab, 0x2b1, 0x7, 0x37, 0x2, 0x2, 0x2ac, 0x2ad, 
       0x5, 0x66, 0x34, 0x2, 0x2ad, 0x2ae, 0x7, 0x51, 0x2, 0x2, 0x2ae, 0x2b0, 
       0x3, 0x2, 0x2, 0x2, 0x2af, 0x2ac, 0x3, 0x2, 0x2, 0x2, 0x2b0, 0x2b3, 
       0x3, 0x2, 0x2, 0x2, 0x2b1, 0x2af, 0x3, 0x2, 0x2, 0x2, 0x2b1, 0x2b2, 
       0x3, 0x2, 0x2, 0x2, 0x2b2, 0x2b5, 0x3, 0x2, 0x2, 0x2, 0x2b3, 0x2b1, 
       0x3, 0x2, 0x2, 0x2, 0x2b4, 0x2a9, 0x3, 0x2, 0x2, 0x2, 0x2b5, 0x2b8, 
       0x3, 0x2, 0x2, 0x2, 0x2b6, 0x2b4, 0x3, 0x2, 0x2, 0x2, 0x2b6, 0x2b7, 
       0x3, 0x2, 0x2, 0x2, 0x2b7, 0x2c2, 0x3, 0x2, 0x2, 0x2, 0x2b8, 0x2b6, 
       0x3, 0x2, 0x2, 0x2, 0x2b9, 0x2bf, 0x7, 0x39, 0x2, 0x2, 0x2ba, 0x2bb, 
       0x5, 0x66, 0x34, 0x2, 0x2bb, 0x2bc, 0x7, 0x51, 0x2, 0x2, 0x2bc, 0x2be, 
       0x3, 0x2, 0x2, 0x2, 0x2bd, 0x2ba, 0x3, 0x2, 0x2, 0x2, 0x2be, 0x2c1, 
       0x3, 0x2, 0x2, 0x2, 0x2bf, 0x2bd, 0x3, 0x2, 0x2, 0x2, 0x2bf, 0x2c0, 
       0x3, 0x2, 0x2, 0x2, 0x2c0, 0x2c3, 0x3, 0x2, 0x2, 0x2, 0x2c1, 0x2bf, 
       0x3, 0x2, 0x2, 0x2, 0x2c2, 0x2b9, 0x3, 0x2, 0x2, 0x2, 0x2c2, 0x2c3, 
       0x3, 0x2, 0x2, 0x2, 0x2c3, 0x2c4, 0x3, 0x2, 0x2, 0x2, 0x2c4, 0x2c5, 
       0x7, 0x1d, 0x2, 0x2, 0x2c5, 0x2c6, 0x7, 0x31, 0x2, 0x2, 0x2c6, 0x6f, 
       0x3, 0x2, 0x2, 0x2, 0x2c7, 0x2c8, 0x7, 0x31, 0x2, 0x2, 0x2c8, 0x2c9, 
       0x5, 0x84, 0x43, 0x2, 0x2c9, 0x2cf, 0x7, 0x37, 0x2, 0x2, 0x2ca, 0x2cb, 
       0x5, 0x6a, 0x36, 0x2, 0x2cb, 0x2cc, 0x7, 0x51, 0x2, 0x2, 0x2cc, 0x2ce, 
       0x3, 0x2, 0x2, 0x2, 0x2cd, 0x2ca, 0x3, 0x2, 0x2, 0x2, 0x2ce, 0x2d1, 
       0x3, 0x2, 0x2, 0x2, 0x2cf, 0x2cd, 0x3, 0x2, 0x2, 0x2, 0x2cf, 0x2d0, 
       0x3, 0x2, 0x2, 0x2, 0x2d0, 0x2df, 0x3, 0x2, 0x2, 0x2, 0x2d1, 0x2cf, 
       0x3, 0x2, 0x2, 0x2, 0x2d2, 0x2d3, 0x7, 0x38, 0x2, 0x2, 0x2d3, 0x2d4, 
       0x5, 0x84, 0x43, 0x2, 0x2d4, 0x2da, 0x7, 0x37, 0x2, 0x2, 0x2d5, 0x2d6, 
       0x5, 0x6a, 0x36, 0x2, 0x2d6, 0x2d7, 0x7, 0x51, 0x2, 0x2, 0x2d7, 0x2d9, 
       0x3, 0x2, 0x2, 0x2, 0x2d8, 0x2d5, 0x3, 0x2, 0x2, 0x2, 0x2d9, 0x2dc, 
       0x3, 0x2, 0x2, 0x2, 0x2da, 0x2d8, 0x3, 0x2, 0x2, 0x2, 0x2da, 0x2db, 
       0x3, 0x2, 0x2, 0x2, 0x2db, 0x2de, 0x3, 0x2, 0x2, 0x2, 0x2dc, 0x2da, 
       0x3, 0x2, 0x2, 0x2, 0x2dd, 0x2d2, 0x3, 0x2, 0x2, 0x2, 0x2de, 0x2e1, 
       0x3, 0x2, 0x2, 0x2, 0x2df, 0x2dd, 0x3, 0x2, 0x2, 0x2, 0x2df, 0x2e0, 
       0x3, 0x2, 0x2, 0x2, 0x2e0, 0x2eb, 0x3, 0x2, 0x2, 0x2, 0x2e1, 0x2df, 
       0x3, 0x2, 0x2, 0x2, 0x2e2, 0x2e8, 0x7, 0x39, 0x2, 0x2, 0x2e3, 0x2e4, 
       0x5, 0x6a, 0x36, 0x2, 0x2e4, 0x2e5, 0x7, 0x51, 0x2, 0x2, 0x2e5, 0x2e7, 
       0x3, 0x2, 0x2, 0x2, 0x2e6, 0x2e3, 0x3, 0x2, 0x2, 0x2, 0x2e7, 0x2ea, 
       0x3, 0x2, 0x2, 0x2, 0x2e8, 0x2e6, 0x3, 0x2, 0x2, 0x2, 0x2e8, 0x2e9, 
       0x3, 0x2, 0x2, 0x2, 0x2e9, 0x2ec, 0x3, 0x2, 0x2, 0x2, 0x2ea, 0x2e8, 
       0x3, 0x2, 0x2, 0x2, 0x2eb, 0x2e2, 0x3, 0x2, 0x2, 0x2, 0x2eb, 0x2ec, 
       0x3, 0x2, 0x2, 0x2, 0x2ec, 0x2ed, 0x3, 0x2, 0x2, 0x2, 0x2ed, 0x2ee, 
       0x7, 0x1d, 0x2, 0x2, 0x2ee, 0x2ef, 0x7, 0x31, 0x2, 0x2, 0x2ef, 0x71, 
       0x3, 0x2, 0x2, 0x2, 0x2f0, 0x2f1, 0x7, 0x3a, 0x2, 0x2, 0x2f1, 0x2f2, 
       0x5, 0x76, 0x3c, 0x2, 0x2f2, 0x2f8, 0x7, 0x3b, 0x2, 0x2, 0x2f3, 0x2f4, 
       0x5, 0x66, 0x34, 0x2, 0x2f4, 0x2f5, 0x7, 0x51, 0x2, 0x2, 0x2f5, 0x2f7, 
       0x3, 0x2, 0x2, 0x2, 0x2f6, 0x2f3, 0x3, 0x2, 0x2, 0x2, 0x2f7, 0x2fa, 
       0x3, 0x2, 0x2, 0x2, 0x2f8, 0x2f6, 0x3, 0x2, 0x2, 0x2, 0x2f8, 0x2f9, 
       0x3, 0x2, 0x2, 0x2, 0x2f9, 0x2fb, 0x3, 0x2, 0x2, 0x2, 0x2fa, 0x2f8, 
       0x3, 0x2, 0x2, 0x2, 0x2fb, 0x2fc, 0x7, 0x1d, 0x2, 0x2, 0x2fc, 0x2fd, 
       0x7, 0x3a, 0x2, 0x2, 0x2fd, 0x73, 0x3, 0x2, 0x2, 0x2, 0x2fe, 0x2ff, 
       0x7, 0x3a, 0x2, 0x2, 0x2ff, 0x300, 0x5, 0x76, 0x3c, 0x2, 0x300, 0x306, 
       0x7, 0x3b, 0x2, 0x2, 0x301, 0x302, 0x5, 0x6a, 0x36, 0x2, 0x302, 0x303, 
       0x7, 0x51, 0x2, 0x2, 0x303, 0x305, 0x3, 0x2, 0x2, 0x2, 0x304, 0x301, 
       0x3, 0x2, 0x2, 0x2, 0x305, 0x308, 0x3, 0x2, 0x2, 0x2, 0x306, 0x304, 
       0x3, 0x2, 0x2, 0x2, 0x306, 0x307, 0x3, 0x2, 0x2, 0x2, 0x307, 0x309, 
       0x3, 0x2, 0x2, 0x2, 0x308, 0x306, 0x3, 0x2, 0x2, 0x2, 0x309, 0x30a, 
       0x7, 0x1d, 0x2, 0x2, 0x30a, 0x30b, 0x7, 0x3a, 0x2, 0x2, 0x30b, 0x75, 
       0x3, 0x2, 0x2, 0x2, 0x30c, 0x311, 0x5, 0x78, 0x3d, 0x2, 0x30d, 0x30e, 
       0x7, 0x52, 0x2, 0x2, 0x30e, 0x310, 0x5, 0x78, 0x3d, 0x2, 0x30f, 0x30d, 
       0x3, 0x2, 0x2, 0x2, 0x310, 0x313, 0x3, 0x2, 0x2, 0x2, 0x311, 0x30f, 
       0x3, 0x2, 0x2, 0x2, 0x311, 0x312, 0x3, 0x2, 0x2, 0x2, 0x312, 0x77, 
       0x3, 0x2, 0x2, 0x2, 0x313, 0x311, 0x3, 0x2, 0x2, 0x2, 0x314, 0x317, 
       0x5, 0x8, 0x5, 0x2, 0x315, 0x316, 0x7, 0x3c, 0x2, 0x2, 0x316, 0x318, 
       0x5, 0x7a, 0x3e, 0x2, 0x317, 0x315, 0x3, 0x2, 0x2, 0x2, 0x317, 0x318, 
       0x3, 0x2, 0x2, 0x2, 0x318, 0x79, 0x3, 0x2, 0x2, 0x2, 0x319, 0x31a, 
       0x5, 0x84, 0x43, 0x2, 0x31a, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x31b, 0x31c, 
       0x7, 0x3d, 0x2, 0x2, 0x31c, 0x31d, 0x5, 0x84, 0x43, 0x2, 0x31d, 0x323, 
       0x7, 0x3b, 0x2, 0x2, 0x31e, 0x31f, 0x5, 0x6a, 0x36, 0x2, 0x31f, 0x320, 
       0x7, 0x51, 0x2, 0x2, 0x320, 0x322, 0x3, 0x2, 0x2, 0x2, 0x321, 0x31e, 
       0x3, 0x2, 0x2, 0x2, 0x322, 0x325, 0x3, 0x2, 0x2, 0x2, 0x323, 0x321, 
       0x3, 0x2, 0x2, 0x2, 0x323, 0x324, 0x3, 0x2, 0x2, 0x2, 0x324, 0x326, 
       0x3, 0x2, 0x2, 0x2, 0x325, 0x323, 0x3, 0x2, 0x2, 0x2, 0x326, 0x327, 
       0x7, 0x1d, 0x2, 0x2, 0x327, 0x328, 0x7, 0x3d, 0x2, 0x2, 0x328, 0x7d, 
       0x3, 0x2, 0x2, 0x2, 0x329, 0x32a, 0x7, 0x3e, 0x2, 0x2, 0x32a, 0x32b, 
       0x5, 0x84, 0x43, 0x2, 0x32b, 0x331, 0x7, 0x37, 0x2, 0x2, 0x32c, 0x32d, 
       0x5, 0x66, 0x34, 0x2, 0x32d, 0x32e, 0x7, 0x51, 0x2, 0x2, 0x32e, 0x330, 
       0x3, 0x2, 0x2, 0x2, 0x32f, 0x32c, 0x3, 0x2, 0x2, 0x2, 0x330, 0x333, 
       0x3, 0x2, 0x2, 0x2, 0x331, 0x32f, 0x3, 0x2, 0x2, 0x2, 0x331, 0x332, 
       0x3, 0x2, 0x2, 0x2, 0x332, 0x341, 0x3, 0x2, 0x2, 0x2, 0x333, 0x331, 
       0x3, 0x2, 0x2, 0x2, 0x334, 0x335, 0x7, 0x3f, 0x2, 0x2, 0x335, 0x336, 
       0x5, 0x84, 0x43, 0x2, 0x336, 0x33c, 0x7, 0x37, 0x2, 0x2, 0x337, 0x338, 
       0x5, 0x66, 0x34, 0x2, 0x338, 0x339, 0x7, 0x51, 0x2, 0x2, 0x339, 0x33b, 
       0x3, 0x2, 0x2, 0x2, 0x33a, 0x337, 0x3, 0x2, 0x2, 0x2, 0x33b, 0x33e, 
       0x3, 0x2, 0x2, 0x2, 0x33c, 0x33a, 0x3, 0x2, 0x2, 0x2, 0x33c, 0x33d, 
       0x3, 0x2, 0x2, 0x2, 0x33d, 0x340, 0x3, 0x2, 0x2, 0x2, 0x33e, 0x33c, 
       0x3, 0x2, 0x2, 0x2, 0x33f, 0x334, 0x3, 0x2, 0x2, 0x2, 0x340, 0x343, 
       0x3, 0x2, 0x2, 0x2, 0x341, 0x33f, 0x3, 0x2, 0x2, 0x2, 0x341, 0x342, 
       0x3, 0x2, 0x2, 0x2, 0x342, 0x344, 0x3, 0x2, 0x2, 0x2, 0x343, 0x341, 
       0x3, 0x2, 0x2, 0x2, 0x344, 0x345, 0x7, 0x1d, 0x2, 0x2, 0x345, 0x346, 
       0x7, 0x3e, 0x2, 0x2, 0x346, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x347, 0x348, 
       0x7, 0x3e, 0x2, 0x2, 0x348, 0x349, 0x5, 0x84, 0x43, 0x2, 0x349, 0x34f, 
       0x7, 0x37, 0x2, 0x2, 0x34a, 0x34b, 0x5, 0x6a, 0x36, 0x2, 0x34b, 0x34c, 
       0x7, 0x51, 0x2, 0x2, 0x34c, 0x34e, 0x3, 0x2, 0x2, 0x2, 0x34d, 0x34a, 
       0x3, 0x2, 0x2, 0x2, 0x34e, 0x351, 0x3, 0x2, 0x2, 0x2, 0x34f, 0x34d, 
       0x3, 0x2, 0x2, 0x2, 0x34f, 0x350, 0x3, 0x2, 0x2, 0x2, 0x350, 0x35f, 
       0x3, 0x2, 0x2, 0x2, 0x351, 0x34f, 0x3, 0x2, 0x2, 0x2, 0x352, 0x353, 
       0x7, 0x3f, 0x2, 0x2, 0x353, 0x354, 0x5, 0x84, 0x43, 0x2, 0x354, 0x35a, 
       0x7, 0x37, 0x2, 0x2, 0x355, 0x356, 0x5, 0x6a, 0x36, 0x2, 0x356, 0x357, 
       0x7, 0x51, 0x2, 0x2, 0x357, 0x359, 0x3, 0x2, 0x2, 0x2, 0x358, 0x355, 
       0x3, 0x2, 0x2, 0x2, 0x359, 0x35c, 0x3, 0x2, 0x2, 0x2, 0x35a, 0x358, 
       0x3, 0x2, 0x2, 0x2, 0x35a, 0x35b, 0x3, 0x2, 0x2, 0x2, 0x35b, 0x35e, 
       0x3, 0x2, 0x2, 0x2, 0x35c, 0x35a, 0x3, 0x2, 0x2, 0x2, 0x35d, 0x352, 
       0x3, 0x2, 0x2, 0x2, 0x35e, 0x361, 0x3, 0x2, 0x2, 0x2, 0x35f, 0x35d, 
       0x3, 0x2, 0x2, 0x2, 0x35f, 0x360, 0x3, 0x2, 0x2, 0x2, 0x360, 0x362, 
       0x3, 0x2, 0x2, 0x2, 0x361, 0x35f, 0x3, 0x2, 0x2, 0x2, 0x362, 0x363, 
       0x7, 0x1d, 0x2, 0x2, 0x363, 0x364, 0x7, 0x3e, 0x2, 0x2, 0x364, 0x81, 
       0x3, 0x2, 0x2, 0x2, 0x365, 0x366, 0x7, 0x40, 0x2, 0x2, 0x366, 0x367, 
       0x7, 0x56, 0x2, 0x2, 0x367, 0x368, 0x5, 0xae, 0x58, 0x2, 0x368, 0x369, 
       0x7, 0x52, 0x2, 0x2, 0x369, 0x36a, 0x5, 0xae, 0x58, 0x2, 0x36a, 0x36b, 
       0x7, 0x57, 0x2, 0x2, 0x36b, 0x83, 0x3, 0x2, 0x2, 0x2, 0x36c, 0x37f, 
       0x5, 0x86, 0x44, 0x2, 0x36d, 0x36e, 0x7, 0x31, 0x2, 0x2, 0x36e, 0x36f, 
       0x5, 0x84, 0x43, 0x2, 0x36f, 0x370, 0x7, 0x37, 0x2, 0x2, 0x370, 0x378, 
       0x5, 0x84, 0x43, 0x2, 0x371, 0x372, 0x7, 0x38, 0x2, 0x2, 0x372, 0x373, 
       0x5, 0x84, 0x43, 0x2, 0x373, 0x374, 0x7, 0x37, 0x2, 0x2, 0x374, 0x375, 
       0x5, 0x84, 0x43, 0x2, 0x375, 0x377, 0x3, 0x2, 0x2, 0x2, 0x376, 0x371, 
       0x3, 0x2, 0x2, 0x2, 0x377, 0x37a, 0x3, 0x2, 0x2, 0x2, 0x378, 0x376, 
       0x3, 0x2, 0x2, 0x2, 0x378, 0x379, 0x3, 0x2, 0x2, 0x2, 0x379, 0x37b, 
       0x3, 0x2, 0x2, 0x2, 0x37a, 0x378, 0x3, 0x2, 0x2, 0x2, 0x37b, 0x37c, 
       0x7, 0x39, 0x2, 0x2, 0x37c, 0x37d, 0x5, 0x84, 0x43, 0x2, 0x37d, 0x37f, 
       0x3, 0x2, 0x2, 0x2, 0x37e, 0x36c, 0x3, 0x2, 0x2, 0x2, 0x37e, 0x36d, 
       0x3, 0x2, 0x2, 0x2, 0x37f, 0x85, 0x3, 0x2, 0x2, 0x2, 0x380, 0x387, 
       0x5, 0x88, 0x45, 0x2, 0x381, 0x382, 0x7, 0x60, 0x2, 0x2, 0x382, 0x385, 
       0x5, 0x88, 0x45, 0x2, 0x383, 0x384, 0x7, 0x60, 0x2, 0x2, 0x384, 0x386, 
       0x5, 0x88, 0x45, 0x2, 0x385, 0x383, 0x3, 0x2, 0x2, 0x2, 0x385, 0x386, 
       0x3, 0x2, 0x2, 0x2, 0x386, 0x388, 0x3, 0x2, 0x2, 0x2, 0x387, 0x381, 
       0x3, 0x2, 0x2, 0x2, 0x387, 0x388, 0x3, 0x2, 0x2, 0x2, 0x388, 0x87, 
       0x3, 0x2, 0x2, 0x2, 0x389, 0x38e, 0x5, 0x8a, 0x46, 0x2, 0x38a, 0x38b, 
       0x7, 0x44, 0x2, 0x2, 0x38b, 0x38d, 0x5, 0x8a, 0x46, 0x2, 0x38c, 0x38a, 
       0x3, 0x2, 0x2, 0x2, 0x38d, 0x390, 0x3, 0x2, 0x2, 0x2, 0x38e, 0x38c, 
       0x3, 0x2, 0x2, 0x2, 0x38e, 0x38f, 0x3, 0x2, 0x2, 0x2, 0x38f, 0x89, 
       0x3, 0x2, 0x2, 0x2, 0x390, 0x38e, 0x3, 0x2, 0x2, 0x2, 0x391, 0x396, 
       0x5, 0x8c, 0x47, 0x2, 0x392, 0x393, 0x7, 0x43, 0x2, 0x2, 0x393, 0x395, 
       0x5, 0x8c, 0x47, 0x2, 0x394, 0x392, 0x3, 0x2, 0x2, 0x2, 0x395, 0x398, 
       0x3, 0x2, 0x2, 0x2, 0x396, 0x394, 0x3, 0x2, 0x2, 0x2, 0x396, 0x397, 
       0x3, 0x2, 0x2, 0x2, 0x397, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x398, 0x396, 
       0x3, 0x2, 0x2, 0x2, 0x399, 0x39b, 0x7, 0x45, 0x2, 0x2, 0x39a, 0x399, 
       0x3, 0x2, 0x2, 0x2, 0x39a, 0x39b, 0x3, 0x2, 0x2, 0x2, 0x39b, 0x39c, 
       0x3, 0x2, 0x2, 0x2, 0x39c, 0x39d, 0x5, 0x8e, 0x48, 0x2, 0x39d, 0x8d, 
       0x3, 0x2, 0x2, 0x2, 0x39e, 0x3a1, 0x5, 0x94, 0x4b, 0x2, 0x39f, 0x3a1, 
       0x5, 0x90, 0x49, 0x2, 0x3a0, 0x39e, 0x3, 0x2, 0x2, 0x2, 0x3a0, 0x39f, 
       0x3, 0x2, 0x2, 0x2, 0x3a1, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x3a2, 0x3a3, 
       0x5, 0x94, 0x4b, 0x2, 0x3a3, 0x3a4, 0x5, 0x92, 0x4a, 0x2, 0x3a4, 
       0x3a5, 0x5, 0x94, 0x4b, 0x2, 0x3a5, 0x91, 0x3, 0x2, 0x2, 0x2, 0x3a6, 
       0x3a7, 0x9, 0x7, 0x2, 0x2, 0x3a7, 0x93, 0x3, 0x2, 0x2, 0x2, 0x3a8, 
       0x3aa, 0x5, 0x96, 0x4c, 0x2, 0x3a9, 0x3a8, 0x3, 0x2, 0x2, 0x2, 0x3a9, 
       0x3aa, 0x3, 0x2, 0x2, 0x2, 0x3aa, 0x3ab, 0x3, 0x2, 0x2, 0x2, 0x3ab, 
       0x3b1, 0x5, 0x98, 0x4d, 0x2, 0x3ac, 0x3ad, 0x5, 0x96, 0x4c, 0x2, 
       0x3ad, 0x3ae, 0x5, 0x98, 0x4d, 0x2, 0x3ae, 0x3b0, 0x3, 0x2, 0x2, 
       0x2, 0x3af, 0x3ac, 0x3, 0x2, 0x2, 0x2, 0x3b0, 0x3b3, 0x3, 0x2, 0x2, 
       0x2, 0x3b1, 0x3af, 0x3, 0x2, 0x2, 0x2, 0x3b1, 0x3b2, 0x3, 0x2, 0x2, 
       0x2, 0x3b2, 0x95, 0x3, 0x2, 0x2, 0x2, 0x3b3, 0x3b1, 0x3, 0x2, 0x2, 
       0x2, 0x3b4, 0x3b5, 0x9, 0x8, 0x2, 0x2, 0x3b5, 0x97, 0x3, 0x2, 0x2, 
       0x2, 0x3b6, 0x3bc, 0x5, 0x9c, 0x4f, 0x2, 0x3b7, 0x3b8, 0x5, 0x9a, 
       0x4e, 0x2, 0x3b8, 0x3b9, 0x5, 0x9c, 0x4f, 0x2, 0x3b9, 0x3bb, 0x3, 
       0x2, 0x2, 0x2, 0x3ba, 0x3b7, 0x3, 0x2, 0x2, 0x2, 0x3bb, 0x3be, 0x3, 
       0x2, 0x2, 0x2, 0x3bc, 0x3ba, 0x3, 0x2, 0x2, 0x2, 0x3bc, 0x3bd, 0x3, 
       0x2, 0x2, 0x2, 0x3bd, 0x99, 0x3, 0x2, 0x2, 0x2, 0x3be, 0x3bc, 0x3, 
       0x2, 0x2, 0x2, 0x3bf, 0x3c0, 0x9, 0x9, 0x2, 0x2, 0x3c0, 0x9b, 0x3, 
       0x2, 0x2, 0x2, 0x3c1, 0x3c4, 0x5, 0xa4, 0x53, 0x2, 0x3c2, 0x3c3, 
       0x9, 0xa, 0x2, 0x2, 0x3c3, 0x3c5, 0x5, 0xa4, 0x53, 0x2, 0x3c4, 0x3c2, 
       0x3, 0x2, 0x2, 0x2, 0x3c4, 0x3c5, 0x3, 0x2, 0x2, 0x2, 0x3c5, 0x9d, 
       0x3, 0x2, 0x2, 0x2, 0x3c6, 0x3c7, 0x7, 0xa, 0x2, 0x2, 0x3c7, 0x9f, 
       0x3, 0x2, 0x2, 0x2, 0x3c8, 0x3c9, 0x7, 0x9, 0x2, 0x2, 0x3c9, 0xa1, 
       0x3, 0x2, 0x2, 0x2, 0x3ca, 0x3cb, 0x9, 0xb, 0x2, 0x2, 0x3cb, 0xa3, 
       0x3, 0x2, 0x2, 0x2, 0x3cc, 0x3e8, 0x5, 0x9e, 0x50, 0x2, 0x3cd, 0x3e8, 
       0x5, 0xa0, 0x51, 0x2, 0x3ce, 0x3e8, 0x5, 0xa2, 0x52, 0x2, 0x3cf, 
       0x3d0, 0x9, 0xc, 0x2, 0x2, 0x3d0, 0x3e8, 0x5, 0xb0, 0x59, 0x2, 0x3d1, 
       0x3e8, 0x5, 0xae, 0x58, 0x2, 0x3d2, 0x3e8, 0x5, 0xa6, 0x54, 0x2, 
       0x3d3, 0x3d4, 0x7, 0x56, 0x2, 0x2, 0x3d4, 0x3d5, 0x5, 0xc0, 0x61, 
       0x2, 0x3d5, 0x3d6, 0x7, 0x57, 0x2, 0x2, 0x3d6, 0x3e8, 0x3, 0x2, 0x2, 
       0x2, 0x3d7, 0x3d8, 0x7, 0x54, 0x2, 0x2, 0x3d8, 0x3dd, 0x5, 0xc2, 
       0x62, 0x2, 0x3d9, 0x3da, 0x7, 0x51, 0x2, 0x2, 0x3da, 0x3dc, 0x5, 
       0xc2, 0x62, 0x2, 0x3db, 0x3d9, 0x3, 0x2, 0x2, 0x2, 0x3dc, 0x3df, 
       0x3, 0x2, 0x2, 0x2, 0x3dd, 0x3db, 0x3, 0x2, 0x2, 0x2, 0x3dd, 0x3de, 
       0x3, 0x2, 0x2, 0x2, 0x3de, 0x3e0, 0x3, 0x2, 0x2, 0x2, 0x3df, 0x3dd, 
       0x3, 0x2, 0x2, 0x2, 0x3e0, 0x3e1, 0x7, 0x55, 0x2, 0x2, 0x3e1, 0x3e8, 
       0x3, 0x2, 0x2, 0x2, 0x3e2, 0x3e3, 0x7, 0x58, 0x2, 0x2, 0x3e3, 0x3e4, 
       0x5, 0xb6, 0x5c, 0x2, 0x3e4, 0x3e5, 0x7, 0x59, 0x2, 0x2, 0x3e5, 0x3e8, 
       0x3, 0x2, 0x2, 0x2, 0x3e6, 0x3e8, 0x7, 0x1d, 0x2, 0x2, 0x3e7, 0x3cc, 
       0x3, 0x2, 0x2, 0x2, 0x3e7, 0x3cd, 0x3, 0x2, 0x2, 0x2, 0x3e7, 0x3ce, 
       0x3, 0x2, 0x2, 0x2, 0x3e7, 0x3cf, 0x3, 0x2, 0x2, 0x2, 0x3e7, 0x3d1, 
       0x3, 0x2, 0x2, 0x2, 0x3e7, 0x3d2, 0x3, 0x2, 0x2, 0x2, 0x3e7, 0x3d3, 
       0x3, 0x2, 0x2, 0x2, 0x3e7, 0x3d7, 0x3, 0x2, 0x2, 0x2, 0x3e7, 0x3e2, 
       0x3, 0x2, 0x2, 0x2, 0x3e7, 0x3e6, 0x3, 0x2, 0x2, 0x2, 0x3e8, 0xa5, 
       0x3, 0x2, 0x2, 0x2, 0x3e9, 0x3ea, 0x5, 0xae, 0x58, 0x2, 0x3ea, 0x3eb, 
       0x5, 0xb0, 0x59, 0x2, 0x3eb, 0xa7, 0x3, 0x2, 0x2, 0x2, 0x3ec, 0x3ee, 
       0x7, 0x53, 0x2, 0x2, 0x3ed, 0x3ec, 0x3, 0x2, 0x2, 0x2, 0x3ed, 0x3ee, 
       0x3, 0x2, 0x2, 0x2, 0x3ee, 0x3ef, 0x3, 0x2, 0x2, 0x2, 0x3ef, 0x3f0, 
       0x5, 0xaa, 0x56, 0x2, 0x3f0, 0xa9, 0x3, 0x2, 0x2, 0x2, 0x3f1, 0x3f6, 
       0x5, 0x8, 0x5, 0x2, 0x3f2, 0x3f3, 0x7, 0x53, 0x2, 0x2, 0x3f3, 0x3f5, 
       0x5, 0x8, 0x5, 0x2, 0x3f4, 0x3f2, 0x3, 0x2, 0x2, 0x2, 0x3f5, 0x3f8, 
       0x3, 0x2, 0x2, 0x2, 0x3f6, 0x3f4, 0x3, 0x2, 0x2, 0x2, 0x3f6, 0x3f7, 
       0x3, 0x2, 0x2, 0x2, 0x3f7, 0xab, 0x3, 0x2, 0x2, 0x2, 0x3f8, 0x3f6, 
       0x3, 0x2, 0x2, 0x2, 0x3f9, 0x3fe, 0x5, 0x8, 0x5, 0x2, 0x3fa, 0x3fb, 
       0x7, 0x53, 0x2, 0x2, 0x3fb, 0x3fd, 0x5, 0x8, 0x5, 0x2, 0x3fc, 0x3fa, 
       0x3, 0x2, 0x2, 0x2, 0x3fd, 0x400, 0x3, 0x2, 0x2, 0x2, 0x3fe, 0x3fc, 
       0x3, 0x2, 0x2, 0x2, 0x3fe, 0x3ff, 0x3, 0x2, 0x2, 0x2, 0x3ff, 0xad, 
       0x3, 0x2, 0x2, 0x2, 0x400, 0x3fe, 0x3, 0x2, 0x2, 0x2, 0x401, 0x403, 
       0x7, 0x53, 0x2, 0x2, 0x402, 0x401, 0x3, 0x2, 0x2, 0x2, 0x402, 0x403, 
       0x3, 0x2, 0x2, 0x2, 0x403, 0x404, 0x3, 0x2, 0x2, 0x2, 0x404, 0x406, 
       0x5, 0x8, 0x5, 0x2, 0x405, 0x407, 0x5, 0xc4, 0x63, 0x2, 0x406, 0x405, 
       0x3, 0x2, 0x2, 0x2, 0x406, 0x407, 0x3, 0x2, 0x2, 0x2, 0x407, 0x40f, 
       0x3, 0x2, 0x2, 0x2, 0x408, 0x409, 0x7, 0x53, 0x2, 0x2, 0x409, 0x40b, 
       0x5, 0x8, 0x5, 0x2, 0x40a, 0x40c, 0x5, 0xc4, 0x63, 0x2, 0x40b, 0x40a, 
       0x3, 0x2, 0x2, 0x2, 0x40b, 0x40c, 0x3, 0x2, 0x2, 0x2, 0x40c, 0x40e, 
       0x3, 0x2, 0x2, 0x2, 0x40d, 0x408, 0x3, 0x2, 0x2, 0x2, 0x40e, 0x411, 
       0x3, 0x2, 0x2, 0x2, 0x40f, 0x40d, 0x3, 0x2, 0x2, 0x2, 0x40f, 0x410, 
       0x3, 0x2, 0x2, 0x2, 0x410, 0xaf, 0x3, 0x2, 0x2, 0x2, 0x411, 0x40f, 
       0x3, 0x2, 0x2, 0x2, 0x412, 0x414, 0x7, 0x56, 0x2, 0x2, 0x413, 0x415, 
       0x5, 0xb2, 0x5a, 0x2, 0x414, 0x413, 0x3, 0x2, 0x2, 0x2, 0x414, 0x415, 
       0x3, 0x2, 0x2, 0x2, 0x415, 0x416, 0x3, 0x2, 0x2, 0x2, 0x416, 0x417, 
       0x7, 0x57, 0x2, 0x2, 0x417, 0xb1, 0x3, 0x2, 0x2, 0x2, 0x418, 0x41d, 
       0x5, 0x84, 0x43, 0x2, 0x419, 0x41a, 0x7, 0x52, 0x2, 0x2, 0x41a, 0x41e, 
       0x5, 0xb4, 0x5b, 0x2, 0x41b, 0x41c, 0x7, 0x3a, 0x2, 0x2, 0x41c, 0x41e, 
       0x5, 0x76, 0x3c, 0x2, 0x41d, 0x419, 0x3, 0x2, 0x2, 0x2, 0x41d, 0x41b, 
       0x3, 0x2, 0x2, 0x2, 0x41d, 0x41e, 0x3, 0x2, 0x2, 0x2, 0x41e, 0x426, 
       0x3, 0x2, 0x2, 0x2, 0x41f, 0x422, 0x5, 0xbe, 0x60, 0x2, 0x420, 0x421, 
       0x7, 0x52, 0x2, 0x2, 0x421, 0x423, 0x5, 0xb4, 0x5b, 0x2, 0x422, 0x420, 
       0x3, 0x2, 0x2, 0x2, 0x422, 0x423, 0x3, 0x2, 0x2, 0x2, 0x423, 0x426, 
       0x3, 0x2, 0x2, 0x2, 0x424, 0x426, 0x5, 0xb8, 0x5d, 0x2, 0x425, 0x418, 
       0x3, 0x2, 0x2, 0x2, 0x425, 0x41f, 0x3, 0x2, 0x2, 0x2, 0x425, 0x424, 
       0x3, 0x2, 0x2, 0x2, 0x426, 0xb3, 0x3, 0x2, 0x2, 0x2, 0x427, 0x42a, 
       0x5, 0xbc, 0x5f, 0x2, 0x428, 0x429, 0x7, 0x52, 0x2, 0x2, 0x429, 0x42b, 
       0x5, 0xb4, 0x5b, 0x2, 0x42a, 0x428, 0x3, 0x2, 0x2, 0x2, 0x42a, 0x42b, 
       0x3, 0x2, 0x2, 0x2, 0x42b, 0x42e, 0x3, 0x2, 0x2, 0x2, 0x42c, 0x42e, 
       0x5, 0xb8, 0x5d, 0x2, 0x42d, 0x427, 0x3, 0x2, 0x2, 0x2, 0x42d, 0x42c, 
       0x3, 0x2, 0x2, 0x2, 0x42e, 0xb5, 0x3, 0x2, 0x2, 0x2, 0x42f, 0x439, 
       0x5, 0x84, 0x43, 0x2, 0x430, 0x431, 0x7, 0x52, 0x2, 0x2, 0x431, 0x433, 
       0x5, 0x84, 0x43, 0x2, 0x432, 0x430, 0x3, 0x2, 0x2, 0x2, 0x433, 0x436, 
       0x3, 0x2, 0x2, 0x2, 0x434, 0x432, 0x3, 0x2, 0x2, 0x2, 0x434, 0x435, 
       0x3, 0x2, 0x2, 0x2, 0x435, 0x43a, 0x3, 0x2, 0x2, 0x2, 0x436, 0x434, 
       0x3, 0x2, 0x2, 0x2, 0x437, 0x438, 0x7, 0x3a, 0x2, 0x2, 0x438, 0x43a, 
       0x5, 0x76, 0x3c, 0x2, 0x439, 0x434, 0x3, 0x2, 0x2, 0x2, 0x439, 0x437, 
       0x3, 0x2, 0x2, 0x2, 0x43a, 0xb7, 0x3, 0x2, 0x2, 0x2, 0x43b, 0x440, 
       0x5, 0xba, 0x5e, 0x2, 0x43c, 0x43d, 0x7, 0x52, 0x2, 0x2, 0x43d, 0x43f, 
       0x5, 0xba, 0x5e, 0x2, 0x43e, 0x43c, 0x3, 0x2, 0x2, 0x2, 0x43f, 0x442, 
       0x3, 0x2, 0x2, 0x2, 0x440, 0x43e, 0x3, 0x2, 0x2, 0x2, 0x440, 0x441, 
       0x3, 0x2, 0x2, 0x2, 0x441, 0xb9, 0x3, 0x2, 0x2, 0x2, 0x442, 0x440, 
       0x3, 0x2, 0x2, 0x2, 0x443, 0x444, 0x5, 0x8, 0x5, 0x2, 0x444, 0x445, 
       0x7, 0x4f, 0x2, 0x2, 0x445, 0x446, 0x5, 0xbc, 0x5f, 0x2, 0x446, 0xbb, 
       0x3, 0x2, 0x2, 0x2, 0x447, 0x44a, 0x5, 0xbe, 0x60, 0x2, 0x448, 0x44a, 
       0x5, 0x84, 0x43, 0x2, 0x449, 0x447, 0x3, 0x2, 0x2, 0x2, 0x449, 0x448, 
       0x3, 0x2, 0x2, 0x2, 0x44a, 0xbd, 0x3, 0x2, 0x2, 0x2, 0x44b, 0x44c, 
       0x7, 0x1c, 0x2, 0x2, 0x44c, 0x44d, 0x5, 0xa8, 0x55, 0x2, 0x44d, 0x44f, 
       0x7, 0x56, 0x2, 0x2, 0x44e, 0x450, 0x5, 0xb8, 0x5d, 0x2, 0x44f, 0x44e, 
       0x3, 0x2, 0x2, 0x2, 0x44f, 0x450, 0x3, 0x2, 0x2, 0x2, 0x450, 0x451, 
       0x3, 0x2, 0x2, 0x2, 0x451, 0x452, 0x7, 0x57, 0x2, 0x2, 0x452, 0xbf, 
       0x3, 0x2, 0x2, 0x2, 0x453, 0x455, 0x5, 0x84, 0x43, 0x2, 0x454, 0x453, 
       0x3, 0x2, 0x2, 0x2, 0x454, 0x455, 0x3, 0x2, 0x2, 0x2, 0x455, 0x45c, 
       0x3, 0x2, 0x2, 0x2, 0x456, 0x458, 0x7, 0x52, 0x2, 0x2, 0x457, 0x459, 
       0x5, 0x84, 0x43, 0x2, 0x458, 0x457, 0x3, 0x2, 0x2, 0x2, 0x458, 0x459, 
       0x3, 0x2, 0x2, 0x2, 0x459, 0x45b, 0x3, 0x2, 0x2, 0x2, 0x45a, 0x456, 
       0x3, 0x2, 0x2, 0x2, 0x45b, 0x45e, 0x3, 0x2, 0x2, 0x2, 0x45c, 0x45a, 
       0x3, 0x2, 0x2, 0x2, 0x45c, 0x45d, 0x3, 0x2, 0x2, 0x2, 0x45d, 0xc1, 
       0x3, 0x2, 0x2, 0x2, 0x45e, 0x45c, 0x3, 0x2, 0x2, 0x2, 0x45f, 0x464, 
       0x5, 0x84, 0x43, 0x2, 0x460, 0x461, 0x7, 0x52, 0x2, 0x2, 0x461, 0x463, 
       0x5, 0x84, 0x43, 0x2, 0x462, 0x460, 0x3, 0x2, 0x2, 0x2, 0x463, 0x466, 
       0x3, 0x2, 0x2, 0x2, 0x464, 0x462, 0x3, 0x2, 0x2, 0x2, 0x464, 0x465, 
       0x3, 0x2, 0x2, 0x2, 0x465, 0xc3, 0x3, 0x2, 0x2, 0x2, 0x466, 0x464, 
       0x3, 0x2, 0x2, 0x2, 0x467, 0x468, 0x7, 0x54, 0x2, 0x2, 0x468, 0x46d, 
       0x5, 0xc6, 0x64, 0x2, 0x469, 0x46a, 0x7, 0x52, 0x2, 0x2, 0x46a, 0x46c, 
       0x5, 0xc6, 0x64, 0x2, 0x46b, 0x469, 0x3, 0x2, 0x2, 0x2, 0x46c, 0x46f, 
       0x3, 0x2, 0x2, 0x2, 0x46d, 0x46b, 0x3, 0x2, 0x2, 0x2, 0x46d, 0x46e, 
       0x3, 0x2, 0x2, 0x2, 0x46e, 0x470, 0x3, 0x2, 0x2, 0x2, 0x46f, 0x46d, 
       0x3, 0x2, 0x2, 0x2, 0x470, 0x471, 0x7, 0x55, 0x2, 0x2, 0x471, 0xc5, 
       0x3, 0x2, 0x2, 0x2, 0x472, 0x475, 0x7, 0x60, 0x2, 0x2, 0x473, 0x475, 
       0x5, 0x84, 0x43, 0x2, 0x474, 0x472, 0x3, 0x2, 0x2, 0x2, 0x474, 0x473, 
       0x3, 0x2, 0x2, 0x2, 0x475, 0xc7, 0x3, 0x2, 0x2, 0x2, 0x476, 0x478, 
       0x5, 0xca, 0x66, 0x2, 0x477, 0x479, 0x5, 0xcc, 0x67, 0x2, 0x478, 
       0x477, 0x3, 0x2, 0x2, 0x2, 0x478, 0x479, 0x3, 0x2, 0x2, 0x2, 0x479, 
       0xc9, 0x3, 0x2, 0x2, 0x2, 0x47a, 0x47f, 0x7, 0x9, 0x2, 0x2, 0x47b, 
       0x47c, 0x7, 0x46, 0x2, 0x2, 0x47c, 0x47e, 0x7, 0x9, 0x2, 0x2, 0x47d, 
       0x47b, 0x3, 0x2, 0x2, 0x2, 0x47e, 0x481, 0x3, 0x2, 0x2, 0x2, 0x47f, 
       0x47d, 0x3, 0x2, 0x2, 0x2, 0x47f, 0x480, 0x3, 0x2, 0x2, 0x2, 0x480, 
       0x483, 0x3, 0x2, 0x2, 0x2, 0x481, 0x47f, 0x3, 0x2, 0x2, 0x2, 0x482, 
       0x47a, 0x3, 0x2, 0x2, 0x2, 0x482, 0x483, 0x3, 0x2, 0x2, 0x2, 0x483, 
       0xcb, 0x3, 0x2, 0x2, 0x2, 0x484, 0x485, 0x7, 0x41, 0x2, 0x2, 0x485, 
       0x486, 0x5, 0x4a, 0x26, 0x2, 0x486, 0xcd, 0x3, 0x2, 0x2, 0x2, 0x90, 
       0xcf, 0xd3, 0xd6, 0xd9, 0xe0, 0xe6, 0xec, 0xf1, 0xf6, 0xfc, 0xff, 
       0x103, 0x10a, 0x115, 0x11c, 0x129, 0x12c, 0x135, 0x138, 0x13c, 0x14b, 
       0x152, 0x159, 0x169, 0x16b, 0x170, 0x173, 0x176, 0x179, 0x17e, 0x185, 
       0x18a, 0x193, 0x199, 0x19c, 0x19f, 0x1a2, 0x1a9, 0x1ae, 0x1b0, 0x1b2, 
       0x1c0, 0x1c3, 0x1c5, 0x1ce, 0x1d4, 0x1d7, 0x1dc, 0x1e1, 0x1e6, 0x1e9, 
       0x1ec, 0x1f3, 0x1f8, 0x203, 0x207, 0x20c, 0x212, 0x216, 0x21c, 0x225, 
       0x22a, 0x22d, 0x230, 0x234, 0x23a, 0x23e, 0x244, 0x247, 0x24c, 0x251, 
       0x254, 0x261, 0x269, 0x26d, 0x275, 0x27d, 0x284, 0x294, 0x29c, 0x2a6, 
       0x2b1, 0x2b6, 0x2bf, 0x2c2, 0x2cf, 0x2da, 0x2df, 0x2e8, 0x2eb, 0x2f8, 
       0x306, 0x311, 0x317, 0x323, 0x331, 0x33c, 0x341, 0x34f, 0x35a, 0x35f, 
       0x378, 0x37e, 0x385, 0x387, 0x38e, 0x396, 0x39a, 0x3a0, 0x3a9, 0x3b1, 
       0x3bc, 0x3c4, 0x3dd, 0x3e7, 0x3ed, 0x3f6, 0x3fe, 0x402, 0x406, 0x40b, 
       0x40f, 0x414, 0x41d, 0x422, 0x425, 0x42a, 0x42d, 0x434, 0x439, 0x440, 
       0x449, 0x44f, 0x454, 0x458, 0x45c, 0x464, 0x46d, 0x474, 0x478, 0x47f, 
       0x482, 
  };

  _serializedATN.insert(_serializedATN.end(), serializedATNSegment0,
    serializedATNSegment0 + sizeof(serializedATNSegment0) / sizeof(serializedATNSegment0[0]));


  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

modelicaParser::Initializer modelicaParser::_init;
