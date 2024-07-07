#include <iostream>
#include <fstream>
#include <vector>
#include "Lexer.h"
#include "Token.h"

std::vector<std::string> readFile(std::string fileName = "code_file.txt") {
    std::ifstream fileIn(fileName);
    std::vector<std::string> lines;
    std::string line;
    while (std::getline(fileIn, line)) {
        lines.push_back(line);
    }
    fileIn.close();
    return lines;
}

int main() {
    std::vector<std::string> sourceCode = readFile();
    Lexer lex(sourceCode);
    lex.lexCode();
    for (const auto& token : lex.getTokens()) {
        std::cout << "Token type: " << static_cast<int>(token.type) << " Token value: " << token.value << '\n';
    }

    return 0;
}
