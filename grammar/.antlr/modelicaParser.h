
// Generated from /test/Modelica-Compiler/grammar/modelica.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"




class  modelicaParser : public antlr4::Parser {
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

  enum {
    RuleStored_definition = 0, RuleClass_definition = 1, RuleClass_prefixes = 2, 
    RuleId = 3, RuleClass_specifier = 4, RuleLong_class_specifier = 5, RuleShort_class_specifier_name = 6, 
    RuleBase_prefix_name = 7, RuleShort_class_specifier_enumeration = 8, 
    RuleSpecifier_enumeration = 9, RuleBase_prefix_specifier = 10, RuleShort_class_specifier = 11, 
    RuleDer_class_specifier = 12, RuleBase_prefix = 13, RuleEnum_list = 14, 
    RuleEnumeration_option_name = 15, RuleEnumeration_literal = 16, RuleAction_scope = 17, 
    RuleComposition = 18, RuleLanguage_specification = 19, RuleExternal_function_call = 20, 
    RuleElement_list = 21, RuleElement = 22, RuleImport_clause = 23, RuleImport_list = 24, 
    RuleExtends_clause = 25, RuleConstraining_clause = 26, RuleComponent_clause = 27, 
    RuleType_prefix = 28, RuleComponent_list = 29, RuleComponent_declaration = 30, 
    RuleCondition_attribute = 31, RuleVariable_name = 32, RuleDeclaration = 33, 
    RuleVariable_characteristic = 34, RuleModification = 35, RuleClass_modification = 36, 
    RuleClass_modification1 = 37, RuleArgument_list = 38, RuleArgument = 39, 
    RuleElement_modification_or_replaceable = 40, RuleVariable_characteristic_modification = 41, 
    RuleElement_modification = 42, RuleElement_redeclaration = 43, RuleElement_replaceable = 44, 
    RuleComponent_clause1 = 45, RuleComponent_declaration1 = 46, RuleShort_class_definition = 47, 
    RuleEquation_section = 48, RuleAlgorithm_section = 49, RuleEquation = 50, 
    RuleEquation_valuation2 = 51, RuleStatement = 52, RuleEquation_valuation = 53, 
    RuleIf_equation = 54, RuleIf_statement = 55, RuleFor_equation = 56, 
    RuleFor_statement = 57, RuleFor_indices = 58, RuleFor_index = 59, RuleFor_range = 60, 
    RuleWhile_statement = 61, RuleWhen_equation = 62, RuleWhen_statement = 63, 
    RuleConnect_clause = 64, RuleExpression = 65, RuleSimple_expression = 66, 
    RuleLogical_expression = 67, RuleLogical_term = 68, RuleLogical_factor = 69, 
    RuleRelation = 70, RuleIf_relation = 71, RuleRelational_operator = 72, 
    RuleArithmetic_expression = 73, RuleAdd_operator = 74, RuleTerm = 75, 
    RuleMul_operator = 76, RuleFactor = 77, RuleNumber = 78, RuleString = 79, 
    RuleBoolean_my = 80, RulePrimary = 81, RuleFunction_call = 82, RuleType_specifier = 83, 
    RuleType_specifier_name = 84, RuleName = 85, RuleComponent_reference = 86, 
    RuleFunction_call_args = 87, RuleFunction_arguments = 88, RuleFunction_arguments_non_first = 89, 
    RuleArray_arguments = 90, RuleNamed_arguments = 91, RuleNamed_argument = 92, 
    RuleFunction_argument = 93, RuleFunction_partial_application = 94, RuleOutput_expression_list = 95, 
    RuleExpression_list = 96, RuleArray_subscripts = 97, RuleSubscript = 98, 
    RuleComment = 99, RuleString_comment = 100, RuleAnnotation_comment = 101
  };

