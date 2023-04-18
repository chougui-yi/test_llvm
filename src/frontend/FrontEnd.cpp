#include "FrontEnd.h"
#include "modelicaLexer.h"
#include "modelicaParser.h"
#include "antlr4-runtime.h"
#include "ASTBuilder.h"
#include "llvm/Support/Debug.h"

using namespace antlr4;

#define DEBUG_TYPE "modelica-FrontEnd"

namespace modelica {

std::unique_ptr<Stored_definitionAST> FrontEnd::parse(std::istream& Stream) {
    ANTLRInputStream Input(Stream);
    modelicaLexer Lexer(&Input);
    CommonTokenStream Tokens(&Lexer);
    Tokens.fill();
    LLVM_DEBUG({
        llvm::outs() << "===== Lexer ===== \n";
        for (auto token : Tokens.getTokens()) {
            llvm::outs() << token->toString() << "\n";
        }
    });

    modelicaParser Parser(&Tokens);
    modelicaParser::Stored_definitionContext* Stored_definition = Parser.stored_definition();
    LLVM_DEBUG({
        llvm::outs() << "===== Parser ===== \n";
        llvm::outs() << Stored_definition->toStringTree(&Parser, true) << "\n";
        if (Parser.getNumberOfSyntaxErrors())
            llvm::errs() << "===== Parser Failed ===== \n";
    });

    ASTBuilder Builder;
    return Builder.build(Stored_definition);
}

}  // namespace modelica
