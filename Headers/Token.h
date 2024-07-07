#ifndef TOKEN_H
#define TOKEN_H

#include <string>

// Enum defining token types
enum class TokenType {
    Keyword,
    Identifier,
    Number,
    String,
    Operator,
    Symbol,
    EndOfFile,
    Unknown,
};

class Token {
public:
    TokenType type;
    std::string value;

    Token(TokenType type, const std::string& value);
};

#endif // TOKEN_H
