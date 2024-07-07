#ifndef PARSER_H
#define PARSER_H

#include "ASTNode.h"
#include "Token.h" 
#include "Lexer.h"
#include <vector>

class Parser {
public:
    // this func will parse the tokens from the lexer
    ASTNode* parse(std::vector<Token>& tokens);
    Parser(std::vector<std::string>& srcCode);
    Lexer lexer;
    int currentTokenIndex;

private:
    ASTNode* parseExpression(std::vector<Token>& tokens);
    ASTNode* parseTerm(std::vector<Token>& tokens);
    ASTNode* parseFactor(std::vector<Token>& tokens);
};

#endif // PARSER_H
