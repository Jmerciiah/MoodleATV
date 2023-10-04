#include <iostream>
#include <cmath>

bool eh_primo(int numero) {
    if (numero <= 1) {
        return false;
    }

    int limite = sqrt(numero);

    for (int i = 2; i <= limite; i++) {
        if (numero % i == 0) {
            return false;
        }
    }

    return true;
}

int conta_primos(int *vet, int qtde) {
    int quantidade_primos = 0;

    for (int i = 0; i < qtde; i++) {
        if (eh_primo(vet[i])) {
            quantidade_primos++;
        }
    }

    return quantidade_primos;
}

int main() {
    int vetor[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int qtde = sizeof(vetor) / sizeof(vetor[0]);

    int quantidade_primos = conta_primos(vetor, qtde);

    std::cout << "Quantidade de números primos no vetor: " << quantidade_primos << std::endl;

    return 0;
}