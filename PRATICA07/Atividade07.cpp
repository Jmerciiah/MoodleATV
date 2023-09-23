#include <iostream>

using namespace std;

int main () {
    int altura;

    cout << "Insira a altura para gerar o desenho: ";
    cin >> altura;

    cout << "A: " << endl;

    for (int i = 1; i <= altura; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }


cout << "B: " << endl;

    for(int i = 1; i <= altura; i++){
        for(int j = 1; j <= altura; j++){
            cout << '*';
        }
         cout <<endl;
    }

cout << "C: " << endl;

    for (int i = 1; i <= altura; i++) {
        for (int j = 1; j <= altura; j++) {
            if (i == 1 || i == altura || j == 1 || j == altura) {
                std::cout << '*';
            } else {
                std::cout << ' ';
            }
        }
        std::cout << std::endl;
    }



    return 0;
}