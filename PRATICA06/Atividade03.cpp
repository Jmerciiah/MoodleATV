#include <iostream>

using namespace std;

int main() {
    char ch1, ch2, ch3;

    
    cout << "Digite dois caracteres: ";
    cin >> ch1 >> ch2;

    
    ch3 = ch1 - 1;
    cout << "O caractere anterior a " << ch1 << " em decimal: " << int(ch3) << endl;
    cout << "O caractere anterior a " << ch1 << " em octal: " << oct << int(ch3) << endl;
    cout << "O caractere anterior a " << ch1 << " em hexadecimal: " << hex << int(ch3) << endl;
    if (isprint(ch3)) {
        cout << "O caractere anterior a " << ch1 << " como caractere: " << ch3 << endl;
    } else {
        cout << "O caractere anterior a " << ch1 << " como caractere: _" << endl;
    }

    
    ch3 = ch2 - 1;
    printf("O caractere anterior a %c em decimal: %d\n", ch2, int(ch3));
    printf("O caractere anterior a %c em octal: %o\n", ch2, int(ch3));
    printf("O caractere anterior a %c em hexadecimal: %x\n", ch2, int(ch3));
    if (isprint(ch3)) {
        printf("O caractere anterior a %c como caractere: %c\n", ch2, ch3);
    } else {
        printf("O caractere anterior a %c como caractere: _\n", ch2);
    }

    
    ch3 = (isupper(ch1)) ? 'A' : ' ';
    cout << "ch3 para ch1: " << ch3 << endl;

    
    ch3 = (islower(ch2)) ? 'a' : ' ';
    cout << "ch3 para ch2: " << ch3 << endl;

    
    ch3 = (isdigit(ch1) || isdigit(ch2)) ? '1' : ' ';
    cout << "ch3 para ch1 ou ch2: " << ch3 << endl;

    return 0;
}