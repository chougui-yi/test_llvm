#pragma once

#include "frontend/Type.h"
#include "llvm/IR/LLVMContext.h"
#include "llvm/IR/Module.h"
#include "llvm/IR/Value.h"
#include "llvm/Support/Casting.h"
#include "llvm/ADT/ArrayRef.h"
#include "llvm/ADT/DenseMap.h"
#include "llvm/ADT/DenseMapInfo.h"
#include "llvm/ADT/DenseSet.h"
#include "llvm/ADT/SmallVector.h"
#include "llvm/Support/Allocator.h"
#include "llvm/Support/raw_ostream.h"
#include "llvm/Support/Casting.h"
#include <algorithm>
#include <iostream>
#include <memory>
#include <vector>

namespace modelica {

template<typename T>
std::vector<T *> rawPtrs(const std::vector<std::unique_ptr<T>> &v) {
    std::vector<T *> r;
    std::transform(v.begin(), v.end(), std::back_inserter(r),
                   [](auto &up) { return up.get(); });
    return r;
}

struct SourceLocation {
    size_t Line;
    size_t Col;
};

class ASTNode;
class StmtAST;
class ElementAST;
class String_commentAST;
class PrimaryAST;
class EquationExprAST;
class Stored_definitionAST;
class Class_definitionAST;
class Class_prefixesAST;
class Long_Class_specifierAST;
class CompositionAST;
class Element_listAST;
class Component_clauseAST;
class Type_prefixAST;
class Type_specifier_nameAST;
class Component_declarationAST;
class Variable_nameAST;
class Equation_sectionAST;
class EquationAST;
class Equation_valuation2AST;
class Simple_expressionAST;
class ExpressionAST;
class NumberExprAST;
class Component_referenceAST;
class Function_call_argsAST;
class Arithmetic_expressionAST;


class ASTNode {
public:
    enum Kind {
        Stored_definition,
        Class_definition,
        Class_prefixes,
        Long_Class_specifier,
        Composition,
        Element_list,
        Component_clause,
        Type_prefix,
        Type_specifier_name,
        Component_declaration,
        Variable_name,
        Equation_section,
        Equation,
        Equation_valuation2,
        Simple_expression,
        Expression,
        NumberExpr,
        Component_reference,
        Function_call_args,
        Arithmetic_expression
    };

    ASTNode(Kind K, SourceLocation Loc): ASTNodeKind(K), Loc(Loc) {}
    virtual ~ASTNode() = default;

    Kind getKind() const { return ASTNodeKind; }
    int getLine() const { return Loc.Line; }
    int getCol() const { return Loc.Col; }

private:
    const Kind ASTNodeKind;
    SourceLocation Loc;
};

class StmtAST: public ASTNode {
public:
    StmtAST(ASTNode::Kind K, SourceLocation Loc): ASTNode(K, Loc) {}
};

class ExprAST: public ASTNode {
public:
    ExprAST(ASTNode::Kind K, SourceLocation Loc): ASTNode(K, Loc) {}
};

class ElementAST: public ASTNode{
public:
    ElementAST(ASTNode::Kind K, SourceLocation Loc): ASTNode(K, Loc) {}
};

class EquationExprAST: public ASTNode{
public:
    EquationExprAST(ASTNode::Kind K, SourceLocation Loc): ASTNode(K, Loc) {}
};

class PrimaryAST: public ASTNode{
public:
    PrimaryAST(ASTNode::Kind K, SourceLocation Loc): ASTNode(K, Loc) {}
};


class Simple_expressionAST: public ExprAST{
public:
    Simple_expressionAST(SourceLocation Loc, std::unique_ptr<PrimaryAST> Left_Expr):
        ExprAST(ASTNode::Simple_expression, Loc),Left_Expr(std::move(Left_Expr)){}

