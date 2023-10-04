#include <iostream>

int insere_meio(int vetor[], int &qtde, int elemento) {
    if (qtde < 0) {
        std::cout << "Quantidade inválida." << std::endl;
        return qtde;
    }


    int meio = qtde / 2;

    
    for (int i = qtde; i > meio; i--) {
        vetor[i] = vetor[i - 1];
    }


    vetor[meio] = elemento;

    
    qtde++;

    return qtde;
}

int main() {
    int vetor[100]; 
    int qtde = 6;   

    
    for (int i = 0; i < qtde; i++) {
        vetor[i] = i + 1;
    }

    std::cout << "Vetor original: ";
    for (int i = 0; i < qtde; i++) {
        std::cout << vetor[i] << " ";
    }
    std::cout << std::endl;

    int elemento = 100;
    insere_meio(vetor, qtde, elemento);

    std::cout << "Vetor após a inserção: ";
    for (int i = 0; i < qtde; i++) {
        std::cout << vetor[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}