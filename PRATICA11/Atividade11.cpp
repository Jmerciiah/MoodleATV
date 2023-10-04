#include <iostream>
#include <string>

std::string codificarString(const std::string &texto) {
    std::string codigo = texto;

    for (char &c : codigo) {
        if (std::isalpha(c)) {
            if (c == 'z' || c == 'Z') {
                c = c - 25; 
            } else {
                c++; 
            }
        }
    }

    return codigo;
}

std::string decodificarString(const std::string &codigo) {
    std::string texto = codigo;

    for (char &c : texto) {
        if (std::isalpha(c)) {
            if (c == 'a' || c == 'A') {
                c = c + 25; 
            } else {
                c--; 
            }
        }
    }

    return texto;
}

int main() {
    std::string textoOriginal = "Estruturas de Dados";
    std::string codigo = codificarString(textoOriginal);
    std::string textoDecodificado = decodificarString(codigo);

    std::cout << "Texto original: " << textoOriginal << std::endl;
    std::cout << "Código secreto: " << codigo << std::endl;
    std::cout << "Texto decodificado: " << textoDecodificado << std::endl;

    return 0;
}