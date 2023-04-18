#pragma once

#include "AST.h"

namespace modelica {

class FrontEnd {
private:

public:

    // Parse an input stream and return an AST.
    std::unique_ptr<Stored_definitionAST> parse(std::istream& Stream);
};

}  // namespace remniw
