#include <iostream>
#include <vector>
#include <string>
#include <iomanip> 

using namespace std;

int main() {
    try {
        
        int N;
        cout << "Informe o limite de alunos (N): ";
        cin >> N;

        if (N <= 0) {
            cout << "O limite de alunos deve ser um número positivo." << endl;
            return 1; 
        }

        
        vector<string> nomes;
        vector<vector<float>> notas;

        
        for (int i = 0; i < N; ++i) {
            string nome;
            cout << "Digite o nome do aluno " << i + 1 << ": ";
            cin.ignore(); 
            getline(cin, nome);

            float nota1, nota2;
            cout << "Digite a primeira nota do aluno " << i + 1 << ": ";
            cin >> nota1;
            cout << "Digite a segunda nota do aluno " << i + 1 << ": ";
            cin >> nota2;

            
            nomes.push_back(nome);
            notas.push_back({nota1, nota2});
        }

        
        cout << "\nNomes e médias dos alunos:" << endl;
        for (int i = 0; i < N; ++i) {
            float media = (notas[i][0] + notas[i][1]) / 2.0;
            cout << "Aluno " << i + 1 << ": " << nomes[i] << " - Média: " << fixed << setprecision(2) << media << endl;
        }

    } catch (...) {
        cout << "Ocorreu um erro inesperado." << endl;
        return 1;
    }

    return 0; 
}