  explicit modelicaParser(antlr4::TokenStream *input);
  ~modelicaParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class Stored_definitionContext;
  class Class_definitionContext;
  class Class_prefixesContext;
  class IdContext;
  class Class_specifierContext;
  class Long_class_specifierContext;
  class Short_class_specifier_nameContext;
  class Base_prefix_nameContext;
  class Short_class_specifier_enumerationContext;
  class Specifier_enumerationContext;
  class Base_prefix_specifierContext;
  class Short_class_specifierContext;
  class Der_class_specifierContext;
  class Base_prefixContext;
  class Enum_listContext;
  class Enumeration_option_nameContext;
  class Enumeration_literalContext;
  class Action_scopeContext;
  class CompositionContext;
  class Language_specificationContext;
  class External_function_callContext;
  class Element_listContext;
  class ElementContext;
  class Import_clauseContext;
  class Import_listContext;
  class Extends_clauseContext;
  class Constraining_clauseContext;
  class Component_clauseContext;
  class Type_prefixContext;
  class Component_listContext;
  class Component_declarationContext;
  class Condition_attributeContext;
  class Variable_nameContext;
  class DeclarationContext;
  class Variable_characteristicContext;
  class ModificationContext;
  class Class_modificationContext;
  class Class_modification1Context;
  class Argument_listContext;
  class ArgumentContext;
  class Element_modification_or_replaceableContext;
  class Variable_characteristic_modificationContext;
  class Element_modificationContext;
  class Element_redeclarationContext;
  class Element_replaceableContext;
  class Component_clause1Context;
  class Component_declaration1Context;
  class Short_class_definitionContext;
  class Equation_sectionContext;
  class Algorithm_sectionContext;
  class EquationContext;
  class Equation_valuation2Context;
  class StatementContext;
  class Equation_valuationContext;
  class If_equationContext;
  class If_statementContext;
  class For_equationContext;
  class For_statementContext;
  class For_indicesContext;
  class For_indexContext;
  class For_rangeContext;
  class While_statementContext;
  class When_equationContext;
  class When_statementContext;
  class Connect_clauseContext;
  class ExpressionContext;
  class Simple_expressionContext;
  class Logical_expressionContext;
  class Logical_termContext;
  class Logical_factorContext;
  class RelationContext;
  class If_relationContext;
  class Relational_operatorContext;
  class Arithmetic_expressionContext;
  class Add_operatorContext;
  class TermContext;
  class Mul_operatorContext;
  class FactorContext;
  class NumberContext;
  class StringContext;
  class Boolean_myContext;
  class PrimaryContext;
  class Function_callContext;
  class Type_specifierContext;
  class Type_specifier_nameContext;
  class NameContext;
  class Component_referenceContext;
  class Function_call_argsContext;
  class Function_argumentsContext;
  class Function_arguments_non_firstContext;
  class Array_argumentsContext;
  class Named_argumentsContext;
  class Named_argumentContext;
  class Function_argumentContext;
  class Function_partial_applicationContext;
  class Output_expression_listContext;
  class Expression_listContext;
  class Array_subscriptsContext;
  class SubscriptContext;
  class CommentContext;
  class String_commentContext;
  class Annotation_commentContext; 

  class  Stored_definitionContext : public antlr4::ParserRuleContext {
  public:
    Stored_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    antlr4::tree::TerminalNode *WITHIN();
    std::vector<antlr4::tree::TerminalNode *> SEMI();
    antlr4::tree::TerminalNode* SEMI(size_t i);
    std::vector<Class_definitionContext *> class_definition();
    Class_definitionContext* class_definition(size_t i);
    NameContext *name();
    std::vector<antlr4::tree::TerminalNode *> FINAL();
    antlr4::tree::TerminalNode* FINAL(size_t i);

   
  };

  Stored_definitionContext* stored_definition();

  class  Class_definitionContext : public antlr4::ParserRuleContext {
  public:
    Class_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Class_prefixesContext *class_prefixes();
    Class_specifierContext *class_specifier();
    antlr4::tree::TerminalNode *ENCAPSULATED();

   
  };

  Class_definitionContext* class_definition();

  class  Class_prefixesContext : public antlr4::ParserRuleContext {
  public:
    Class_prefixesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CLASS();
    antlr4::tree::TerminalNode *MODEL();
    antlr4::tree::TerminalNode *RECORD();
    antlr4::tree::TerminalNode *BLOCK();
    antlr4::tree::TerminalNode *CONNECTOR();
    antlr4::tree::TerminalNode *TYPE();
    antlr4::tree::TerminalNode *PACKAGE();
    antlr4::tree::TerminalNode *FUNCTION();
    antlr4::tree::TerminalNode *OPERATOR();
    antlr4::tree::TerminalNode *PARTIAL();
    antlr4::tree::TerminalNode *EXPANDABLE();
    antlr4::tree::TerminalNode *PURE();
    antlr4::tree::TerminalNode *IMPURE();

   
  };

  Class_prefixesContext* class_prefixes();

  class  IdContext : public antlr4::ParserRuleContext {
  public:
    IdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENT();

   
  };

  IdContext* id();

  class  Class_specifierContext : public antlr4::ParserRuleContext {
  public:
    Class_specifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Long_class_specifierContext *long_class_specifier();
    Short_class_specifierContext *short_class_specifier();
    Der_class_specifierContext *der_class_specifier();

   
  };

  Class_specifierContext* class_specifier();

  class  Long_class_specifierContext : public antlr4::ParserRuleContext {
  public:
    Long_class_specifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdContext *> id();
    IdContext* id(size_t i);
    String_commentContext *string_comment();
    CompositionContext *composition();
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *EXTENDS();
    Class_modificationContext *class_modification();

   
  };

  Long_class_specifierContext* long_class_specifier();

  class  Short_class_specifier_nameContext : public antlr4::ParserRuleContext {
  public:
    Short_class_specifier_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdContext *id();

   
  };

  Short_class_specifier_nameContext* short_class_specifier_name();

  class  Base_prefix_nameContext : public antlr4::ParserRuleContext {
  public:
    Base_prefix_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdContext *id();

   
  };

  Base_prefix_nameContext* base_prefix_name();

  class  Short_class_specifier_enumerationContext : public antlr4::ParserRuleContext {
  public:
    Short_class_specifier_enumerationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENUMERATION();

   
  };

