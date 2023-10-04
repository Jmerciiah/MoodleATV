#include <iostream>
#include <string>

std::string intersecaoStrings(const std::string &A, const std::string &B) {
    std::string C;

    for (char c : A) {
        if (B.find(c) != std::string::npos) {
            if (C.find(c) == std::string::npos) {
                C += c;
            }
        }
    }

    return C;
}

int main() {
    std::string stringA = "abcdef";
    std::string stringB = "bcghij";
    
    std::string resultado = intersecaoStrings(stringA, stringB);

    std::cout << "String A: " << stringA << std::endl;
    std::cout << "String B: " << stringB << std::endl;
    std::cout << "Interseção (String C): " << resultado << std::endl;

    return 0;
}