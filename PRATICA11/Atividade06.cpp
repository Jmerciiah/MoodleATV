#include <iostream>

int* intercala(int *vet1, int tam1, int *vet2, int tam2) {
    
    int tamResultado = tam1 + tam2;

    
    int *resultado = new int[tamResultado];

    int i = 0, j = 0, k = 0;

    
    while (i < tam1 && j < tam2) {
        resultado[k++] = vet1[i++];
        resultado[k++] = vet2[j++];
    }

    
    while (i < tam1) {
        resultado[k++] = vet1[i++];
    }

    
    while (j < tam2) {
        resultado[k++] = vet2[j++];
    }

    return resultado;
}

int main() {
    int vetor1[] = {1, 3, 5};
    int tam1 = sizeof(vetor1) / sizeof(vetor1[0]);

    int vetor2[] = {2, 4, 6, 8};
    int tam2 = sizeof(vetor2) / sizeof(vetor2[0]);

    int *resultado = intercala(vetor1, tam1, vetor2, tam2);

    int tamResultado = tam1 + tam2;

    std::cout << "Vetor intercalado: ";
    for (int i = 0; i < tamResultado; i++) {
        std::cout << resultado[i] << " ";
    }
    std::cout << std::endl;

    
    delete[] resultado;

    return 0;
}