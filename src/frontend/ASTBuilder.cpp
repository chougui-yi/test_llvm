#include "ASTBuilder.h"
#include "AST.h"


namespace modelica {

// helper functions for error handling.
void LogError(const char *Str) {
    fprintf(stderr, "Error: %s\n", Str);
}

static std::unique_ptr<Class_definitionAST> visitedClass_definitionStmt = nullptr;
static std::unique_ptr<Class_prefixesAST> visitedClass_prefixesStmt = nullptr;
static std::unique_ptr<Long_Class_specifierAST> visitedLong_Class_specifierStmt = nullptr;
static std::unique_ptr<String_commentAST> visitedString_commentStmt = nullptr;
static std::unique_ptr<CompositionAST> visitedCompositionStmt = nullptr;
static std::unique_ptr<Element_listAST> visitedElement_listStmt = nullptr;
static std::unique_ptr<Equation_sectionAST> visitedEquation_sectionStmt = nullptr;
static std::unique_ptr<ElementAST> visitedElementStmt = nullptr;
static std::unique_ptr<Type_prefixAST> visitedType_prefixStmt = nullptr;
static std::unique_ptr<Type_specifier_nameAST> visitedType_specifier_nameStmt = nullptr;
static std::unique_ptr<Component_declarationAST> visitedComponent_declarationStmt = nullptr;
static std::unique_ptr<Variable_nameAST> visitedVariable_nameStmt = nullptr;
static std::unique_ptr<EquationAST> visitedEquationStmt = nullptr;
static std::unique_ptr<Equation_valuation2AST> visitedEquation_valuation2Stmt = nullptr;
static std::unique_ptr<Simple_expressionAST> visitedSimple_expressionStmt = nullptr;
static std::unique_ptr<ExpressionAST> visitedExpressionStmt = nullptr;
static std::unique_ptr<Arithmetic_expressionAST> visitedArithmetic_expressionStmt = nullptr;
static std::unique_ptr<NumberExprAST> visitedNumberExprStmt = nullptr;
static std::unique_ptr<Component_referenceAST> visitedComponent_referenceStmt = nullptr;
static std::unique_ptr<Function_call_argsAST> visitedFunction_call_argsStmt = nullptr;

static bool exprIsLValue = false;

std::unique_ptr<Stored_definitionAST> ASTBuilder::build(modelicaParser::Stored_definitionContext *Ctx) {
    return std::move(visitStored_definition(Ctx).as<std::unique_ptr<Stored_definitionAST>>());
}

antlrcpp::Any
ASTBuilder::ASTBuilder::visitStored_definition(modelicaParser::Stored_definitionContext *Ctx) {
    std::vector<std::unique_ptr<Class_definitionAST>> Class_definitions;
    for (auto *ClassCtx : Ctx->class_definition()) {
        visit(ClassCtx);
        Class_definitions.push_back(std::move(visitedClass_definitionStmt));
    }
    return std::make_unique<Stored_definitionAST>(std::move(Class_definitions));
}

antlrcpp::Any
ASTBuilder::ASTBuilder::visitClass_definition(modelicaParser::Class_definitionContext *Ctx) {
    if(Ctx->ENCAPSULATED()){
        std::string S = Ctx->ENCAPSULATED()->getText();
    }
    visit(Ctx->class_prefixes());
    std::unique_ptr<Class_prefixesAST> Class_pre = std::move(visitedClass_prefixesStmt);
    visit(Ctx->class_specifier()->long_class_specifier());
    std::unique_ptr<Long_Class_specifierAST> Long_Class_spec = std::move(visitedLong_Class_specifierStmt);
    visitedClass_definitionStmt = std::make_unique<Class_definitionAST>(
        SourceLocation {Ctx->getStart()->getLine(),
                        Ctx->getStart()->getCharPositionInLine()}, 
                        std::move(Class_pre), std::move(Long_Class_spec));
    return nullptr;
}

antlrcpp::Any
ASTBuilder::visitClass_prefixes(modelicaParser::Class_prefixesContext *Ctx) {
    std::string ModelType = Ctx->MODEL()->getText();
    visitedClass_prefixesStmt = std::make_unique<Class_prefixesAST>(
        SourceLocation {Ctx->getStart()->getLine(),
                        Ctx->getStart()->getCharPositionInLine()}, ModelType);
    return nullptr;
}

antlrcpp::Any
ASTBuilder::visitClass_specifier(modelicaParser::Class_specifierContext *Ctx) {
    visit(Ctx->long_class_specifier());

    return nullptr;
}

antlrcpp::Any
ASTBuilder::visitLong_class_specifier(modelicaParser::Long_class_specifierContext *Ctx) {
    std::string Modelname = Ctx->id(0)->IDENT()->getText();
    visit(Ctx->string_comment());
    std::unique_ptr<String_commentAST> String_com = std::move(visitedString_commentStmt);
    visit(Ctx->composition());
    std::unique_ptr<CompositionAST> Composition = std::move(visitedCompositionStmt);
    visitedLong_Class_specifierStmt = std::make_unique<Long_Class_specifierAST>(
        SourceLocation {Ctx->getStart()->getLine(),
                        Ctx->getStart()->getCharPositionInLine()}, Modelname,
                        std::move(String_com), std::move(Composition), Modelname);
    return nullptr;
}

antlrcpp::Any
ASTBuilder::visitShort_class_specifier(modelicaParser::Short_class_specifierContext *Ctx) {
    return nullptr;
}

antlrcpp::Any
ASTBuilder::visitShort_class_specifier_name(modelicaParser::Short_class_specifier_nameContext *Ctx) {
    visit(Ctx->id());
    return nullptr;
}

antlrcpp::Any
ASTBuilder::visitBase_prefix_name(modelicaParser::Base_prefix_nameContext *Ctx) {
    visit(Ctx->id());
    return nullptr;
}

antlrcpp::Any
ASTBuilder::visitShort_class_specifier_enumeration(modelicaParser::Short_class_specifier_enumerationContext *Ctx) {
    return nullptr;
}

antlrcpp::Any
ASTBuilder::visitSpecifier_enumeration(modelicaParser::Specifier_enumerationContext *Ctx) {

    return nullptr;
}

antlrcpp::Any
ASTBuilder::visitComposition(modelicaParser::CompositionContext *Ctx) {
    visit(Ctx->element_list(0));
    std::unique_ptr<Element_listAST> Element_lists = std::move(visitedElement_listStmt);
    visit(Ctx->equation_section(0));
    std::unique_ptr<Equation_sectionAST> Equation_sections = std::move(visitedEquation_sectionStmt);
    visitedCompositionStmt = std::make_unique<CompositionAST>(
        SourceLocation {Ctx->getStart()->getLine(),
                        Ctx->getStart()->getCharPositionInLine()}, 
                        std::move(Element_lists), std::move(Equation_sections));
    return nullptr;
}

antlrcpp::Any
ASTBuilder::visitElement_list(modelicaParser::Element_listContext *Ctx) {
    std::vector<std::unique_ptr<ElementAST>> Elements;
    for (std::size_t i = 0; i < Ctx->SEMI().size(); ++i) {
        auto *ElemCtx = Ctx->element(i);
        visit(ElemCtx);
        Elements.push_back(std::move(visitedElementStmt));
    }
    visitedElement_listStmt = std::make_unique<Element_listAST>(
        SourceLocation {Ctx->getStart()->getLine(),
                        Ctx->getStart()->getCharPositionInLine()}, 
                        std::move(Elements));
    return nullptr;
}


antlrcpp::Any
ASTBuilder::visitElement(modelicaParser::ElementContext *Ctx) {
    if(Ctx->import_clause()){
        visit(Ctx->import_clause());
    }else if (Ctx->extends_clause())
    {
        visit(Ctx->extends_clause());
    }else if (Ctx->class_definition())
    {
        visit(Ctx->class_definition());
    }else if (Ctx->component_clause())
    {
        visit(Ctx->component_clause());
    }else{
        visit(Ctx->constraining_clause());
        visit(Ctx->comment());
    }
    return nullptr;
}

antlrcpp::Any
ASTBuilder::visitComponent_clause(modelicaParser::Component_clauseContext *Ctx) {
    visit(Ctx->type_prefix());
    std::unique_ptr<Type_prefixAST> Type_prefix = std::move(visitedType_prefixStmt);
    visit(Ctx->type_specifier()->type_specifier_name());
    std::unique_ptr<Type_specifier_nameAST> Type_specifier_name = std::move(visitedType_specifier_nameStmt);
    if(Ctx->array_subscripts()){
        visit(Ctx->array_subscripts());
    }
    visit(Ctx->component_list());
    std::unique_ptr<Component_declarationAST> Component_declaration = std::move(visitedComponent_declarationStmt);
    visitedElementStmt = std::make_unique<Component_clauseAST>(
        SourceLocation {Ctx->getStart()->getLine(),
                        Ctx->getStart()->getCharPositionInLine()}, std::move(Type_prefix), 
                        std::move(Type_specifier_name), std::move(Component_declaration));
    return nullptr;
}

antlrcpp::Any
ASTBuilder::visitType_prefix(modelicaParser::Type_prefixContext *Ctx) {
    std::string Type_prefixName;
    if(Ctx->FLOW()){
        Type_prefixName = Ctx->FLOW()->getText();
    }else if (Ctx->STREAM())
    {
        Type_prefixName = Ctx->STREAM()->getText();
    }
    
    visitedType_prefixStmt = std::make_unique<Type_prefixAST>(
        SourceLocation {Ctx->getStart()->getLine(),
                        Ctx->getStart()->getCharPositionInLine()}, Type_prefixName);
    return nullptr;
}

antlrcpp::Any
ASTBuilder::visitType_specifier(modelicaParser::Type_specifierContext *Ctx) {
    visit(Ctx->type_specifier_name());
    return nullptr;
}

antlrcpp::Any
ASTBuilder::visitType_specifier_name(modelicaParser::Type_specifier_nameContext *Ctx) {
    visit(Ctx->id(0));
    std::string Type_specifieName = Ctx->id(0)->getText();
    visitedType_specifier_nameStmt = std::make_unique<Type_specifier_nameAST>(
        SourceLocation {Ctx->getStart()->getLine(),
                        Ctx->getStart()->getCharPositionInLine()}, Type_specifieName);
    return nullptr;
}

antlrcpp::Any
ASTBuilder::visitComponent_list(modelicaParser::Component_listContext *Ctx) {
    visit(Ctx->component_declaration(0));
    return nullptr;
}

antlrcpp::Any
ASTBuilder::visitComponent_declaration(modelicaParser::Component_declarationContext *Ctx) {
    visit(Ctx->declaration()->variable_name());
    std::unique_ptr<Variable_nameAST> Variable_name = std::move(visitedVariable_nameStmt);
    if(Ctx->condition_attribute()){
        visit(Ctx->condition_attribute());
    }
    visit(Ctx->comment());
    visitedComponent_declarationStmt = std::make_unique<Component_declarationAST>(
        SourceLocation {Ctx->getStart()->getLine(),
                        Ctx->getStart()->getCharPositionInLine()}, std::move(Variable_name));
    return nullptr;
}

antlrcpp::Any
ASTBuilder::visitDeclaration(modelicaParser::DeclarationContext *Ctx) {
    visit(Ctx->variable_name());
    if(Ctx->array_subscripts()){
        visit(Ctx->array_subscripts());
    }
    if(Ctx->modification()){
        visit(Ctx->modification());
    }else if (Ctx->variable_characteristic()){
        visit(Ctx->variable_characteristic());
    }
    return nullptr;
}

antlrcpp::Any
ASTBuilder::visitVariable_name(modelicaParser::Variable_nameContext *Ctx) {
    // visit(Ctx->id());
    std::string Variable_name = Ctx->id()->getText();
    visitedVariable_nameStmt = std::make_unique<Variable_nameAST>(
        SourceLocation {Ctx->getStart()->getLine(),
                        Ctx->getStart()->getCharPositionInLine()}, Variable_name);
    return nullptr;
}

antlrcpp::Any
ASTBuilder::visitComment(modelicaParser::CommentContext *Ctx) {
    visit(Ctx->string_comment());
    if(Ctx->annotation_comment()){
        visit(Ctx->annotation_comment());
    }
    return nullptr;
}

antlrcpp::Any
ASTBuilder::visitEquation_section(modelicaParser::Equation_sectionContext *Ctx) {
    std::vector<std::unique_ptr<EquationAST>> Equations;
    for (std::size_t i = 0; i < Ctx->SEMI().size(); ++i) {
        auto *EquaCtx = Ctx->equation(i);
        visit(EquaCtx);
        Equations.push_back(std::move(visitedEquationStmt));
    }
    visitedEquation_sectionStmt = std::make_unique<Equation_sectionAST>(
        SourceLocation {Ctx->getStart()->getLine(),
                        Ctx->getStart()->getCharPositionInLine()}, 
                        std::move(Equations));
    return nullptr;
}

antlrcpp::Any
ASTBuilder::visitEquation(modelicaParser::EquationContext *Ctx) {
    if(Ctx->equation_valuation2()){
        visit(Ctx->equation_valuation2());
        visitedEquationStmt =  std::make_unique<EquationAST>(
        SourceLocation {Ctx->getStart()->getLine(),
                        Ctx->getStart()->getCharPositionInLine()}, 
                        std::move(visitedEquation_valuation2Stmt));
    }else if (Ctx->if_equation()){
        visit(Ctx->if_equation());
    }else if (Ctx->for_equation()){
        visit(Ctx->for_equation());
    }else if (Ctx->connect_clause()){
        visit(Ctx->connect_clause());
    }else if (Ctx->when_equation()){
        visit(Ctx->when_equation());
    }
    // visit(Ctx->comment());
    return nullptr;
}

antlrcpp::Any
ASTBuilder::visitEquation_valuation2(modelicaParser::Equation_valuation2Context *Ctx) {
    std::string assign = Ctx->ASSIGN()->getText();
    visit(Ctx->simple_expression());
    std::unique_ptr<Simple_expressionAST> Simple_expression = std::move(visitedSimple_expressionStmt);
    visit(Ctx->expression());
    std::unique_ptr<ExpressionAST> Expression = std::move(visitedExpressionStmt);
    visitedEquation_valuation2Stmt =  std::make_unique<Equation_valuation2AST>(
        SourceLocation {Ctx->getStart()->getLine(),
                        Ctx->getStart()->getCharPositionInLine()}, assign,
                        std::move(Simple_expression), std::move(Expression));
    return nullptr;
}

antlrcpp::Any
ASTBuilder::visitExpression(modelicaParser::ExpressionContext *Ctx) {
    visit(Ctx->expression(0)->simple_expression()->logical_expression(0)->logical_term(0)->logical_factor(0)->relation()
    ->arithmetic_expression());
    std::unique_ptr<Arithmetic_expressionAST> Arithmetic_expression = std::move(visitedArithmetic_expressionStmt);
    visitedExpressionStmt = std::make_unique<ExpressionAST>(
        SourceLocation {Ctx->getStart()->getLine(),
                        Ctx->getStart()->getCharPositionInLine()}, std::move(Arithmetic_expression));
    return nullptr;
}

antlrcpp::Any
ASTBuilder::visitSimple_expression(modelicaParser::Simple_expressionContext *Ctx) {
    visit(Ctx->logical_expression(0)->logical_term(0)->logical_factor(0)->relation()
    ->arithmetic_expression()->term(0)->factor(0)->primary(0)->function_call_args());
    std::unique_ptr<Function_call_argsAST> Function_call_args = std::move(visitedFunction_call_argsStmt);
    visitedSimple_expressionStmt = std::make_unique<Simple_expressionAST>(
        SourceLocation {Ctx->getStart()->getLine(),
                        Ctx->getStart()->getCharPositionInLine()}, std::move(Function_call_args));

    return nullptr;
}

antlrcpp::Any
ASTBuilder::visitLogical_expression(modelicaParser::Logical_expressionContext *Ctx) {

    return nullptr;
}

antlrcpp::Any
ASTBuilder::visitLogical_term(modelicaParser::Logical_termContext *Ctx) {

    return nullptr;
}

antlrcpp::Any
ASTBuilder::visitLogical_factor(modelicaParser::Logical_factorContext *Ctx) {

    return nullptr;
}

antlrcpp::Any
ASTBuilder::visitRelation(modelicaParser::RelationContext *Ctx) {
    if(Ctx->arithmetic_expression()){
        visit(Ctx->arithmetic_expression());
    }else if (Ctx->if_relation())
    {
        visit(Ctx->if_relation());
    }
    return nullptr;
}

antlrcpp::Any
ASTBuilder::visitIf_relation(modelicaParser::If_relationContext *Ctx) {

    return nullptr;
}

antlrcpp::Any
ASTBuilder::visitRelational_operator(modelicaParser::Relational_operatorContext *Ctx) {

    return nullptr;
}

antlrcpp::Any
ASTBuilder::visitArithmetic_expression(modelicaParser::Arithmetic_expressionContext *Ctx) {
    std::string Operator_Name = Ctx->add_operator(0)->getText();
    visit(Ctx->term(0)->factor(0)->primary(0)->number());
    std::unique_ptr<NumberExprAST> NumberExpr = std::move(visitedNumberExprStmt);
    visit(Ctx->term(1)->factor(0)->primary(0)->component_reference());
    std::unique_ptr<Component_referenceAST> Component_referenceExpr = std::move(visitedComponent_referenceStmt);
    visitedArithmetic_expressionStmt = std::make_unique<Arithmetic_expressionAST>(
        SourceLocation {Ctx->getStart()->getLine(),
                        Ctx->getStart()->getCharPositionInLine()}, Operator_Name, 
                        std::move(NumberExpr), std::move(Component_referenceExpr));
    return nullptr;
}

antlrcpp::Any
ASTBuilder::visitAdd_operator(modelicaParser::Add_operatorContext *Ctx) {

    return nullptr;
}

antlrcpp::Any
ASTBuilder::visitTerm(modelicaParser::TermContext *Ctx) {
    return nullptr;
}

antlrcpp::Any
ASTBuilder::visitFactor(modelicaParser::FactorContext *Ctx) {

    return nullptr;
}

antlrcpp::Any
ASTBuilder::visitPrimary(modelicaParser::PrimaryContext *Ctx) {
    if(Ctx->string()){
        visit(Ctx->string());
    }else if (Ctx->number())
    {
        visit(Ctx->number());
    }else if (Ctx->boolean_my())
    {
        visit(Ctx->boolean_my());
    }else if (Ctx->DER())
    {

        visit(Ctx->function_call_args());
    }else if (Ctx->INITIAL())
    {

        visit(Ctx->function_call_args());
    }else if (Ctx->PURE())
    {

        visit(Ctx->function_call_args());
    }else if (Ctx->component_reference())
    {
        visit(Ctx->component_reference());
    }else if (Ctx->array_arguments())
    {
        visit(Ctx->array_arguments());
    }else if (Ctx->function_call())
    {
        visit(Ctx->function_call());
    }else if (Ctx->output_expression_list())
    {
        visit(Ctx->output_expression_list());
    }else if (Ctx->expression_list(0))
    {
        visit(Ctx->expression_list(0));
        // auto expr_list = 
    }else if (Ctx->END())
    {

    }
    
    return nullptr;
}

antlrcpp::Any
ASTBuilder::visitString(modelicaParser::StringContext *Ctx) {

    return nullptr;
}

antlrcpp::Any
ASTBuilder::visitNumber(modelicaParser::NumberContext *Ctx) {
    int64_t val = stoi(Ctx->UNSIGNED_NUMBER()->getText());
    visitedNumberExprStmt = std::make_unique<NumberExprAST>(
        SourceLocation {Ctx->getStart()->getLine(),
                        Ctx->getStart()->getCharPositionInLine()}, val);

    return nullptr;
}

antlrcpp::Any
ASTBuilder::visitBoolean_my(modelicaParser::Boolean_myContext *Ctx) {

    return nullptr;
}

antlrcpp::Any
ASTBuilder::visitFunction_call_args(modelicaParser::Function_call_argsContext *Ctx) {
    std::string args_name = Ctx->function_arguments()->expression()->simple_expression()->logical_expression(0)->
    logical_term(0)->logical_factor(0)->relation()->arithmetic_expression()->term(0)->factor(0)->
    primary(0)->component_reference()->getText();

    visitedFunction_call_argsStmt = std::make_unique<Function_call_argsAST>(
        SourceLocation {Ctx->getStart()->getLine(),
                        Ctx->getStart()->getCharPositionInLine()}, args_name);

    return nullptr;
}

antlrcpp::Any
ASTBuilder::visitFunction_arguments(modelicaParser::Function_argumentsContext *Ctx) {
    if(Ctx->expression()){
        visit(Ctx->expression());
    }
    return nullptr;
}

antlrcpp::Any
ASTBuilder::visitComponent_reference(modelicaParser::Component_referenceContext *Ctx) {
    std::string comp_ref = Ctx->id(0)->getText();
    visitedComponent_referenceStmt = std::make_unique<Component_referenceAST>(
        SourceLocation {Ctx->getStart()->getLine(),
                        Ctx->getStart()->getCharPositionInLine()}, comp_ref);
    return nullptr;
}

antlrcpp::Any
ASTBuilder::visitArray_subscripts(modelicaParser::Array_subscriptsContext *Ctx) {

    return nullptr;
}

antlrcpp::Any
ASTBuilder::visitString_comment(modelicaParser::String_commentContext *Ctx) {

    return nullptr;
}

antlrcpp::Any
ASTBuilder::visitSubscript(modelicaParser::SubscriptContext *Ctx) {
    return nullptr;
}

antlrcpp::Any
ASTBuilder::visitId(modelicaParser::IdContext *Ctx) {

    return nullptr;
}

antlrcpp::Any
ASTBuilder::visitBase_prefix_specifier(modelicaParser::Base_prefix_specifierContext *Ctx) {

    return nullptr;
}


antlrcpp::Any
ASTBuilder::visitDer_class_specifier(modelicaParser::Der_class_specifierContext *Ctx) {

    return nullptr;
}

antlrcpp::Any
ASTBuilder::visitBase_prefix(modelicaParser::Base_prefixContext *Ctx) {

    return nullptr;
}

antlrcpp::Any
ASTBuilder::visitEnum_list(modelicaParser::Enum_listContext *Ctx) {

    return nullptr;
}

antlrcpp::Any
ASTBuilder::visitEnumeration_option_name(modelicaParser::Enumeration_option_nameContext *Ctx) {

    return nullptr;
}

antlrcpp::Any
ASTBuilder::visitEnumeration_literal(modelicaParser::Enumeration_literalContext *Ctx) {

    return nullptr;
}

antlrcpp::Any
ASTBuilder::visitAction_scope(modelicaParser::Action_scopeContext *Ctx) {

    return nullptr;
}

antlrcpp::Any
ASTBuilder::visitLanguage_specification(modelicaParser::Language_specificationContext *Ctx) {

    return nullptr;
}


antlrcpp::Any
ASTBuilder::visitExternal_function_call(modelicaParser::External_function_callContext *Ctx) {

    return nullptr;
}

antlrcpp::Any
ASTBuilder::visitImport_clause(modelicaParser::Import_clauseContext *Ctx) {

    return nullptr;
}

antlrcpp::Any
ASTBuilder::visitImport_list(modelicaParser::Import_listContext *Ctx) {

    return nullptr;
}

antlrcpp::Any
ASTBuilder::visitExtends_clause(modelicaParser::Extends_clauseContext *Ctx) {

    return nullptr;
}

antlrcpp::Any
ASTBuilder::visitConstraining_clause(modelicaParser::Constraining_clauseContext *Ctx) {

    return nullptr;
}

antlrcpp::Any
ASTBuilder::visitCondition_attribute(modelicaParser::Condition_attributeContext *Ctx) {

    return nullptr;
}

antlrcpp::Any
ASTBuilder::visitVariable_characteristic(modelicaParser::Variable_characteristicContext *Ctx) {

    return nullptr;
}

antlrcpp::Any
ASTBuilder::visitModification(modelicaParser::ModificationContext *Ctx) {

    return nullptr;
}

antlrcpp::Any
ASTBuilder::visitClass_modification(modelicaParser::Class_modificationContext *Ctx) {

    return nullptr;
}

antlrcpp::Any
ASTBuilder::visitClass_modification1(modelicaParser::Class_modification1Context *Ctx) {

    return nullptr;
}

antlrcpp::Any
ASTBuilder::visitArgument_list(modelicaParser::Argument_listContext *Ctx) {

    return nullptr;
}

antlrcpp::Any
ASTBuilder::visitArgument(modelicaParser::ArgumentContext *Ctx) {

    return nullptr;
}

antlrcpp::Any
ASTBuilder::visitElement_modification_or_replaceable(modelicaParser::Element_modification_or_replaceableContext *Ctx) {

    return nullptr;
}

antlrcpp::Any
ASTBuilder::visitVariable_characteristic_modification(modelicaParser::Variable_characteristic_modificationContext *Ctx) {

    return nullptr;
}

antlrcpp::Any
ASTBuilder::visitElement_modification(modelicaParser::Element_modificationContext *Ctx) {

    return nullptr;
}

antlrcpp::Any
ASTBuilder::visitElement_redeclaration(modelicaParser::Element_redeclarationContext *Ctx) {

    return nullptr;
}

antlrcpp::Any
ASTBuilder::visitElement_replaceable(modelicaParser::Element_replaceableContext *Ctx) {

    return nullptr;
}

antlrcpp::Any
ASTBuilder::visitComponent_clause1(modelicaParser::Component_clause1Context *Ctx) {

    return nullptr;
}

antlrcpp::Any
ASTBuilder::visitComponent_declaration1(modelicaParser::Component_declaration1Context *Ctx) {

    return nullptr;
}

antlrcpp::Any
ASTBuilder::visitShort_class_definition(modelicaParser::Short_class_definitionContext *Ctx) {

    return nullptr;
}

antlrcpp::Any
ASTBuilder::visitAlgorithm_section(modelicaParser::Algorithm_sectionContext *Ctx) {

    return nullptr;
}

antlrcpp::Any
ASTBuilder::visitStatement(modelicaParser::StatementContext *Ctx) {

    return nullptr;
}

antlrcpp::Any
ASTBuilder::visitEquation_valuation(modelicaParser::Equation_valuationContext *Ctx) {

    return nullptr;
}

antlrcpp::Any
ASTBuilder::visitIf_equation(modelicaParser::If_equationContext *Ctx) {

    return nullptr;
}

antlrcpp::Any
ASTBuilder::visitIf_statement(modelicaParser::If_statementContext *Ctx) {

    return nullptr;
}

antlrcpp::Any
ASTBuilder::visitFor_equation(modelicaParser::For_equationContext *Ctx) {

    return nullptr;
}

antlrcpp::Any
ASTBuilder::visitFor_statement(modelicaParser::For_statementContext *Ctx) {

    return nullptr;
}

antlrcpp::Any
ASTBuilder::visitFor_indices(modelicaParser::For_indicesContext *Ctx) {

    return nullptr;
}

antlrcpp::Any
ASTBuilder::visitFor_index(modelicaParser::For_indexContext *Ctx) {

    return nullptr;
}

antlrcpp::Any
ASTBuilder::visitFor_range(modelicaParser::For_rangeContext *Ctx) {

    return nullptr;
}

antlrcpp::Any
ASTBuilder::visitWhile_statement(modelicaParser::While_statementContext *Ctx) {

    return nullptr;
}

antlrcpp::Any
ASTBuilder::visitWhen_equation(modelicaParser::When_equationContext *Ctx) {

    return nullptr;
}

antlrcpp::Any
ASTBuilder::visitWhen_statement(modelicaParser::When_statementContext *Ctx) {

    return nullptr;
}

antlrcpp::Any
ASTBuilder::visitConnect_clause(modelicaParser::Connect_clauseContext *Ctx) {

    return nullptr;
}

antlrcpp::Any
ASTBuilder::visitMul_operator(modelicaParser::Mul_operatorContext *Ctx) {

    return nullptr;
}

antlrcpp::Any
ASTBuilder::visitFunction_call(modelicaParser::Function_callContext *Ctx) {

    return nullptr;
}

antlrcpp::Any
ASTBuilder::visitName(modelicaParser::NameContext *Ctx) {

    return nullptr;
}

antlrcpp::Any
ASTBuilder::visitFunction_arguments_non_first(modelicaParser::Function_arguments_non_firstContext *Ctx) {

    return nullptr;
}

antlrcpp::Any
ASTBuilder::visitArray_arguments(modelicaParser::Array_argumentsContext *Ctx) {

    return nullptr;
}

antlrcpp::Any
ASTBuilder::visitNamed_arguments(modelicaParser::Named_argumentsContext *Ctx) {

    return nullptr;
}

antlrcpp::Any
ASTBuilder::visitNamed_argument(modelicaParser::Named_argumentContext *Ctx) {

    return nullptr;
}

antlrcpp::Any
ASTBuilder::visitFunction_argument(modelicaParser::Function_argumentContext *Ctx) {

    return nullptr;
}

antlrcpp::Any
ASTBuilder::visitFunction_partial_application(modelicaParser::Function_partial_applicationContext *Ctx) {

    return nullptr;
}

antlrcpp::Any
ASTBuilder::visitOutput_expression_list(modelicaParser::Output_expression_listContext *Ctx) {

    return nullptr;
}

antlrcpp::Any
ASTBuilder::visitExpression_list(modelicaParser::Expression_listContext *Ctx) {

    return nullptr;
}

antlrcpp::Any
ASTBuilder::visitAnnotation_comment(modelicaParser::Annotation_commentContext *Ctx) {

    return nullptr;
}

}// namespace modelica























  
