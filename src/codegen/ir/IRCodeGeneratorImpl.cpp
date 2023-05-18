#include "codegen/ir/IRCodeGeneratorImpl.h"
#include "llvm/IR/Module.h"
#include "frontend/AST.h"
#include "frontend/Type.h"
#include "llvm/ADT/APFloat.h"
#include "llvm/ADT/STLExtras.h"
#include "llvm/ExecutionEngine/ExecutionEngine.h"
#include "llvm/IR/BasicBlock.h"
#include "llvm/IR/Constants.h"
#include "llvm/IR/DerivedTypes.h"
#include "llvm/IR/Function.h"
#include "llvm/IR/IRBuilder.h"
#include "llvm/IR/Type.h"
#include "llvm/IR/Verifier.h"
#include "llvm/Support/Casting.h"
#include "llvm/Support/CommandLine.h"
#include "llvm/Support/TargetSelect.h"
#include "llvm/Support/ManagedStatic.h"
#include "llvm/Support/raw_ostream.h"
#include "llvm/Transforms/Utils/ModuleUtils.h"
#include <cassert>
#include <cstdint>

using namespace llvm;

extern cl::OptionCategory ModelicaCat;

cl::opt<bool> EnableAphoticShield("enable-aphotic-shield",
                                  cl::desc("Enable APHOTIC_SHIELD allocator"),
                                  cl::init(false), cl::Hidden, cl::cat(ModelicaCat));

