#include <iostream>

using namespace std;

int main() {
    char ch1, ch2, ch3;
    
    
    cout << "Digite um caractere: ";
    cin >> ch1;

    
    string tipoCaractere = (isupper(ch1)) ? "uma letra maiúscula" :
                            (islower(ch1)) ? "uma letra minúscula" :
                            (isdigit(ch1)) ? "um dígito" :
                            "outro tipo de caractere";

    cout << "O caractere digitado é " << tipoCaractere << endl;

    
    ch2 = 81;
    cout << "O caractere correspondente a 81 em decimal: " << int(ch2) << endl;
    cout << "O caractere correspondente a 81 em octal: " << oct << int(ch2) << endl;
    cout << "O caractere correspondente a 81 em hexadecimal: " << hex << int(ch2) << endl;
    cout << "O caractere correspondente a 81 como caractere: " << ch2 << endl;

    
    if (isupper(ch2)) {
        ch3 = tolower(ch2);
        cout << "O caractere correspondente em minúscula: " << int(ch3) << " (decimal), " << oct << int(ch3) << " (octal), " << hex << int(ch3) << " (hexadecimal), " << ch3 << " (caractere)." << endl;
    } else {
        cout << "O caractere não é uma letra maiúscula, não é possível converter para minúscula." << endl;
    }

    return 0;
}