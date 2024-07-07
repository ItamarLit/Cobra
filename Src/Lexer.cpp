#include "../Headers/Lexer.h"

// Constructor
Lexer::Lexer(const std::vector<std::string>& srcCode){
    this->srcCode = srcCode;
}
 

// Lexical analysis method
void Lexer::lexCode() {
    for (const auto& line : srcCode) {
        for (int i = 0; i < line.length(); i++) {
            char curChar = line[i];
            if (curChar != ' ' && curChar != '\n') {
                // Handle numeric values
                if (std::isdigit(curChar)) {
                    std::string numStr;
                    while (i < line.length() && std::isdigit(line[i])) {
                        numStr += line[i];
                        i++;
                    }
                    addToken(TokenType::Number, numStr);
                    i--; // Adjust i because it will be incremented in the outer loop
                }
                // Handle operators
                else if (inArray(curChar)) {
                    std::string opStr;
                    while (i < line.length() && inArray(line[i])) {
                        opStr += line[i];
                        i++;
                    }
                    addToken(TokenType::Operator, opStr);
                    i--; // Adjust i because it will be incremented in the outer loop
                }
                /* // Handle identifiers and keywords
                else if (std::isalpha(curChar)) {
                    std::string idStr;
                    while (i < line.length() && (std::isalnum(line[i]) || line[i] == '_')) {
                        idStr += line[i];
                        i++;
                    }
                    // Check if the identifier is a keyword
                    if (isKeyword(idStr)) {
                        addToken(TokenType::Keyword, idStr);
                    } else {
                        addToken(TokenType::Identifier, idStr);
                    }
                } */
            }
        }
    }
}

// Add token to tokens vector
void Lexer::addToken(TokenType type, const std::string& value) {
    Token t = Token(type, value);
    tokens.emplace_back(t);
}

// Check if character is in operators array
bool Lexer::inArray(char value) {
    for (int i = 0; i < sizeof(operators) / sizeof(operators[0]); i++) {
        if (value == operators[i]) {
            return true;
        }
    }
    return false;
}


std::vector<Token> Lexer::getTokens(){
    return this->tokens;
}