#pragma once

#include "modelicaBaseVisitor.h"
#include "antlr4-runtime.h"
#include "AST.h"
#include "Type.h"
#include <memory>

namespace modelica {

class ASTBuilder: public modelicaBaseVisitor {

private:
    std::vector<std::unique_ptr<Class_definitionAST>> Class_definitions;
    TypeContext &TyCtx;
    

public:
    ASTBuilder(TypeContext &TyCtx): TyCtx(TyCtx) {}
    std::unique_ptr<Stored_definitionAST> build(modelicaParser::Stored_definitionContext *Ctx);


  virtual antlrcpp::Any visitStored_definition(modelicaParser::Stored_definitionContext *Ctx);

  // virtual antlrcpp::Any visitClass_definition(modelicaParser::Class_definitionContext *Ctx);

  virtual antlrcpp::Any visitClass_prefixes(modelicaParser::Class_prefixesContext *Ctx);

  virtual antlrcpp::Any visitClass_specifier(modelicaParser::Class_specifierContext *Ctx);

  virtual antlrcpp::Any visitLong_class_specifier(modelicaParser::Long_class_specifierContext *Ctx);

  virtual antlrcpp::Any visitShort_class_specifier_name(modelicaParser::Short_class_specifier_nameContext *Ctx);

  virtual antlrcpp::Any visitBase_prefix_name(modelicaParser::Base_prefix_nameContext *Ctx);

  virtual antlrcpp::Any visitShort_class_specifier_enumeration(modelicaParser::Short_class_specifier_enumerationContext *Ctx);

  virtual antlrcpp::Any visitSpecifier_enumeration(modelicaParser::Specifier_enumerationContext *Ctx);

  virtual antlrcpp::Any visitBase_prefix_specifier(modelicaParser::Base_prefix_specifierContext *Ctx);

  virtual antlrcpp::Any visitShort_class_specifier(modelicaParser::Short_class_specifierContext *Ctx);

  virtual antlrcpp::Any visitDer_class_specifier(modelicaParser::Der_class_specifierContext *Ctx);

  virtual antlrcpp::Any visitBase_prefix(modelicaParser::Base_prefixContext *Ctx);

  virtual antlrcpp::Any visitEnum_list(modelicaParser::Enum_listContext *Ctx);

  virtual antlrcpp::Any visitEnumeration_option_name(modelicaParser::Enumeration_option_nameContext *Ctx);

  virtual antlrcpp::Any visitEnumeration_literal(modelicaParser::Enumeration_literalContext *Ctx);

  virtual antlrcpp::Any visitAction_scope(modelicaParser::Action_scopeContext *Ctx);

  virtual antlrcpp::Any visitComposition(modelicaParser::CompositionContext *Ctx);

  virtual antlrcpp::Any visitLanguage_specification(modelicaParser::Language_specificationContext *Ctx);

  virtual antlrcpp::Any visitExternal_function_call(modelicaParser::External_function_callContext *Ctx);

  virtual antlrcpp::Any visitElement_list(modelicaParser::Element_listContext *Ctx);

  virtual antlrcpp::Any visitElement(modelicaParser::ElementContext *Ctx);

  virtual antlrcpp::Any visitImport_clause(modelicaParser::Import_clauseContext *Ctx);

  virtual antlrcpp::Any visitImport_list(modelicaParser::Import_listContext *Ctx);

  virtual antlrcpp::Any visitExtends_clause(modelicaParser::Extends_clauseContext *Ctx);

  virtual antlrcpp::Any visitConstraining_clause(modelicaParser::Constraining_clauseContext *Ctx);

  virtual antlrcpp::Any visitComponent_clause(modelicaParser::Component_clauseContext *Ctx);

  virtual antlrcpp::Any visitType_prefix(modelicaParser::Type_prefixContext *Ctx);

  virtual antlrcpp::Any visitComponent_list(modelicaParser::Component_listContext *Ctx);

  virtual antlrcpp::Any visitComponent_declaration(modelicaParser::Component_declarationContext *Ctx);

