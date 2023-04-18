
// Generated from /test/Modelica-Compiler/grammar/modelica.g4 by ANTLR 4.9.3

#pragma once


#include "antlr4-runtime.h"




class  modelicaLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, BOM = 2, WS = 3, LINE_COMMENT = 4, ML_COMMENT = 5, IDENT = 6, 
    STRING = 7, UNSIGNED_NUMBER = 8, FALSE = 9, TRUE = 10, WITHIN = 11, 
    FINAL = 12, ENCAPSULATED = 13, PARTIAL = 14, CLASS = 15, MODEL = 16, 
    OPERATOR = 17, RECORD = 18, BLOCK = 19, EXPANDABLE = 20, CONNECTOR = 21, 
    TYPE = 22, PACKAGE = 23, PURE = 24, IMPURE = 25, FUNCTION = 26, END = 27, 
    EXTENDS = 28, ENUMERATION = 29, DER = 30, INPUT = 31, OUTPUT = 32, PUBLIC = 33, 
    PROTECTED = 34, EXTERNAL = 35, REDECLARE = 36, INNER = 37, OUTER = 38, 
    REPLACEABLE = 39, IMPORT = 40, CONSTRAINEDBY = 41, FLOW = 42, STREAM = 43, 
    DISCRETE = 44, PARAMETER = 45, CONSTANT = 46, IF = 47, EACH = 48, INITIAL = 49, 
    ALGORITHM = 50, BREAK = 51, RETURN = 52, THEN = 53, ELSEIF = 54, ELSE = 55, 
    FOR = 56, LOOP = 57, IN = 58, WHILE = 59, WHEN = 60, ELSEWHEN = 61, 
    CONNECT = 62, ANNOTATION = 63, LEQUATION = 64, AND = 65, OR = 66, NOT = 67, 
    ADD = 68, SUB = 69, MUL = 70, DIV = 71, MOD = 72, LT = 73, LE = 74, 
    GT = 75, GE = 76, ASSIGN = 77, EQ = 78, SEMI = 79, COMMA = 80, DOT = 81, 
    LBRACKET = 82, RBRACKET = 83, LPAREN = 84, RPAREN = 85, LBRACE = 86, 
    RBRACE = 87, POWER = 88, DOT_ADD = 89, DOT_SUB = 90, DOT_MUL = 91, DOT_DIV = 92, 
    DOT_P = 93, COLON = 94, C_ASSIGN = 95, L_OP = 96
  };

  explicit modelicaLexer(antlr4::CharStream *input);
  ~modelicaLexer();

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