  Short_class_specifier_enumerationContext* short_class_specifier_enumeration();

  class  Specifier_enumerationContext : public antlr4::ParserRuleContext {
  public:
    Specifier_enumerationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Short_class_specifier_nameContext *short_class_specifier_name();
    antlr4::tree::TerminalNode *ASSIGN();
    Short_class_specifier_enumerationContext *short_class_specifier_enumeration();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *COLON();
    Enum_listContext *enum_list();

   
  };

  Specifier_enumerationContext* specifier_enumeration();

  class  Base_prefix_specifierContext : public antlr4::ParserRuleContext {
  public:
    Base_prefix_specifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Base_prefix_nameContext *base_prefix_name();
    antlr4::tree::TerminalNode *ASSIGN();
    Base_prefixContext *base_prefix();
    Type_specifierContext *type_specifier();
    Array_subscriptsContext *array_subscripts();
    Class_modification1Context *class_modification1();

   
  };

  Base_prefix_specifierContext* base_prefix_specifier();

  class  Short_class_specifierContext : public antlr4::ParserRuleContext {
  public:
    Short_class_specifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CommentContext *comment();
    Base_prefix_specifierContext *base_prefix_specifier();
    Specifier_enumerationContext *specifier_enumeration();

   
  };

  Short_class_specifierContext* short_class_specifier();

  class  Der_class_specifierContext : public antlr4::ParserRuleContext {
  public:
    Der_class_specifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdContext *> id();
    IdContext* id(size_t i);
    antlr4::tree::TerminalNode *ASSIGN();
    antlr4::tree::TerminalNode *DER();
    antlr4::tree::TerminalNode *LPAREN();
    Type_specifierContext *type_specifier();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *RPAREN();
    CommentContext *comment();

   
  };

  Der_class_specifierContext* der_class_specifier();

  class  Base_prefixContext : public antlr4::ParserRuleContext {
  public:
    Base_prefixContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INPUT();
    antlr4::tree::TerminalNode *OUTPUT();

   
  };

  Base_prefixContext* base_prefix();

  class  Enum_listContext : public antlr4::ParserRuleContext {
  public:
    Enum_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Enumeration_literalContext *> enumeration_literal();
    Enumeration_literalContext* enumeration_literal(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

   
  };

  Enum_listContext* enum_list();

  class  Enumeration_option_nameContext : public antlr4::ParserRuleContext {
  public:
    Enumeration_option_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdContext *id();

   
  };

  Enumeration_option_nameContext* enumeration_option_name();

  class  Enumeration_literalContext : public antlr4::ParserRuleContext {
  public:
    Enumeration_literalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Enumeration_option_nameContext *enumeration_option_name();
    CommentContext *comment();

   
  };

  Enumeration_literalContext* enumeration_literal();

  class  Action_scopeContext : public antlr4::ParserRuleContext {
  public:
    Action_scopeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PUBLIC();
    antlr4::tree::TerminalNode *PROTECTED();

   
  };

  Action_scopeContext* action_scope();

  class  CompositionContext : public antlr4::ParserRuleContext {
  public:
    CompositionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Element_listContext *> element_list();
    Element_listContext* element_list(size_t i);
    std::vector<Action_scopeContext *> action_scope();
    Action_scopeContext* action_scope(size_t i);
    std::vector<Equation_sectionContext *> equation_section();
    Equation_sectionContext* equation_section(size_t i);
    std::vector<Algorithm_sectionContext *> algorithm_section();
    Algorithm_sectionContext* algorithm_section(size_t i);
    antlr4::tree::TerminalNode *EXTERNAL();
    std::vector<antlr4::tree::TerminalNode *> SEMI();
    antlr4::tree::TerminalNode* SEMI(size_t i);
    std::vector<Annotation_commentContext *> annotation_comment();
    Annotation_commentContext* annotation_comment(size_t i);
    Language_specificationContext *language_specification();
    External_function_callContext *external_function_call();

   
  };

  CompositionContext* composition();

  class  Language_specificationContext : public antlr4::ParserRuleContext {
  public:
    Language_specificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING();

   
  };

  Language_specificationContext* language_specification();

  class  External_function_callContext : public antlr4::ParserRuleContext {
  public:
    External_function_callContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdContext *id();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    Component_referenceContext *component_reference();
    antlr4::tree::TerminalNode *ASSIGN();
    Expression_listContext *expression_list();

   
  };

  External_function_callContext* external_function_call();

  class  Element_listContext : public antlr4::ParserRuleContext {
  public:
    Element_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ElementContext *> element();
    ElementContext* element(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMI();
    antlr4::tree::TerminalNode* SEMI(size_t i);

   
  };

  Element_listContext* element_list();

  class  ElementContext : public antlr4::ParserRuleContext {
  public:
    ElementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Import_clauseContext *import_clause();
    Extends_clauseContext *extends_clause();
    Class_definitionContext *class_definition();
    Component_clauseContext *component_clause();
    antlr4::tree::TerminalNode *REPLACEABLE();
    antlr4::tree::TerminalNode *REDECLARE();
    antlr4::tree::TerminalNode *FINAL();
    antlr4::tree::TerminalNode *INNER();
    antlr4::tree::TerminalNode *OUTER();
    Constraining_clauseContext *constraining_clause();
    CommentContext *comment();

   
  };

