#include "codegen/ir/IRCodeGenerator.h"
#include "llvm/IR/Module.h"

namespace modelica {

std::unique_ptr<llvm::Module> IRCodeGenerator::emit(Stored_definitionAST *AST) {

    return pImpl->codegen(AST);
}

}  // namespace modelica