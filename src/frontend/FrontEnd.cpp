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
    std::cout<< "===== Lexer ===== \n"<<std::endl;
        for (auto token : Tokens.getTokens()) {
            std::cout<< token->toString() << "\n" <<std::endl;
        }

    modelicaParser Parser(&Tokens);
    modelicaParser::Stored_definitionContext* Stored_definition = Parser.stored_definition();
        std::cout<< "===== Parser ===== \n";
        std::cout << Stored_definition->toStringTree(&Parser, true) << "\n";
        if (Parser.getNumberOfSyntaxErrors())
            std::cout << "===== Parser Failed ===== \n";
    
    ASTBuilder Builder(TheTypeContext);
    auto a = Builder.build(Stored_definition);
    return a;
}

}  // namespace modelica