  ElementContext* element();

  class  Import_clauseContext : public antlr4::ParserRuleContext {
  public:
    Import_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IMPORT();
    CommentContext *comment();
    IdContext *id();
    antlr4::tree::TerminalNode *ASSIGN();
    NameContext *name();
    antlr4::tree::TerminalNode *DOT();
    antlr4::tree::TerminalNode *DOT_MUL();
    antlr4::tree::TerminalNode *MUL();
    antlr4::tree::TerminalNode *LBRACE();
    Import_listContext *import_list();
    antlr4::tree::TerminalNode *RBRACE();

   
  };

  Import_clauseContext* import_clause();

  class  Import_listContext : public antlr4::ParserRuleContext {
  public:
    Import_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdContext *> id();
    IdContext* id(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

   
  };

  Import_listContext* import_list();

  class  Extends_clauseContext : public antlr4::ParserRuleContext {
  public:
    Extends_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXTENDS();
    Type_specifierContext *type_specifier();
    Class_modificationContext *class_modification();
    Annotation_commentContext *annotation_comment();

   
  };

  Extends_clauseContext* extends_clause();

  class  Constraining_clauseContext : public antlr4::ParserRuleContext {
  public:
    Constraining_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONSTRAINEDBY();
    Type_specifierContext *type_specifier();
    Class_modificationContext *class_modification();

   
  };

  Constraining_clauseContext* constraining_clause();

  class  Component_clauseContext : public antlr4::ParserRuleContext {
  public:
    Component_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Type_prefixContext *type_prefix();
    Type_specifierContext *type_specifier();
    Component_listContext *component_list();
    Array_subscriptsContext *array_subscripts();

   
  };

  Component_clauseContext* component_clause();

  class  Type_prefixContext : public antlr4::ParserRuleContext {
  public:
    Type_prefixContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FLOW();
    antlr4::tree::TerminalNode *STREAM();
    antlr4::tree::TerminalNode *DISCRETE();
    antlr4::tree::TerminalNode *PARAMETER();
    antlr4::tree::TerminalNode *CONSTANT();
    antlr4::tree::TerminalNode *INPUT();
    antlr4::tree::TerminalNode *OUTPUT();

   
  };

  Type_prefixContext* type_prefix();

  class  Component_listContext : public antlr4::ParserRuleContext {
  public:
    Component_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Component_declarationContext *> component_declaration();
    Component_declarationContext* component_declaration(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

   
  };

  Component_listContext* component_list();

  class  Component_declarationContext : public antlr4::ParserRuleContext {
  public:
    Component_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclarationContext *declaration();
    CommentContext *comment();
    Condition_attributeContext *condition_attribute();

   
  };

  Component_declarationContext* component_declaration();

  class  Condition_attributeContext : public antlr4::ParserRuleContext {
  public:
    Condition_attributeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    ExpressionContext *expression();

   
  };

  Condition_attributeContext* condition_attribute();

  class  Variable_nameContext : public antlr4::ParserRuleContext {
  public:
    Variable_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdContext *id();

   
  };

  Variable_nameContext* variable_name();

  class  DeclarationContext : public antlr4::ParserRuleContext {
  public:
    DeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Variable_nameContext *variable_name();
    Array_subscriptsContext *array_subscripts();
    ModificationContext *modification();
    Variable_characteristicContext *variable_characteristic();

   
  };

  DeclarationContext* declaration();

  class  Variable_characteristicContext : public antlr4::ParserRuleContext {
  public:
    Variable_characteristicContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Class_modification1Context *class_modification1();
    antlr4::tree::TerminalNode *ASSIGN();
    ExpressionContext *expression();

   
  };

  Variable_characteristicContext* variable_characteristic();

  class  ModificationContext : public antlr4::ParserRuleContext {
  public:
    ModificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASSIGN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *C_ASSIGN();

   
  };

  ModificationContext* modification();

  class  Class_modificationContext : public antlr4::ParserRuleContext {
  public:
    Class_modificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    Argument_listContext *argument_list();

   
  };

  Class_modificationContext* class_modification();

  class  Class_modification1Context : public antlr4::ParserRuleContext {
  public:
    Class_modification1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    Argument_listContext *argument_list();

   
  };

  Class_modification1Context* class_modification1();

  class  Argument_listContext : public antlr4::ParserRuleContext {
  public:
    Argument_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ArgumentContext *> argument();
    ArgumentContext* argument(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

   
  };

  Argument_listContext* argument_list();

  class  ArgumentContext : public antlr4::ParserRuleContext {
  public:
    ArgumentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Element_modification_or_replaceableContext *element_modification_or_replaceable();
    Element_redeclarationContext *element_redeclaration();

   
  };

  ArgumentContext* argument();

