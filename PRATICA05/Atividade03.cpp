#include <iostream>

using namespace std;

int main() {
    int a, b, c;

    
    cout << "Digite o primeiro número inteiro (a): ";
    cin >> a;

    cout << "Digite o segundo número inteiro (b): ";
    cin >> b;

    
    c = a + b;
    cout << "Soma de a e b em formato hexadecimal: " << hex << c << endl;

    
    c = a * b;
    cout << "Produto de a e b em formato octal: " << oct << c << endl;

    
    if (a - b < 0) {
        c = -(a - b);
    } else {
        c = a - b;
    }
    cout << "Módulo da diferença entre a e b: " << c << endl;

    
    if (b != 0) {
        c = a / b;
        cout << "Quociente de a dividido por b: " << c << endl;
    } else {
        cout << "A divisão por zero não é possível." << endl;
    }

    
    if (b != 0 && a % b == 0) {
        cout << "a é divisível de forma exata por b." << endl;
    } else if (b != 0) {
        cout << "a não é divisível de forma exata por b." << endl;
    }

    return 0;
}