  virtual antlrcpp::Any visitCondition_attribute(modelicaParser::Condition_attributeContext *Ctx);

  virtual antlrcpp::Any visitVariable_name(modelicaParser::Variable_nameContext *Ctx);

  virtual antlrcpp::Any visitDeclaration(modelicaParser::DeclarationContext *Ctx);

  virtual antlrcpp::Any visitVariable_characteristic(modelicaParser::Variable_characteristicContext *Ctx);

  virtual antlrcpp::Any visitModification(modelicaParser::ModificationContext *Ctx);

  virtual antlrcpp::Any visitClass_modification(modelicaParser::Class_modificationContext *Ctx);

  virtual antlrcpp::Any visitClass_modification1(modelicaParser::Class_modification1Context *Ctx);

  virtual antlrcpp::Any visitArgument_list(modelicaParser::Argument_listContext *Ctx);

  virtual antlrcpp::Any visitArgument(modelicaParser::ArgumentContext *Ctx);

  virtual antlrcpp::Any visitElement_modification_or_replaceable(modelicaParser::Element_modification_or_replaceableContext *Ctx);

  virtual antlrcpp::Any visitVariable_characteristic_modification(modelicaParser::Variable_characteristic_modificationContext *Ctx);

  virtual antlrcpp::Any visitElement_modification(modelicaParser::Element_modificationContext *Ctx);

  virtual antlrcpp::Any visitElement_redeclaration(modelicaParser::Element_redeclarationContext *Ctx);

  virtual antlrcpp::Any visitElement_replaceable(modelicaParser::Element_replaceableContext *Ctx);

  virtual antlrcpp::Any visitComponent_clause1(modelicaParser::Component_clause1Context *Ctx);

  virtual antlrcpp::Any visitComponent_declaration1(modelicaParser::Component_declaration1Context *Ctx);

  virtual antlrcpp::Any visitShort_class_definition(modelicaParser::Short_class_definitionContext *Ctx);

  virtual antlrcpp::Any visitEquation_section(modelicaParser::Equation_sectionContext *Ctx);

  virtual antlrcpp::Any visitAlgorithm_section(modelicaParser::Algorithm_sectionContext *Ctx);

  virtual antlrcpp::Any visitEquation(modelicaParser::EquationContext *Ctx);

  virtual antlrcpp::Any visitEquation_valuation2(modelicaParser::Equation_valuation2Context *Ctx);

  virtual antlrcpp::Any visitStatement(modelicaParser::StatementContext *Ctx);

  virtual antlrcpp::Any visitEquation_valuation(modelicaParser::Equation_valuationContext *Ctx);

  virtual antlrcpp::Any visitIf_equation(modelicaParser::If_equationContext *Ctx);

  virtual antlrcpp::Any visitIf_statement(modelicaParser::If_statementContext *Ctx);

  virtual antlrcpp::Any visitFor_equation(modelicaParser::For_equationContext *Ctx);

  virtual antlrcpp::Any visitFor_statement(modelicaParser::For_statementContext *Ctx);

  virtual antlrcpp::Any visitFor_indices(modelicaParser::For_indicesContext *Ctx);

  virtual antlrcpp::Any visitFor_index(modelicaParser::For_indexContext *Ctx);

  virtual antlrcpp::Any visitFor_range(modelicaParser::For_rangeContext *Ctx);

  virtual antlrcpp::Any visitWhile_statement(modelicaParser::While_statementContext *Ctx);

  virtual antlrcpp::Any visitWhen_equation(modelicaParser::When_equationContext *Ctx);

  virtual antlrcpp::Any visitWhen_statement(modelicaParser::When_statementContext *Ctx);

  virtual antlrcpp::Any visitConnect_clause(modelicaParser::Connect_clauseContext *Ctx);

  virtual antlrcpp::Any visitExpression(modelicaParser::ExpressionContext *Ctx);

  virtual antlrcpp::Any visitSimple_expression(modelicaParser::Simple_expressionContext *Ctx);

