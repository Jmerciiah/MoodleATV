#include <iostream>

using namespace std;


bool ehPrimo(int numero) {
    if (numero <= 1) {
        return false;
    }
    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    cout << "Numeros primos de 1 a 100:" << endl;

    for (int i = 2; i <= 100; i++) {
        if (ehPrimo(i)) {
            cout << i << " ";
        }
    }

    cout << endl;

    return 0;
}