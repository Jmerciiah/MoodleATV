#include <iostream>

void multiplica_por_n(int *vet, int qtde, int n) {
    for (int i = 0; i < qtde; i++) {
        vet[i] *= n;
    }
}

int main() {
    int vetor[] = {1, 2, 3, 4, 5};
    int qtde = sizeof(vetor) / sizeof(vetor[0]);
    int multiplicador = 2;

    std::cout << "Vetor original: ";
    for (int i = 0; i < qtde; i++) {
        std::cout << vetor[i] << " ";
    }
    std::cout << std::endl;

    multiplica_por_n(vetor, qtde, multiplicador);

    std::cout << "Vetor após a multiplicação por " << multiplicador << ": ";
    for (int i = 0; i < qtde; i++) {
        std::cout << vetor[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