    PrimaryAST *getLeft_Expr() const { return Left_Expr.get(); }

private:
    std::unique_ptr<PrimaryAST> Left_Expr;
};

class ExpressionAST: public ExprAST{
public:
    ExpressionAST(SourceLocation Loc, std::unique_ptr<PrimaryAST> Right_Expr):
        ExprAST(ASTNode::Expression, Loc),Right_Expr(std::move(Right_Expr)){}

    PrimaryAST *getRight_Expr() const { return Right_Expr.get(); }

private:
    std::unique_ptr<PrimaryAST> Right_Expr;

};

class NumberExprAST: public PrimaryAST{
public:
    NumberExprAST(SourceLocation Loc, double Val):
        PrimaryAST(ASTNode::NumberExpr, Loc), Val(Val){}

    double getValue() const { return Val; }

private:
    double Val;

};

class Component_referenceAST: public PrimaryAST{
public:
    Component_referenceAST(SourceLocation Loc, std::string Name):
        PrimaryAST(ASTNode::Component_reference, Loc), Name(Name){}

    llvm::StringRef getName() const { return Name; }
    std::string getName1() const { return Name; }

private:
    std::string Name;

};

class Function_call_argsAST: public PrimaryAST{
public:
    Function_call_argsAST(SourceLocation Loc, std::string Name):
        PrimaryAST(ASTNode::Function_call_args, Loc), Name(Name){}

    llvm::StringRef getName() const { return Name; }
    

private:
    std::string Name;

};

class Arithmetic_expressionAST: public PrimaryAST{
public:
    enum OpKind {
        Mul,
        Div,
        Add,
        Sub,
        Gt,
        Eq,
    };
    Arithmetic_expressionAST(SourceLocation Loc, OpKind OperatorType, 
        std::unique_ptr<PrimaryAST> Left_Expr, std::unique_ptr<PrimaryAST> Right_Expr):
        PrimaryAST(ASTNode::Arithmetic_expression, Loc), OperatorType(OperatorType),
        Left_Expr(std::move(Left_Expr)), Right_Expr(std::move(Right_Expr)){}

    // Arithmetic_expressionAST(SourceLocation Loc):PrimaryAST(ASTNode::Arithmetic_expression, Loc){}

    OpKind getOperatorType() const { return OperatorType; }
    PrimaryAST *getLeft_Expr() const { return Left_Expr.get(); }
    PrimaryAST *getRight_Expr() const { return Right_Expr.get(); }
    std::string getOpString() const {
        std::string OpStr;
        switch (OperatorType) {
        case OpKind::Mul: OpStr = "*"; break;
        case OpKind::Div: OpStr = "/"; break;
        case OpKind::Add: OpStr = "+"; break;
        case OpKind::Sub: OpStr = "-"; break;
        case OpKind::Gt: OpStr = ">"; break;
        case OpKind::Eq: OpStr = "=="; break;
        default: break;
        }
        return OpStr;
    }

private:
    OpKind OperatorType;
    std::unique_ptr<PrimaryAST> Left_Expr;
    std::unique_ptr<PrimaryAST> Right_Expr;

};

class Equation_valuation2AST: public EquationExprAST{
public:
    Equation_valuation2AST(SourceLocation Loc, std::string ASSIGN, std::unique_ptr<Simple_expressionAST> LExpr,
        std::unique_ptr<ExpressionAST> RExpr):
        EquationExprAST(ASTNode::Equation_valuation2, Loc),
        ASSIGN(ASSIGN), LExpr(std::move(LExpr)), RExpr(std::move(RExpr)){}
    
    Equation_valuation2AST(SourceLocation Loc, std::unique_ptr<Simple_expressionAST> LExpr):
        EquationExprAST(ASTNode::Equation_valuation2, Loc), LExpr(std::move(LExpr)){}


    llvm::StringRef getASSIGN() const { return ASSIGN; }

    Simple_expressionAST *getLExpr() const { return LExpr.get(); }