  virtual antlrcpp::Any visitLogical_expression(modelicaParser::Logical_expressionContext *Ctx);

  virtual antlrcpp::Any visitLogical_term(modelicaParser::Logical_termContext *Ctx);

  virtual antlrcpp::Any visitLogical_factor(modelicaParser::Logical_factorContext *Ctx);

  virtual antlrcpp::Any visitRelation(modelicaParser::RelationContext *Ctx);

  virtual antlrcpp::Any visitIf_relation(modelicaParser::If_relationContext *Ctx);

  virtual antlrcpp::Any visitRelational_operator(modelicaParser::Relational_operatorContext *Ctx);

  virtual antlrcpp::Any visitArithmetic_expression(modelicaParser::Arithmetic_expressionContext *Ctx);

  virtual antlrcpp::Any visitAdd_operator(modelicaParser::Add_operatorContext *Ctx);

  virtual antlrcpp::Any visitTerm(modelicaParser::TermContext *Ctx);

  virtual antlrcpp::Any visitMul_operator(modelicaParser::Mul_operatorContext *Ctx);

  virtual antlrcpp::Any visitFactor(modelicaParser::FactorContext *Ctx);

  virtual antlrcpp::Any visitNumber(modelicaParser::NumberContext *Ctx);

  virtual antlrcpp::Any visitString(modelicaParser::StringContext *Ctx);

  virtual antlrcpp::Any visitBoolean_my(modelicaParser::Boolean_myContext *Ctx);

  virtual antlrcpp::Any visitPrimary(modelicaParser::PrimaryContext *Ctx);

  virtual antlrcpp::Any visitFunction_call(modelicaParser::Function_callContext *Ctx);

  virtual antlrcpp::Any visitType_specifier(modelicaParser::Type_specifierContext *Ctx);

  virtual antlrcpp::Any visitType_specifier_name(modelicaParser::Type_specifier_nameContext *Ctx);

  virtual antlrcpp::Any visitName(modelicaParser::NameContext *Ctx);

  virtual antlrcpp::Any visitComponent_reference(modelicaParser::Component_referenceContext *Ctx);

  virtual antlrcpp::Any visitFunction_call_args(modelicaParser::Function_call_argsContext *Ctx);

  virtual antlrcpp::Any visitFunction_arguments(modelicaParser::Function_argumentsContext *Ctx);

  virtual antlrcpp::Any visitFunction_arguments_non_first(modelicaParser::Function_arguments_non_firstContext *Ctx);

  virtual antlrcpp::Any visitArray_arguments(modelicaParser::Array_argumentsContext *Ctx);

  virtual antlrcpp::Any visitNamed_arguments(modelicaParser::Named_argumentsContext *Ctx);

  virtual antlrcpp::Any visitNamed_argument(modelicaParser::Named_argumentContext *Ctx);

  virtual antlrcpp::Any visitFunction_argument(modelicaParser::Function_argumentContext *Ctx);

  virtual antlrcpp::Any visitFunction_partial_application(modelicaParser::Function_partial_applicationContext *Ctx);

  virtual antlrcpp::Any visitOutput_expression_list(modelicaParser::Output_expression_listContext *Ctx);

  virtual antlrcpp::Any visitExpression_list(modelicaParser::Expression_listContext *Ctx);

  virtual antlrcpp::Any visitArray_subscripts(modelicaParser::Array_subscriptsContext *Ctx);

  virtual antlrcpp::Any visitSubscript(modelicaParser::SubscriptContext *Ctx);

  virtual antlrcpp::Any visitComment(modelicaParser::CommentContext *Ctx);

  virtual antlrcpp::Any visitString_comment(modelicaParser::String_commentContext *Ctx);

  virtual antlrcpp::Any visitAnnotation_comment(modelicaParser::Annotation_commentContext *Ctx);

  virtual antlrcpp::Any visitId(modelicaParser::IdContext *Ctx);

private:
    std::unique_ptr<Class_definitionAST>
    visitClass_definitions(modelicaParser::Class_definitionContext *Ctx);
};

}  // namespace modelica
