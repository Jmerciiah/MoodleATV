#include <iostream>

using namespace std;

int main() {
    int limite;
    
    cout << "Digite um numero inteiro para o limite da sequencia de Fibonacci: ";
    cin >> limite;

    int termo1 = 0, termo2 = 1, proximoTermo = 0;

    cout << "Sequencia de Fibonacci ate " << limite << ":" << endl;

    while (termo1 <= limite) {
        cout << termo1 << " ";
        proximoTermo = termo1 + termo2;
        termo1 = termo2;
        termo2 = proximoTermo;
    }

    cout << endl;

    return 0;
}