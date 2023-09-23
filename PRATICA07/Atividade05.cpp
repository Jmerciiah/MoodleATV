#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Inicialize a semente para gerar números aleatórios
    srand(static_cast<unsigned int>(time(0)));

    // Gere um número aleatório entre 1 e 100
    int numeroAleatorio = rand() % 100 + 1;

    int palpite;
    int tentativas = 0;

    cout << "Bem-vindo ao jogo de adivinhacao!" << endl;
    cout << "Tente adivinhar o numero entre 1 e 100." << endl;

    do {
        cout << "Digite o seu palpite: ";
        cin >> palpite;

        if (palpite < 1 || palpite > 100) {
            cout << "Por favor, digite um palpite dentro do intervalo de 1 a 100." << endl;
        } else {
            tentativas++;

            if (palpite < numeroAleatorio) {
                cout << "Palpite muito baixo. Tente novamente." << endl;
            } else if (palpite > numeroAleatorio) {
                cout << "Palpite muito alto. Tente novamente." << endl;
            } else {
                cout << "Parabens! Voce acertou o numero em " << tentativas << " tentativas." << endl;
            }
        }
    } while (palpite != numeroAleatorio);

    return 0;
}