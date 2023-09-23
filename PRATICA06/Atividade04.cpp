#include <iostream>

using namespace std;

int main() {
    double x, y, z;

    // Parte b - Peça ao usuário para inserir dois números de ponto flutuante
    cout << "Digite o primeiro número de ponto flutuante: ";
    cin >> x;

    cout << "Digite o segundo número de ponto flutuante: ";
    cin >> y;

    // Parte c - Atribua à variável z a soma de x e y e imprima o resultado
    z = x + y;
    cout << "A soma de x e y é: " << z << endl;

    // Parte d - Atribua à variável z a média de x e y e imprima o resultado
    z = (x + y) / 2;
    cout << "A média de x e y é: " << z << endl;

    // Parte e - Atribua à variável z o produto de x e y e imprima o resultado
    z = x * y;
    cout << "O produto de x e y é: " << z << endl;

    // Parte f - Atribua à variável z o maior valor entre x e y e imprima o resultado
    z = (x > y) ? x : y;
    cout << "O maior valor entre x e y é: " << z << endl;

    // Parte g - Atribua à variável z o menor valor entre x e y e imprima o resultado
    z = (x < y) ? x : y;
    cout << "O menor valor entre x e y é: " << z << endl;

    return 0;
}