#include <iostream>
#include <string>
#include <vector>

std::vector<int> *encontra_letra(const std::string &texto, char letra, int &tamanho) {
    std::vector<int> *indices = new std::vector<int>();

    for (int i = 0; i < texto.length(); i++) {
        if (texto[i] == letra) {
            indices->push_back(i);
        }
    }

    tamanho = indices->size();
    return indices;
}

int main() {
    std::string texto = "programacao";
    char letra = 'a';
    int tamanho = 0;

    std::vector<int> *indices = encontra_letra(texto, letra, tamanho);

    if (tamanho == 0) {
        std::cout << "A letra '" << letra << "' não foi encontrada na string." << std::endl;
    } else {
        std::cout << "A letra '" << letra << "' foi encontrada nas posições: ";
        for (int i = 0; i < tamanho; i++) {
            std::cout << (*indices)[i] << " ";
        }
        std::cout << std::endl;
    }

    
    delete indices;

    return 0;
}