#include <iostream>

using namespace std;

int main() {
    int num1, num2;

    
    cout << "Digite o primeiro número inteiro: ";
    cin >> num1;

    cout << "Digite o segundo número inteiro: ";
    cin >> num2;

    
    (num1 == num2) ? cout << "Estes números são iguais." : 
                    cout << "O maior número é " << ((num1 > num2) ? num1 : num2) << " e maior." << endl;

    
    int maior = (num1 > num2) ? num1 : num2;
    (maior % 2 == 0) ? cout << "O maior valor é par." : cout << "O maior valor é ímpar.";

    return 0;
}