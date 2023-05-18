#pragma once

#include "AST.h"

namespace modelica {

class FrontEnd {
private:
    TypeContext& TheTypeContext;
public:
    FrontEnd(TypeContext& TheTypeContext): TheTypeContext(TheTypeContext) {}

    // Parse an input stream and return an AST.
    std::unique_ptr<Stored_definitionAST> parse(std::istream& Stream);
};

}  // namespace modelica
