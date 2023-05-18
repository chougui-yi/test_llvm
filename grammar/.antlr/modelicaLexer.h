
// Generated from /test/test_llvm/grammar/modelica.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"




class  modelicaLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, BOM = 2, WS = 3, LINE_COMMENT = 4, ML_COMMENT = 5, STRING = 6, 
    UNSIGNED_NUMBER = 7, FALSE = 8, TRUE = 9, WITHIN = 10, FINAL = 11, ENCAPSULATED = 12, 
    PARTIAL = 13, CLASS = 14, MODEL = 15, OPERATOR = 16, RECORD = 17, BLOCK = 18, 
    EXPANDABLE = 19, CONNECTOR = 20, TYPE = 21, PACKAGE = 22, PURE = 23, 
    IMPURE = 24, FUNCTION = 25, END = 26, EXTENDS = 27, ENUMERATION = 28, 
    DER = 29, INPUT = 30, OUTPUT = 31, PUBLIC = 32, PROTECTED = 33, EXTERNAL = 34, 
    REDECLARE = 35, INNER = 36, OUTER = 37, REPLACEABLE = 38, IMPORT = 39, 
    CONSTRAINEDBY = 40, FLOW = 41, STREAM = 42, DISCRETE = 43, PARAMETER = 44, 
    CONSTANT = 45, IF = 46, EACH = 47, INITIAL = 48, ALGORITHM = 49, BREAK = 50, 
    RETURN = 51, THEN = 52, ELSEIF = 53, ELSE = 54, FOR = 55, LOOP = 56, 
    IN = 57, WHILE = 58, WHEN = 59, ELSEWHEN = 60, CONNECT = 61, ANNOTATION = 62, 
    LEQUATION = 63, AND = 64, OR = 65, NOT = 66, ADD = 67, SUB = 68, MUL = 69, 
    DIV = 70, MOD = 71, LT = 72, LE = 73, GT = 74, GE = 75, ASSIGN = 76, 
    EQ = 77, SEMI = 78, COMMA = 79, DOT = 80, LBRACKET = 81, RBRACKET = 82, 
    LPAREN = 83, RPAREN = 84, LBRACE = 85, RBRACE = 86, POWER = 87, DOT_ADD = 88, 
    DOT_SUB = 89, DOT_MUL = 90, DOT_DIV = 91, DOT_P = 92, COLON = 93, C_ASSIGN = 94, 
    L_OP = 95, IDENT = 96
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

