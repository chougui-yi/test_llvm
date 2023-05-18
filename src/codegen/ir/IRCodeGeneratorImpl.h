#pragma once

#include "frontend/AST.h"
#include "llvm/IR/LLVMContext.h"
#include "llvm/IR/Function.h"
#include "llvm/IR/IRBuilder.h"
#include "llvm/IR/Module.h"
#include "llvm/IR/Value.h"
#include <unordered_map>

namespace modelica {

class IRCodeGeneratorImpl {
private:
    llvm::LLVMContext *TheLLVMContext;
    std::unique_ptr<llvm::Module> TheModule;
    std::unique_ptr<llvm::IRBuilder<>> IRB;
    llvm::GlobalVariable *InputFmtStr;
    llvm::GlobalVariable *OutputFmtStr;
    llvm::DenseMap<Component_referenceAST *, llvm::AllocaInst *> LocalDeclMap;
    // llvm::DenseMap<Stored_definitionAST *, llvm::Function *> FunctionDeclMap;

public:
    IRCodeGeneratorImpl(llvm::LLVMContext* );
    // void Generate(ASTNode* Tree);
    std::unique_ptr<llvm::Module> codegen(Stored_definitionAST *);

    llvm::Value *codegenStored_definition(Stored_definitionAST *);
    llvm::Value *codegenClass_definition(Class_definitionAST *);
    llvm::Value *codegenClass_prefixes(Class_prefixesAST *);
    llvm::Value *codegenLong_Class_specifier(Long_Class_specifierAST *);
    llvm::Value *codegenComposition(CompositionAST *);
    llvm::Value *codegenElement_list(Element_listAST *);
    llvm::Value *codegenComponent_clause(Component_clauseAST *);
    llvm::Value *codegenType_prefix(Type_prefixAST *);
    llvm::Value *codegenType_specifier_name(Type_specifier_nameAST *);
    llvm::Value *codegenComponent_declaration(Component_declarationAST *);
    llvm::Value *codegenVariable_name(Variable_nameAST *);
    llvm::Value *codegenEquation_section(Equation_sectionAST *);
    llvm::Value *codegenEquation(EquationAST *);
    llvm::Value *codegenEquation_valuation2(Equation_valuation2AST *);
    llvm::Value *codegenSimple_expression(Simple_expressionAST *);
    llvm::Value *codegenExpression(ExpressionAST *);
    llvm::Value *codegenNumberExpr(NumberExprAST *);
    llvm::Value *codegenComponent_reference(Component_referenceAST *);
    llvm::Value *codegenFunction_call_args(Function_call_argsAST *);
    llvm::Value *codegenArithmetic_expression(Arithmetic_expressionAST *);
    
private:
    llvm::Value *codegenElement(ElementAST *);
    llvm::Value *codegenExpr(ExprAST *);
    llvm::Value *codegenStmt(StmtAST *);
    llvm::Value *codegenEquationExpr(EquationExprAST *);
    llvm::Value *codegenPrimary(PrimaryAST *);

    llvm::Value *emitLibCall(llvm::StringRef LibFuncName, llvm::Type *ReturnType,
                             llvm::ArrayRef<llvm::Type *> ParamTypes,
                             llvm::ArrayRef<llvm::Value *> Operands,
                             bool IsVaArgs = false);
    llvm::Value *emitPrintf(llvm::Value *Fmt, llvm::Value *VAList);
    llvm::Value *emitScanf(llvm::Value *Fmt, llvm::Value *VAList);
    llvm::Value *emitMalloc(llvm::Type *ReturnType, llvm::Value *Size);
    llvm::Value *emitFree(llvm::Value *Ptr);

    llvm::FunctionCallee
    createAphoticShieldCtorAndInitFunctions(llvm::StringRef CtorName,
                                            llvm::StringRef InitName);
    
};

}  // namespace modelica