  class  Element_modification_or_replaceableContext : public antlr4::ParserRuleContext {
  public:
    Element_modification_or_replaceableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Element_modificationContext *element_modification();
    Element_replaceableContext *element_replaceable();
    antlr4::tree::TerminalNode *EACH();
    antlr4::tree::TerminalNode *FINAL();

   
  };

  Element_modification_or_replaceableContext* element_modification_or_replaceable();

  class  Variable_characteristic_modificationContext : public antlr4::ParserRuleContext {
  public:
    Variable_characteristic_modificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASSIGN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *C_ASSIGN();

   
  };

  Variable_characteristic_modificationContext* variable_characteristic_modification();

  class  Element_modificationContext : public antlr4::ParserRuleContext {
  public:
    Element_modificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameContext *name();
    String_commentContext *string_comment();
    Variable_characteristic_modificationContext *variable_characteristic_modification();

   
  };

  Element_modificationContext* element_modification();

  class  Element_redeclarationContext : public antlr4::ParserRuleContext {
  public:
    Element_redeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REDECLARE();
    Short_class_definitionContext *short_class_definition();
    Component_clause1Context *component_clause1();
    Element_replaceableContext *element_replaceable();
    antlr4::tree::TerminalNode *EACH();
    antlr4::tree::TerminalNode *FINAL();

   
  };

  Element_redeclarationContext* element_redeclaration();

  class  Element_replaceableContext : public antlr4::ParserRuleContext {
  public:
    Element_replaceableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REPLACEABLE();
    Short_class_definitionContext *short_class_definition();
    Component_clause1Context *component_clause1();
    Constraining_clauseContext *constraining_clause();

   
  };

  Element_replaceableContext* element_replaceable();

  class  Component_clause1Context : public antlr4::ParserRuleContext {
  public:
    Component_clause1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Type_prefixContext *type_prefix();
    Type_specifierContext *type_specifier();
    Component_declaration1Context *component_declaration1();

   
  };

  Component_clause1Context* component_clause1();

  class  Component_declaration1Context : public antlr4::ParserRuleContext {
  public:
    Component_declaration1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclarationContext *declaration();
    CommentContext *comment();

   
  };

  Component_declaration1Context* component_declaration1();

  class  Short_class_definitionContext : public antlr4::ParserRuleContext {
  public:
    Short_class_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Class_prefixesContext *class_prefixes();
    Short_class_specifierContext *short_class_specifier();

   
  };

  Short_class_definitionContext* short_class_definition();

  class  Equation_sectionContext : public antlr4::ParserRuleContext {
  public:
    Equation_sectionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEQUATION();
    antlr4::tree::TerminalNode *INITIAL();
    std::vector<EquationContext *> equation();
    EquationContext* equation(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMI();
    antlr4::tree::TerminalNode* SEMI(size_t i);

   
  };

  Equation_sectionContext* equation_section();

  class  Algorithm_sectionContext : public antlr4::ParserRuleContext {
  public:
    Algorithm_sectionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALGORITHM();
    antlr4::tree::TerminalNode *INITIAL();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMI();
    antlr4::tree::TerminalNode* SEMI(size_t i);

   
  };

  Algorithm_sectionContext* algorithm_section();

  class  EquationContext : public antlr4::ParserRuleContext {
  public:
    EquationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CommentContext *comment();
    Equation_valuation2Context *equation_valuation2();
    If_equationContext *if_equation();
    For_equationContext *for_equation();
    Connect_clauseContext *connect_clause();
    When_equationContext *when_equation();

   
  };

  EquationContext* equation();

  class  Equation_valuation2Context : public antlr4::ParserRuleContext {
  public:
    Equation_valuation2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Simple_expressionContext *simple_expression();
    antlr4::tree::TerminalNode *ASSIGN();
    ExpressionContext *expression();

   
  };

  Equation_valuation2Context* equation_valuation2();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CommentContext *comment();
    Equation_valuationContext *equation_valuation();
    antlr4::tree::TerminalNode *LPAREN();
    Output_expression_listContext *output_expression_list();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *C_ASSIGN();
    Component_referenceContext *component_reference();
    Function_call_argsContext *function_call_args();
    antlr4::tree::TerminalNode *BREAK();
    antlr4::tree::TerminalNode *RETURN();
    If_statementContext *if_statement();
    For_statementContext *for_statement();
    While_statementContext *while_statement();
    When_statementContext *when_statement();

   
  };

  StatementContext* statement();

  class  Equation_valuationContext : public antlr4::ParserRuleContext {
  public:
    Equation_valuationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Component_referenceContext *component_reference();
    antlr4::tree::TerminalNode *C_ASSIGN();
    ExpressionContext *expression();
    Function_call_argsContext *function_call_args();

   
  };

  Equation_valuationContext* equation_valuation();

