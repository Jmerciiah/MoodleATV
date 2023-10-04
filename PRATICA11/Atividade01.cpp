#include <iostream>

void maxmin(int vetor[], int n, int& maximo, int& minimo);

int main() {
    int vetor[] = {5, 10, 3, 7, 2};
    int n = sizeof(vetor) / sizeof(vetor[0]);
    int maximo, minimo;

    maxmin(vetor, n, maximo, minimo);

    std::cout << "Máximo: " << maximo << std::endl;
    std::cout << "Mínimo: " << minimo << std::endl;

    return 0;
}

void maxmin(int vetor[], int n, int& maximo, int& minimo) {
    if (n <= 0) {
        
        maximo = minimo = 0;
        return;
    }

    
    maximo = minimo = vetor[0];

    for (int i = 1; i < n; ++i) {
        if (vetor[i] > maximo) {
            maximo = vetor[i];
        } else if (vetor[i] < minimo) {
            minimo = vetor[i];
        }
    }
}