    ExpressionAST *getRExpr() const { return RExpr.get(); }

private:
    std::string ASSIGN;
    std::unique_ptr<Simple_expressionAST> LExpr;
    std::unique_ptr<ExpressionAST> RExpr;
};

class Variable_nameAST: public ExprAST{
public:
    Variable_nameAST(SourceLocation Loc, 
                std::string Variable_name):
                ExprAST(ASTNode::Variable_name, Loc),Variable_name(Variable_name){}

    llvm::StringRef getVariable_name() const { return Variable_name; }
   
private:
    std::string Variable_name;

};

class EquationAST: public ExprAST{
public:
    EquationAST(SourceLocation Loc,
        std::unique_ptr<EquationExprAST> EquationExpr):
        ExprAST(ASTNode::Equation, Loc),
        EquationExpr(std::move(EquationExpr)) {}


    EquationExprAST *getEquations() const { return EquationExpr.get(); }

private:
    std::unique_ptr<EquationExprAST> EquationExpr;

};

class Equation_sectionAST: public StmtAST{
public:
    Equation_sectionAST(SourceLocation Loc,
        std::vector<std::unique_ptr<EquationAST>> Equations):
        StmtAST(ASTNode::Equation_section, Loc),
        Equations(std::move(Equations)) {}


    std::vector<EquationAST *> getEquations() const { return rawPtrs(Equations); }

private:
    std::vector<std::unique_ptr<EquationAST>> Equations;
};

class Type_prefixAST: public StmtAST{
public:
    Type_prefixAST(SourceLocation Loc, 
                std::string Type_prefix_name):
                StmtAST(ASTNode::Type_prefix, Loc),Type_prefix_name(Type_prefix_name){}

    llvm::StringRef getType_prefix_name() const { return Type_prefix_name; }
    
private:
    std::string Type_prefix_name;

};

class Type_specifier_nameAST: public StmtAST{
public:
    Type_specifier_nameAST(SourceLocation Loc, 
                std::string Type_specifier_name):
                StmtAST(ASTNode::Type_specifier_name, Loc),Type_specifier_name(Type_specifier_name){}

    llvm::StringRef getType_specifier_name() const { return Type_specifier_name; }

private:
    std::string Type_specifier_name;

};

class Component_declarationAST: public StmtAST{
public:
    Component_declarationAST(SourceLocation Loc, 
                std::unique_ptr<Variable_nameAST> Variable_name):
                StmtAST(ASTNode::Component_declaration, Loc), Variable_name(std::move(Variable_name)){}

    Variable_nameAST *getVariable_name() const { return Variable_name.get(); }
    
private:
    std::unique_ptr<Variable_nameAST> Variable_name; 

};

class Component_clauseAST: public ElementAST{
public:
    Component_clauseAST(SourceLocation Loc, 
                std::unique_ptr<Type_prefixAST> Type_prefix,
                std::unique_ptr<Type_specifier_nameAST> Type_specifier_name,
                std::unique_ptr<Component_declarationAST> Component_declaration):
                ElementAST(ASTNode::Component_clause, Loc), Type_prefix(std::move(Type_prefix)),
                Type_specifier_name(std::move(Type_specifier_name)),
                Component_declaration(std::move(Component_declaration)){}
    
    Type_prefixAST *getType_prefix() const { return Type_prefix.get(); }

    Type_specifier_nameAST *getType_specifier_name() const { return Type_specifier_name.get(); }

    Component_declarationAST *getComponent_declaration() const { return Component_declaration.get(); }    
    
private:
    std::unique_ptr<Type_prefixAST> Type_prefix;
    std::unique_ptr<Type_specifier_nameAST> Type_specifier_name;
    std::unique_ptr<Component_declarationAST> Component_declaration;
};

class Element_listAST: public StmtAST{
public:
    Element_listAST(SourceLocation Loc, 
                std::vector<std::unique_ptr<ElementAST>> Elements):
                StmtAST(ASTNode::Element_list, Loc),Elements(std::move(Elements)){}

