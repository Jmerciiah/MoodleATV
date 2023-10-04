#include <iostream>

void calcula(int &X, int &Y) {
    int soma = X + Y;
    int subtracao = X - Y;

    X = soma;
    Y = subtracao;
}

int main() {
    int num1, num2;

    std::cout << "Digite dois números inteiros: ";
    std::cin >> num1 >> num2;

    calcula(num1, num2);

    std::cout << "A soma dos números é: " << num1 << std::endl;
    std::cout << "A subtração dos números é: " << num2 << std::endl;

    return 0;
}