#include <iostream>
#include <climits>

using namespace std;

int main() {
    int valor;
    
    
    cout << "Digite um número inteiro: ";
    cin >> valor;

    
    cout << "O valor " << valor << " " << ((valor >= SHRT_MIN && valor <= SHRT_MAX) ? "pertence ao intervalo dos short int" : "é maior que um short int") << endl;

    return 0;
}