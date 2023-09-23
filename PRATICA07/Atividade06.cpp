#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    char continuar;
    
    do {
        
        int matricula;
        double nota1, nota2, nota3;

        
        cout << "Digite a matricula do aluno: ";
        cin >> matricula;
        cout << "Digite as tres notas do aluno (separadas por espaco): ";
        cin >> nota1 >> nota2 >> nota3;

        
        double media = (nota1 + nota2 + nota3) / 3.0;

        
        cout << fixed << setprecision(2);
        cout << "Matricula: " << matricula << endl;
        cout << "Nota 1: " << nota1 << endl;
        cout << "Nota 2: " << nota2 << endl;
        cout << "Nota 3: " << nota3 << endl;
        cout << "Media: " << media << endl;

        
        cout << "Deseja prosseguir com outro aluno? (S/N): ";
        cin >> continuar;
    } while (continuar == 'S' || continuar == 's');

    return 0;
}