namespace modelica
{

Value *IRCodeGeneratorImpl::emitLibCall(StringRef LibFuncName, llvm::Type *ReturnType,
                                        ArrayRef<llvm::Type *> ParamTypes,
                                        ArrayRef<Value *> Operands, bool IsVaArgs) {
    Module *M = IRB->GetInsertBlock()->getModule();
    llvm::FunctionType *FuncType =
        llvm::FunctionType::get(ReturnType, ParamTypes, IsVaArgs);
    FunctionCallee Callee = M->getOrInsertFunction(LibFuncName, FuncType);
    CallInst *CI = IRB->CreateCall(Callee, Operands);
    if (const Function *F = dyn_cast<Function>(Callee.getCallee()->stripPointerCasts()))
        CI->setCallingConv(F->getCallingConv());
    return CI;
}

Value *IRCodeGeneratorImpl::emitPrintf(Value *Fmt, Value *VAList) {
    unsigned AS = Fmt->getType()->getPointerAddressSpace();
    return emitLibCall("printf", IRB->getDoubleTy(), {IRB->getInt8PtrTy()},
                       {IRB->CreateBitCast(Fmt, IRB->getInt8PtrTy(AS), "cstr"), VAList},
                       /*IsVaArgs=*/true);
}

Value *IRCodeGeneratorImpl::codegenPrimary(PrimaryAST *Primary) {
    Value *Ret = nullptr;
    switch (Primary->getKind()) {
    case ASTNode::NumberExpr:
        Ret = codegenNumberExpr(static_cast<NumberExprAST *>(Primary));
        break;
    case ASTNode::Component_reference:
        Ret = codegenComponent_reference(static_cast<Component_referenceAST *>(Primary));
        break;
    case ASTNode::Function_call_args:
        Ret = codegenFunction_call_args(static_cast<Function_call_argsAST *>(Primary));
        break;
    case ASTNode::Arithmetic_expression:
        Ret = codegenArithmetic_expression(static_cast<Arithmetic_expressionAST *>(Primary));
        break;
    default: llvm_unreachable("Invalid Primary");
    }
    return Ret;
}

Value *IRCodeGeneratorImpl::codegenNumberExpr(NumberExprAST *NumberExpr) {
    return llvm::ConstantFP::get(llvm::Type::getDoubleTy(*TheLLVMContext), NumberExpr->getValue());
}

Value *IRCodeGeneratorImpl::codegenComponent_reference(Component_referenceAST *Component_reference) {
        llvm::Constant* con_1 = llvm::ConstantFP::get(llvm::Type::getDoubleTy(*TheLLVMContext), 0.5);
        AllocaInst *LocalVar =
            IRB->CreateAlloca(llvm::Type::getDoubleTy(*TheLLVMContext), nullptr,  Component_reference->getName());
        IRB->CreateStore(con_1, LocalVar);

    // LocalDeclMap.insert({Component_reference,LocalVar});
    
    return LocalVar;
}

Value *IRCodeGeneratorImpl::codegenFunction_call_args(Function_call_argsAST *Primary) {
    return nullptr;
}

Value *IRCodeGeneratorImpl::codegenArithmetic_expression(Arithmetic_expressionAST *Arithmetic_expr) {
    Value *V1 = codegenPrimary(Arithmetic_expr->getLeft_Expr());
    Value *V2 = codegenPrimary(Arithmetic_expr->getRight_Expr());
    assert((V1 && V2) && "Invalid operand of BinaryExpr");
    Value *V = nullptr;
    switch (Arithmetic_expr->getOperatorType()) {
        case Arithmetic_expressionAST::OpKind::Mul: 
            V = IRB->CreateMul(V1, V2, "mul"); 
        break;
        case Arithmetic_expressionAST::OpKind::Div: 
            V = IRB->CreateSDiv(V1, V2, "div"); 
        break;
        case Arithmetic_expressionAST::OpKind::Add: 
            V = IRB->CreateAdd(V1, V2, "add"); 
        break;
        case Arithmetic_expressionAST::OpKind::Sub:
            // V2 = ConstantInt::get(IRB->getInt64Ty(), NumberExpr->getValue(), /*IsSigned=*/true); 
            V = IRB->CreateFSub(V1, V2, "sub"); 
        break;
        case Arithmetic_expressionAST::OpKind::Gt: 
            V = IRB->CreateICmpSGT(V1, V2, "icmp.sgt"); 
        break;
        case Arithmetic_expressionAST::OpKind::Eq: 
            V = IRB->CreateICmpEQ(V1, V2, "icmp.eq"); 
        break;
        default: llvm_unreachable("Invalid binary operation!");
    }
    return V;

}

Value *IRCodeGeneratorImpl::codegenLong_Class_specifier(Long_Class_specifierAST *Long_Class_specifier) {
    codegenComposition(Long_Class_specifier->getComposition());
    return nullptr;
}

Value *IRCodeGeneratorImpl::codegenComposition(CompositionAST *Composition) {
    codegenElement_list(Composition->getElement_list());
    codegenEquation_section(Composition->getEquation_section());
    return nullptr;
}
Value *IRCodeGeneratorImpl::codegenClass_prefixes(Class_prefixesAST *Class_prefixes) {
    return nullptr;
}
Value *IRCodeGeneratorImpl::codegenElement_list(Element_listAST *Element_list) {
    for (auto Element : Element_list->getElements())
    {
        codegenComponent_clause(static_cast<Component_clauseAST *>(Element));
    }
    
    return nullptr;
}
Value *IRCodeGeneratorImpl::codegenComponent_clause(Component_clauseAST *Component_clause) {
    return nullptr;
}

Value *IRCodeGeneratorImpl::codegenType_specifier_name(Type_specifier_nameAST *Type_specifier_name) {

    return nullptr;
}
Value *IRCodeGeneratorImpl::codegenComponent_declaration(Component_declarationAST *Component_declaration) {
    return nullptr;
}
Value *IRCodeGeneratorImpl::codegenType_prefix(Type_prefixAST *Type_prefix) {
    return nullptr;
}

Value *IRCodeGeneratorImpl::codegenEquation_section(Equation_sectionAST *Equation_section) {
    for (auto Equation : Equation_section->getEquations()){
        codegenEquation(Equation);
    }
    return nullptr;
}

Value *IRCodeGeneratorImpl::codegenEquation(EquationAST *Equation) {
    codegenEquationExpr(Equation->getEquations());
    return nullptr;
}

Value *IRCodeGeneratorImpl::codegenEquationExpr(EquationExprAST *EquationExpr) {
    Value *Ret = nullptr;
    switch (EquationExpr->getKind()) {
    case ASTNode::Equation_valuation2:
        Ret = codegenEquation_valuation2(static_cast<Equation_valuation2AST *>(EquationExpr));
        break;
    default: llvm_unreachable("Invalid EXPE");
    }
    return Ret;
}

Value *IRCodeGeneratorImpl::codegenEquation_valuation2(Equation_valuation2AST *Equation_valuation2) {
    // Value *V1 = codegenSimple_expression(Equation_valuation2->getLExpr());


    Value *LocalVar =
            IRB->CreateAlloca(llvm::Type::getDoubleTy(*TheLLVMContext), nullptr,  "result");
    Value *V1 = codegenExpression(Equation_valuation2->getRExpr());
    Value *V = IRB->CreateStore(V1, LocalVar);

    //printf function
    // std::vector<llvm::Type *> putsArgs;
    // putsArgs.push_back(IRB->getInt8Ty()->getPointerTo());
    // llvm::ArrayRef<llvm::Type*>  argsRef(putsArgs);

    // llvm::FunctionType *putsType =
    //     llvm::FunctionType::get(IRB->getInt32Ty(), argsRef, true);
    // llvm::Constant *putsFunc = TheModule->getOrInsertFunction("printf", putsType);
    // emitPrintf(OutputFmtStr,LocalVar);
    IRB->CreateRet(LocalVar);

    return nullptr;
    
}


Value *IRCodeGeneratorImpl::codegenSimple_expression(Simple_expressionAST *Simple_expression) {
    return nullptr;
    
}

Value *IRCodeGeneratorImpl::codegenExpression(ExpressionAST *Expression) {
    return codegenPrimary(Expression->getRight_Expr());;
    
}

Value *IRCodeGeneratorImpl::codegenStmt(StmtAST *Stmt) {
    Value *Ret = nullptr;
    switch (Stmt->getKind()) {
    case ASTNode::Long_Class_specifier:
        Ret = codegenLong_Class_specifier(static_cast<Long_Class_specifierAST *>(Stmt));
        break;
    case ASTNode::Composition:
        Ret = codegenComposition(static_cast<CompositionAST *>(Stmt));
        break;
    case ASTNode::Class_prefixes:
        Ret = codegenClass_prefixes(static_cast<Class_prefixesAST *>(Stmt));
        break;
    case ASTNode::Element_list:
        Ret = codegenElement_list(static_cast<Element_listAST *>(Stmt));
        break;
    case ASTNode::Component_declaration:
        Ret = codegenComponent_declaration(static_cast<Component_declarationAST *>(Stmt));
        break;
    case ASTNode::Type_specifier_name:
        Ret = codegenType_specifier_name(static_cast<Type_specifier_nameAST *>(Stmt));
        break;
    case ASTNode::Type_prefix:
        Ret = codegenType_prefix(static_cast<Type_prefixAST *>(Stmt));
        break;
    case ASTNode::Equation_section: 
        Ret = codegenEquation_section(static_cast<Equation_sectionAST *>(Stmt)); 
        break;
    default: llvm_unreachable("Invalid stmt");
    }
    return Ret;
}

Value *IRCodeGeneratorImpl::codegenClass_definition(Class_definitionAST *Class_definition) {
    // Long_Class_specifierAST *Long_Class_specifier;
    Long_Class_specifierAST *Long_Class_specifier = Class_definition->getLong_Class_specifier();
    // Get the function from the module symbol table.
    
    // printf(Long_Class_specifier->getSpecifier_name1().c_str());
    llvm::Type *FType = llvm::FunctionType::get(llvm::Type::getDoubleTy(*TheLLVMContext), false);
    llvm::FunctionType *FunctionType = llvm::FunctionType::get(FType, false);
    std::string name = Long_Class_specifier->getSpecifier_name1();
    llvm::Function *F = llvm::Function::Create(FunctionType, GlobalValue::ExternalLinkage, name, TheModule.get());
    // llvm::Function *F = TheModule->getFunction(Long_Class_specifier->getSpecifier_name());
    assert(F && "Function is not in the module symbol table");

    // Create a new basic block to start insertion into.
    BasicBlock *BB = BasicBlock::Create(*TheLLVMContext, "entry", F);
    IRB->SetInsertPoint(BB);

    LocalDeclMap.clear();
    codegenLong_Class_specifier(Long_Class_specifier);

    // Validate the generated code, checking for consistency.
    verifyFunction(*F);
    return F;

//    return nullptr;
}

FunctionCallee
IRCodeGeneratorImpl::createAphoticShieldCtorAndInitFunctions(StringRef CtorName,
                                                             StringRef InitName) {
    assert(!InitName.empty() && "Expected init function name");
    // Declare as_init, the aphotic_shield runtime libarary init function.
    auto *AphoticShieldInitFuncType =
        llvm::FunctionType::get(IRB->getVoidTy(), {}, false);
    FunctionCallee AphoticShieldInitFunc =
        TheModule->getOrInsertFunction(InitName, AphoticShieldInitFuncType);
    // Define module_ctor function as_module_ctor,
    // add it to global ctors that implemented as __attribute__((constructor)),
    // so as_module_ctor will be called before main function executed.
    auto *AphoticShieldCtorFuncType =
        llvm::FunctionType::get(IRB->getVoidTy(), {}, false);
    Function *AphoticShieldCtorFunc =
        llvm::Function::Create(AphoticShieldCtorFuncType, GlobalValue::InternalLinkage, 0,
                               CtorName, TheModule.get());
    // Create a new basic block to start insertion into.
    BasicBlock *BB = BasicBlock::Create(*TheLLVMContext, "entry", AphoticShieldCtorFunc);
    IRB->SetInsertPoint(BB);
    IRB->CreateCall(AphoticShieldInitFunc, {});
    IRB->CreateRetVoid();
    appendToGlobalCtors(*TheModule, AphoticShieldCtorFunc, /*Priority*/ 65535);
    return AphoticShieldCtorFunc;
}


std::unique_ptr<Module> IRCodeGeneratorImpl::codegen(Stored_definitionAST *AST) {
    // Add prototype for each function
    // This make emit FunctionCallExprAST easy
    // for (auto *DefAST : AST->getDefinitions()) {
    //     SmallVector<llvm::Type *, 4> ParamTypes;
    //     for (auto *ParamType : DefAST->getParamTypes())
    //         ParamTypes.push_back(mapREMNIWTypeToLLVMType(ParamType));
    //     auto *FT = llvm::FunctionType::get(
    //         mapREMNIWTypeToLLVMType(DefAST->getReturnType()), ParamTypes, false);
    //     auto Callee = TheModule->getOrInsertFunction(DefAST->getName(), FT);
    //     auto *F = dyn_cast<llvm::Function>(Callee.getCallee());
    //     FunctionDeclMap.insert({DefAST, F});
    // }

    // Emit LLVM IR for all functions
    for (auto *DefAST : AST->getDefinitions())
        codegenClass_definition(DefAST);
    // printf("enter,codegen");

    if (EnableAphoticShield)
        createAphoticShieldCtorAndInitFunctions("as_module_ctor", "as_init");

    // Verify the generated code.
    verifyModule(*TheModule);

    return std::move(TheModule);
}
IRCodeGeneratorImpl::IRCodeGeneratorImpl(llvm::LLVMContext *LLVMContext) {
    TheLLVMContext = LLVMContext;
    TheModule = std::make_unique<Module>("", *TheLLVMContext);
    InitializeNativeTarget();
    auto TM = std::unique_ptr<TargetMachine>(EngineBuilder().selectTarget());
    assert(TM && "Cannot initialize TargetMachine");
    TheModule->setDataLayout(TM->createDataLayout());
    IRB = std::make_unique<IRBuilder<>>(*TheLLVMContext);
    // InputFmtStr = IRB->CreateGlobalString("%lli", "fmtstr", 0, TheModule.get());
    // OutputFmtStr = IRB->CreateGlobalString("%lli\n", "fmtstr", 0, TheModule.get());
}
} // namespace modelica