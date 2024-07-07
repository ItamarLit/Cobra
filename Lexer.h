#ifndef LEXER_H
#define LEXER_H

#include <vector>
#include <string>
#include "Token.h"

class Lexer {
public:
    Lexer(const std::vector<std::string>& srcCode);
    void lexCode();
    void addToken(TokenType type, const std::string& value);
    std::vector<Token> getTokens();
    
private:
    std::vector<std::string> srcCode;
    std::vector<Token> tokens;
    char operators[4] = {'+', '-', '/', '*'};

    bool inArray(char value);
};

#endif // LEXER_H
