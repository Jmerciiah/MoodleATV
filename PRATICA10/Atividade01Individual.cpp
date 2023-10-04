#include <iostream>
#include <vector>
#include <string>
#include <iomanip> // Inclui a biblioteca iomanip

using namespace std;

int main() {
    try {
        // Solicita o limite de alunos (N)
        int N;
        cout << "Informe o limite de alunos (N): ";
        cin >> N;

        if (N <= 0) {
            cout << "O limite de alunos deve ser um número positivo." << endl;
            return 1; // Saída de erro
        }

        // Inicializa vetores para nomes e notas
        vector<string> nomes;
        vector<vector<float>> notas;

        // Solicita nomes e notas dos alunos
        for (int i = 0; i < N; ++i) {
            string nome;
            cout << "Digite o nome do aluno " << i + 1 << ": ";
            cin.ignore(); // Limpa o buffer de entrada para evitar problemas com getline
            getline(cin, nome);

            float nota1, nota2;
            cout << "Digite a primeira nota do aluno " << i + 1 << ": ";
            cin >> nota1;
            cout << "Digite a segunda nota do aluno " << i + 1 << ": ";
            cin >> nota2;

            // Armazena nome e notas nos vetores
            nomes.push_back(nome);
            notas.push_back({nota1, nota2});
        }

        // Exibe os nomes e médias dos alunos
        cout << "\nNomes e médias dos alunos:" << endl;
        for (int i = 0; i < N; ++i) {
            float media = (notas[i][0] + notas[i][1]) / 2.0;
            cout << "Aluno " << i + 1 << ": " << nomes[i] << " - Média: " << fixed << setprecision(2) << media << endl;
        }

    } catch (...) {
        cout << "Ocorreu um erro inesperado." << endl;
        return 1; // Saída de erro
    }

    return 0; // Sucesso
}