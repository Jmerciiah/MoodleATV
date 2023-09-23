#include <iostream>

using  namespace std;

int main () 
{
    int a, b, c;

    cout << "Digite um número inteiro: " << endl;
    cin >> a;

    cout << "Digite o segundo número inteiro: " << endl;
    cin >> b;

    c = 4* a + b / 3 - 5;

    cout << "O resultado da primeira expressão é: " << c << endl;

    c = 0.4 * (a + b) / (3 - 5);

    cout << "O resultado da segunda expressão é: " << c << endl;

    // c = (4* a + b) / (3 - 5);

    c = a * a + 2 * b + c;


    cout << "O resultado da nova expressão é: " << c << endl;

    // Os resultados são diferentes porque a ordem das operações são diferentes.

    // A primeira realiza as multiplicações e divisões antes da soma e subtração.

    // A segunda, os parenteses alteram a ordem das operações, fazendo com que
    // a soma seja feita antes da multiplicação e divisão.

return 0;

}