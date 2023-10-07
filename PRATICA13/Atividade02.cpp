#include <iostream>
#include <string>


struct Empregado {
    std::string nome;
    std::string sobrenome;
    int anoNascimento;
    std::string RG;
    int anoAdmissao;
    double salario;
};


void Reajusta_dez_porcento(Empregado vetor[], int quantidade) {
    for (int i = 0; i < quantidade; i++) {
        vetor[i].salario *= 1.10; // Aumento de 10%
    }
}

int main() {
    
    Empregado empregados[50];

    
    empregados[0] = {"João", "Silva", 1980, "123456789", 2010, 3000.0};
    empregados[1] = {"Maria", "Santos", 1990, "987654321", 2015, 3500.0};

    int quantidade_empregados = 2; 

    
    Reajusta_dez_porcento(empregados, quantidade_empregados);

    
    std::cout << "Dados dos empregados após o reajuste de 10%:\n";
    for (int i = 0; i < quantidade_empregados; i++) {
        std::cout << "Nome: " << empregados[i].nome << " " << empregados[i].sobrenome << std::endl;
        std::cout << "Ano de Nascimento: " << empregados[i].anoNascimento << std::endl;
        std::cout << "RG: " << empregados[i].RG << std::endl;
        std::cout << "Ano de Admissão: " << empregados[i].anoAdmissao << std::endl;
        std::cout << "Salário: " << empregados[i].salario << std::endl;
        std::cout << std::endl;
    }

    return 0;
}