    std::vector<ElementAST *> getElements() const { return rawPtrs(Elements); }
   
private:
    std::vector<std::unique_ptr<ElementAST>> Elements;
};


class Class_prefixesAST: public StmtAST{
public:
    Class_prefixesAST(SourceLocation Loc, 
                std::string Class_prefixes_name):
                StmtAST(ASTNode::Class_prefixes, Loc),
                Class_prefixes_name(Class_prefixes_name){}
    
    llvm::StringRef getClass_prefixes_name() const { return Class_prefixes_name; }

private:
   std::string Class_prefixes_name; 
};

class String_commentAST: public StmtAST{
public:
    String_commentAST(SourceLocation Loc):StmtAST(ASTNode::Composition, Loc){}
};

class CompositionAST: public StmtAST{
public:
    CompositionAST(SourceLocation Loc, 
                std::unique_ptr<Element_listAST> Element_list,
                std::unique_ptr<Equation_sectionAST> Equation_section):
                StmtAST(ASTNode::Composition, Loc),
                Element_list(std::move(Element_list)), Equation_section(std::move(Equation_section)){}

    CompositionAST(SourceLocation Loc) : StmtAST(ASTNode::Composition, Loc){}


    Element_listAST *getElement_list() const { return Element_list.get(); }

    Equation_sectionAST *getEquation_section() const { return Equation_section.get(); }

private:
   std::unique_ptr<Element_listAST> Element_list; 
   std::unique_ptr<Equation_sectionAST> Equation_section;
};

class Long_Class_specifierAST: public StmtAST{
public:
    Long_Class_specifierAST(SourceLocation Loc, std::string Specifier_name,
                std::unique_ptr<String_commentAST> String_comment,
                std::unique_ptr<CompositionAST> Composition):
                StmtAST(ASTNode::Long_Class_specifier, Loc),
                Specifier_name(Specifier_name), String_comment(std::move(String_comment)),
                Composition(std::move(Composition)){}
    

    llvm::StringRef getSpecifier_name() const { return Specifier_name; } 

    std::string getSpecifier_name1() const { return Specifier_name; } 

    String_commentAST *getString_comment() const { return String_comment.get(); }

    CompositionAST *getComposition() const { return Composition.get(); }

private:
   std::string Specifier_name;
   std::unique_ptr<String_commentAST> String_comment;
   std::unique_ptr<CompositionAST> Composition; 
};

class Class_definitionAST: public StmtAST {
public:
    Class_definitionAST(SourceLocation Loc, 
                std::unique_ptr<Class_prefixesAST> Class_prefixes,
                std::unique_ptr<Long_Class_specifierAST> Long_Class_specifier):
                StmtAST(ASTNode::Class_definition, Loc),
                Class_prefixes(std::move(Class_prefixes)),
                Long_Class_specifier(std::move(Long_Class_specifier)){}

    Class_prefixesAST *getClass_prefixes() const { return Class_prefixes.get(); }

    Long_Class_specifierAST *getLong_Class_specifier() const { return Long_Class_specifier.get(); }

private:
   std::unique_ptr<Class_prefixesAST> Class_prefixes;
   std::unique_ptr<Long_Class_specifierAST> Long_Class_specifier; 

};

class Stored_definitionAST: public ASTNode {
public:
    Stored_definitionAST(std::vector<std::unique_ptr<Class_definitionAST>> Class_definition):
        ASTNode(ASTNode::Stored_definition, SourceLocation {0, 0}),
        Class_definition(std::move(Class_definition)) {}
    std::vector<Class_definitionAST *> getDefinitions() const { return rawPtrs(Class_definition); }

    std::unique_ptr<llvm::Module> codegen(llvm::LLVMContext &);

private:
    std::vector<std::unique_ptr<Class_definitionAST>> Class_definition;
};

}  // namespace modelica