  class  If_equationContext : public antlr4::ParserRuleContext {
  public:
    If_equationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> IF();
    antlr4::tree::TerminalNode* IF(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> THEN();
    antlr4::tree::TerminalNode* THEN(size_t i);
    antlr4::tree::TerminalNode *END();
    std::vector<EquationContext *> equation();
    EquationContext* equation(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMI();
    antlr4::tree::TerminalNode* SEMI(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ELSEIF();
    antlr4::tree::TerminalNode* ELSEIF(size_t i);
    antlr4::tree::TerminalNode *ELSE();

   
  };

  If_equationContext* if_equation();

  class  If_statementContext : public antlr4::ParserRuleContext {
  public:
    If_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> IF();
    antlr4::tree::TerminalNode* IF(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> THEN();
    antlr4::tree::TerminalNode* THEN(size_t i);
    antlr4::tree::TerminalNode *END();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMI();
    antlr4::tree::TerminalNode* SEMI(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ELSEIF();
    antlr4::tree::TerminalNode* ELSEIF(size_t i);
    antlr4::tree::TerminalNode *ELSE();

   
  };

  If_statementContext* if_statement();

  class  For_equationContext : public antlr4::ParserRuleContext {
  public:
    For_equationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> FOR();
    antlr4::tree::TerminalNode* FOR(size_t i);
    For_indicesContext *for_indices();
    antlr4::tree::TerminalNode *LOOP();
    antlr4::tree::TerminalNode *END();
    std::vector<EquationContext *> equation();
    EquationContext* equation(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMI();
    antlr4::tree::TerminalNode* SEMI(size_t i);

   
  };

  For_equationContext* for_equation();

  class  For_statementContext : public antlr4::ParserRuleContext {
  public:
    For_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> FOR();
    antlr4::tree::TerminalNode* FOR(size_t i);
    For_indicesContext *for_indices();
    antlr4::tree::TerminalNode *LOOP();
    antlr4::tree::TerminalNode *END();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMI();
    antlr4::tree::TerminalNode* SEMI(size_t i);

   
  };

  For_statementContext* for_statement();

  class  For_indicesContext : public antlr4::ParserRuleContext {
  public:
    For_indicesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<For_indexContext *> for_index();
    For_indexContext* for_index(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

   
  };

  For_indicesContext* for_indices();

  class  For_indexContext : public antlr4::ParserRuleContext {
  public:
    For_indexContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdContext *id();
    antlr4::tree::TerminalNode *IN();
    For_rangeContext *for_range();

   
  };

  For_indexContext* for_index();

  class  For_rangeContext : public antlr4::ParserRuleContext {
  public:
    For_rangeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();

   
  };

  For_rangeContext* for_range();

  class  While_statementContext : public antlr4::ParserRuleContext {
  public:
    While_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> WHILE();
    antlr4::tree::TerminalNode* WHILE(size_t i);
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *LOOP();
    antlr4::tree::TerminalNode *END();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMI();
    antlr4::tree::TerminalNode* SEMI(size_t i);

   
  };

  While_statementContext* while_statement();

  class  When_equationContext : public antlr4::ParserRuleContext {
  public:
    When_equationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> WHEN();
    antlr4::tree::TerminalNode* WHEN(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> THEN();
    antlr4::tree::TerminalNode* THEN(size_t i);
    antlr4::tree::TerminalNode *END();
    std::vector<EquationContext *> equation();
    EquationContext* equation(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMI();
    antlr4::tree::TerminalNode* SEMI(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ELSEWHEN();
    antlr4::tree::TerminalNode* ELSEWHEN(size_t i);

   
  };

  When_equationContext* when_equation();

  class  When_statementContext : public antlr4::ParserRuleContext {
  public:
    When_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> WHEN();
    antlr4::tree::TerminalNode* WHEN(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> THEN();
    antlr4::tree::TerminalNode* THEN(size_t i);
    antlr4::tree::TerminalNode *END();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMI();
    antlr4::tree::TerminalNode* SEMI(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ELSEWHEN();
    antlr4::tree::TerminalNode* ELSEWHEN(size_t i);

   
  };

  When_statementContext* when_statement();

  class  Connect_clauseContext : public antlr4::ParserRuleContext {
  public:
    Connect_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONNECT();
    antlr4::tree::TerminalNode *LPAREN();
    std::vector<Component_referenceContext *> component_reference();
    Component_referenceContext* component_reference(size_t i);
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *RPAREN();

   
  };

  Connect_clauseContext* connect_clause();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Simple_expressionContext *simple_expression();
    antlr4::tree::TerminalNode *IF();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> THEN();
    antlr4::tree::TerminalNode* THEN(size_t i);
    antlr4::tree::TerminalNode *ELSE();
    std::vector<antlr4::tree::TerminalNode *> ELSEIF();
    antlr4::tree::TerminalNode* ELSEIF(size_t i);

   
  };

  ExpressionContext* expression();

  class  Simple_expressionContext : public antlr4::ParserRuleContext {
  public:
    Simple_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Logical_expressionContext *> logical_expression();
    Logical_expressionContext* logical_expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COLON();
    antlr4::tree::TerminalNode* COLON(size_t i);

   
  };

  Simple_expressionContext* simple_expression();

  class  Logical_expressionContext : public antlr4::ParserRuleContext {
  public:
    Logical_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Logical_termContext *> logical_term();
    Logical_termContext* logical_term(size_t i);
    std::vector<antlr4::tree::TerminalNode *> OR();
    antlr4::tree::TerminalNode* OR(size_t i);

   
  };

  Logical_expressionContext* logical_expression();

  class  Logical_termContext : public antlr4::ParserRuleContext {
  public:
    Logical_termContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Logical_factorContext *> logical_factor();
    Logical_factorContext* logical_factor(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AND();
    antlr4::tree::TerminalNode* AND(size_t i);

   
  };

  Logical_termContext* logical_term();

  class  Logical_factorContext : public antlr4::ParserRuleContext {
  public:
    Logical_factorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RelationContext *relation();
    antlr4::tree::TerminalNode *NOT();

   
  };

  Logical_factorContext* logical_factor();

  class  RelationContext : public antlr4::ParserRuleContext {
  public:
    RelationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Arithmetic_expressionContext *arithmetic_expression();
    If_relationContext *if_relation();

   
  };

  RelationContext* relation();

  class  If_relationContext : public antlr4::ParserRuleContext {
  public:
    If_relationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Arithmetic_expressionContext *> arithmetic_expression();
    Arithmetic_expressionContext* arithmetic_expression(size_t i);
    Relational_operatorContext *relational_operator();

   
  };

  If_relationContext* if_relation();

  class  Relational_operatorContext : public antlr4::ParserRuleContext {
  public:
    Relational_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LT();
    antlr4::tree::TerminalNode *LE();
    antlr4::tree::TerminalNode *GT();
    antlr4::tree::TerminalNode *GE();
    antlr4::tree::TerminalNode *EQ();
    antlr4::tree::TerminalNode *L_OP();

   
  };

  Relational_operatorContext* relational_operator();

  class  Arithmetic_expressionContext : public antlr4::ParserRuleContext {
  public:
    Arithmetic_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TermContext *> term();
    TermContext* term(size_t i);
    std::vector<Add_operatorContext *> add_operator();
    Add_operatorContext* add_operator(size_t i);

   
  };

  Arithmetic_expressionContext* arithmetic_expression();

  class  Add_operatorContext : public antlr4::ParserRuleContext {
  public:
    Add_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *SUB();
    antlr4::tree::TerminalNode *DOT_ADD();
    antlr4::tree::TerminalNode *DOT_SUB();

   
  };

  Add_operatorContext* add_operator();

  class  TermContext : public antlr4::ParserRuleContext {
  public:
    TermContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<FactorContext *> factor();
    FactorContext* factor(size_t i);
    std::vector<Mul_operatorContext *> mul_operator();
    Mul_operatorContext* mul_operator(size_t i);

   
  };

  TermContext* term();

  class  Mul_operatorContext : public antlr4::ParserRuleContext {
  public:
    Mul_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MUL();
    antlr4::tree::TerminalNode *DIV();
    antlr4::tree::TerminalNode *DOT_MUL();
    antlr4::tree::TerminalNode *DOT_DIV();

   
  };

  Mul_operatorContext* mul_operator();

  class  FactorContext : public antlr4::ParserRuleContext {
  public:
    FactorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<PrimaryContext *> primary();
    PrimaryContext* primary(size_t i);
    antlr4::tree::TerminalNode *POWER();
    antlr4::tree::TerminalNode *DOT_P();

   
  };

  FactorContext* factor();

  class  NumberContext : public antlr4::ParserRuleContext {
  public:
    NumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNSIGNED_NUMBER();

   
  };

  NumberContext* number();

  class  StringContext : public antlr4::ParserRuleContext {
  public:
    StringContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING();

   
  };

  StringContext* string();

  class  Boolean_myContext : public antlr4::ParserRuleContext {
  public:
    Boolean_myContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FALSE();
    antlr4::tree::TerminalNode *TRUE();

   
  };

  Boolean_myContext* boolean_my();

  class  PrimaryContext : public antlr4::ParserRuleContext {
  public:
    PrimaryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NumberContext *number();
    StringContext *string();
    Boolean_myContext *boolean_my();
    Function_call_argsContext *function_call_args();
    antlr4::tree::TerminalNode *DER();
    antlr4::tree::TerminalNode *INITIAL();
    antlr4::tree::TerminalNode *PURE();
    Component_referenceContext *component_reference();
    Function_callContext *function_call();
    antlr4::tree::TerminalNode *LPAREN();
    Output_expression_listContext *output_expression_list();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *LBRACKET();
    std::vector<Expression_listContext *> expression_list();
    Expression_listContext* expression_list(size_t i);
    antlr4::tree::TerminalNode *RBRACKET();
    std::vector<antlr4::tree::TerminalNode *> SEMI();
    antlr4::tree::TerminalNode* SEMI(size_t i);
    antlr4::tree::TerminalNode *LBRACE();
    Array_argumentsContext *array_arguments();
    antlr4::tree::TerminalNode *RBRACE();
    antlr4::tree::TerminalNode *END();

   
  };

  PrimaryContext* primary();

  class  Function_callContext : public antlr4::ParserRuleContext {
  public:
    Function_callContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Component_referenceContext *component_reference();
    Function_call_argsContext *function_call_args();

   
  };

  Function_callContext* function_call();

  class  Type_specifierContext : public antlr4::ParserRuleContext {
  public:
    Type_specifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Type_specifier_nameContext *type_specifier_name();
    antlr4::tree::TerminalNode *DOT();

   
  };

  Type_specifierContext* type_specifier();

  class  Type_specifier_nameContext : public antlr4::ParserRuleContext {
  public:
    Type_specifier_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdContext *> id();
    IdContext* id(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);

   
  };

  Type_specifier_nameContext* type_specifier_name();

  class  NameContext : public antlr4::ParserRuleContext {
  public:
    NameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdContext *> id();
    IdContext* id(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);

   
  };

  NameContext* name();

  class  Component_referenceContext : public antlr4::ParserRuleContext {
  public:
    Component_referenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdContext *> id();
    IdContext* id(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);
    std::vector<Array_subscriptsContext *> array_subscripts();
    Array_subscriptsContext* array_subscripts(size_t i);

   
  };

  Component_referenceContext* component_reference();

  class  Function_call_argsContext : public antlr4::ParserRuleContext {
  public:
    Function_call_argsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    Function_argumentsContext *function_arguments();

   
  };

  Function_call_argsContext* function_call_args();

  class  Function_argumentsContext : public antlr4::ParserRuleContext {
  public:
    Function_argumentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *COMMA();
    Function_arguments_non_firstContext *function_arguments_non_first();
    antlr4::tree::TerminalNode *FOR();
    For_indicesContext *for_indices();
    Function_partial_applicationContext *function_partial_application();
    Named_argumentsContext *named_arguments();

   
  };

  Function_argumentsContext* function_arguments();

  class  Function_arguments_non_firstContext : public antlr4::ParserRuleContext {
  public:
    Function_arguments_non_firstContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Function_argumentContext *function_argument();
    antlr4::tree::TerminalNode *COMMA();
    Function_arguments_non_firstContext *function_arguments_non_first();
    Named_argumentsContext *named_arguments();

   
  };

  Function_arguments_non_firstContext* function_arguments_non_first();

  class  Array_argumentsContext : public antlr4::ParserRuleContext {
  public:
    Array_argumentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *FOR();
    For_indicesContext *for_indices();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

   
  };

  Array_argumentsContext* array_arguments();

  class  Named_argumentsContext : public antlr4::ParserRuleContext {
  public:
    Named_argumentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Named_argumentContext *> named_argument();
    Named_argumentContext* named_argument(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

   
  };

  Named_argumentsContext* named_arguments();

  class  Named_argumentContext : public antlr4::ParserRuleContext {
  public:
    Named_argumentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdContext *id();
    antlr4::tree::TerminalNode *ASSIGN();
    Function_argumentContext *function_argument();

   
  };

  Named_argumentContext* named_argument();

  class  Function_argumentContext : public antlr4::ParserRuleContext {
  public:
    Function_argumentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Function_partial_applicationContext *function_partial_application();
    ExpressionContext *expression();

   
  };

  Function_argumentContext* function_argument();

  class  Function_partial_applicationContext : public antlr4::ParserRuleContext {
  public:
    Function_partial_applicationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FUNCTION();
    Type_specifierContext *type_specifier();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    Named_argumentsContext *named_arguments();

   
  };

  Function_partial_applicationContext* function_partial_application();

  class  Output_expression_listContext : public antlr4::ParserRuleContext {
  public:
    Output_expression_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

   
  };

  Output_expression_listContext* output_expression_list();

  class  Expression_listContext : public antlr4::ParserRuleContext {
  public:
    Expression_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

   
  };

  Expression_listContext* expression_list();

  class  Array_subscriptsContext : public antlr4::ParserRuleContext {
  public:
    Array_subscriptsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LBRACKET();
    std::vector<SubscriptContext *> subscript();
    SubscriptContext* subscript(size_t i);
    antlr4::tree::TerminalNode *RBRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

   
  };

  Array_subscriptsContext* array_subscripts();

  class  SubscriptContext : public antlr4::ParserRuleContext {
  public:
    SubscriptContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COLON();
    ExpressionContext *expression();

   
  };

  SubscriptContext* subscript();

  class  CommentContext : public antlr4::ParserRuleContext {
  public:
    CommentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    String_commentContext *string_comment();
    Annotation_commentContext *annotation_comment();

   
  };

  CommentContext* comment();

  class  String_commentContext : public antlr4::ParserRuleContext {
  public:
    String_commentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> STRING();
    antlr4::tree::TerminalNode* STRING(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ADD();
    antlr4::tree::TerminalNode* ADD(size_t i);

   
  };

  String_commentContext* string_comment();

  class  Annotation_commentContext : public antlr4::ParserRuleContext {
  public:
    Annotation_commentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ANNOTATION();
    Class_modificationContext *class_modification();

   
  };

  Annotation_commentContext* annotation_comment();


private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

