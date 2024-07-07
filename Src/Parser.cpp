#include "../Headers/Parser.h"
#include "../Headers/ASTNode.h"
#include "../Headers/Token.h"
#include <vector>

Parser::Parser(std::vector<std::string>& srcCode)
    : lexer(srcCode), currentTokenIndex(0) {
}

ASTNode* Parser::parse(std::vector<Token>& tokens) {
    // Implement parsing logic here
    // Example: parse an expression and return the root of the AST
    return parseExpression(tokens);
}
ASTNode* Parser::parseExpression(std::vector<Token>& tokens) {
    // Implement expression parsing logic
    // Example: handle binary operations, parentheses, etc.
    return nullptr; // Placeholder
}

ASTNode* Parser::parseTerm(std::vector<Token>& tokens) {
    // Implement term parsing logic (if needed)
    return nullptr; // Placeholder
}

ASTNode* Parser::parseFactor(std::vector<Token>& tokens) {
    // Implement factor parsing logic (if needed)
    return nullptr; // Placeholder
}


