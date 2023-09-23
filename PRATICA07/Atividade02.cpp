#include <iostream>

using namespace std;

int main (){
    int numero, original, reverso = 0;

    cout << "Digite um número inteiro: ";
    cin >> numero;

original = numero;

while (numero > 0)
   {
    int digito = numero % 10;
    reverso = reverso * 10 + digito;
    numero /= 10;
   }

   if (original == reverso){
   cout << "O Número " <<original <<" é um palindromo." << endl;
} else {
    cout << "O Número " << original << " não é um palindromo." << endl;
}
   
    return 0;
}