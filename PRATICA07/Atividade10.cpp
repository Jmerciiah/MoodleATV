#include <iostream>
#include <cmath>

using namespace std;

int contarDigitos(int num) {
    int contador = 0;
    while (num != 0) {
        num /= 10;
        contador++;
    }
    return contador;
}

bool ehArmstrong(int num) {
    int original = num;
    int soma = 0;
    int digitos = contarDigitos(num);

    while (num != 0) {
        int digito = num % 10;
        soma += pow(digito, digitos);
        num /= 10;
    }

    return soma == original;
}

int main() {
    int numero;

    cout << "Digite um numero inteiro: ";
    cin >> numero;

    if (ehArmstrong(numero)) {
        cout << numero << " é um numero Armstrong." << endl;
    } else {
        cout << numero << " nao é um numero Armstrong." << endl;
    }

    return 0;
}