#include "antlr4-runtime.h"
#include "config.h"
#include "frontend/AST.h"
#include "frontend/FrontEnd.h"
#include "codegen/ir/IRCodeGenerator.h"
#include "llvm/IR/LLVMContext.h"
#include "llvm/Support/CommandLine.h"
#include "llvm/Support/Debug.h"
#include "llvm/Support/FileSystem.h"
#include "llvm/Support/Path.h"
#include "llvm/Support/Program.h"
#include "llvm/Support/ToolOutputFile.h"
#include "llvm/Support/raw_ostream.h"
// #include <unistd.h>
#include<fstream>
#include<iostream>

using namespace antlr4;
using namespace modelica;

#define DEBUG_TYPE "modelica-Driver"

llvm::cl::OptionCategory ModelicaCat("modelica compiler options");

static llvm::cl::opt<std::string>
    InputFilename(llvm::cl::Positional, llvm::cl::desc("<input modelica source code>"),
                  llvm::cl::cat(ModelicaCat));

static llvm::cl::opt<std::string>
    OutputFilename("o", llvm::cl::desc("Override output filename"),
                   llvm::cl::init("a.out"), llvm::cl::value_desc("filename"),
                   llvm::cl::cat(ModelicaCat));

int main(int argc, char* argv[]) {
    std::string str1;
    std::ifstream Stream;
    Stream.open(argv[1]);
    llvm::LLVMContext TheLLVMContext;
    modelica::TypeContext TheTypeContext;
    FrontEnd FE(TheTypeContext);
    std::unique_ptr<Stored_definitionAST> AST = FE.parse(Stream);


    std::cout<< "===== IR Code Generator ===== \n";

    IRCodeGenerator IRCG(&TheLLVMContext);
    std::unique_ptr<llvm::Module> M = IRCG.emit(AST.get());
    M->print(llvm::outs(), nullptr);

    return 0;
}
