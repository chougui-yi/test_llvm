#include "antlr4-runtime.h"
#include "config.h"
#include "frontend/AST.h"
#include "frontend/FrontEnd.h"
#include "llvm/IR/LLVMContext.h"
#include "llvm/Support/CommandLine.h"
#include "llvm/Support/Debug.h"
#include "llvm/Support/FileSystem.h"
#include "llvm/Support/Path.h"
#include "llvm/Support/Program.h"
#include "llvm/Support/ToolOutputFile.h"
#include "llvm/Support/raw_ostream.h"
// #include <unistd.h>

using namespace antlr4;
using namespace modelica;

#define DEBUG_TYPE "modelica-Driver"

llvm::cl::OptionCategory ModelicaCat("modelica compiler options");

static llvm::cl::opt<std::string>
    InputFilename(llvm::cl::Positional, llvm::cl::desc("<input modelica source code>"),
                  llvm::cl::cat(ModelicaCat));

int main(int argc, char* argv[]) {
    std::ifstream Stream;
    Stream.open(InputFilename);
    if (!Stream.good()) {
        llvm::errs() << "error: no such file: '" << "errorfsf" << "'\n";
        return 1;
    }
    FrontEnd FE;
    std::unique_ptr<Stored_definitionAST> AST = FE.parse(Stream);

    LLVM_DEBUG({
        llvm::outs() << "===== AST Printer ===== \n";
        // ASTPrinter PrettyPrinter(llvm::outs());
        // PrettyPrinter.print(AST.get());
    });
    return 0;
}
