#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


struct Produto {
    string codigo;
    string nome;
    double preco;
};

const int MAX_PRODUTOS = 300;


Produto produtos[MAX_PRODUTOS];


int totalProdutos = 0;


bool InserirProduto(string codigo, string nome, double preco) {
    
    for (int i = 0; i < totalProdutos; i++) {
        if (produtos[i].codigo == codigo || produtos[i].nome == nome) {
            return false; 
        }
    }

    
    if (totalProdutos < MAX_PRODUTOS) {
        produtos[totalProdutos].codigo = codigo;
        produtos[totalProdutos].nome = nome;
        produtos[totalProdutos].preco = preco;
        totalProdutos++;
        return true;
    } else {
        return false; 
    }
}


bool ExcluirProduto(string codigo) {
    for (int i = 0; i < totalProdutos; i++) {
        if (produtos[i].codigo == codigo) {
            
            for (int j = i; j < totalProdutos - 1; j++) {
                produtos[j] = produtos[j + 1];
            }
            totalProdutos--;
            return true;
        }
    }
    return false; 
}


void ListarProdutos() {
    cout << "Lista de Produtos:\n";
    cout << "--------------------------------------------\n";
    cout << "Código\tNome\t\tPreço\n";
    cout << "--------------------------------------------\n";
    for (int i = 0; i < totalProdutos; i++) {
        cout << produtos[i].codigo << "\t" << setw(20) << left << produtos[i].nome << "\t" << fixed << setprecision(2) << produtos[i].preco << endl;
    }
    cout << "--------------------------------------------\n";
}

// Função para consultar o preço de um produto pelo código
double ConsultarPreco(string codigo) {
    for (int i = 0; i < totalProdutos; i++) {
        if (produtos[i].codigo == codigo) {
            return produtos[i].preco;
        }
    }
    return -1.0; // Código não encontrado
}

int main() {
    int opcao;
    string codigo, nome;
    double preco;

    while (true) {
        cout << "Supermercado - Consulta de Preço\n";
        cout << "1. Inserir novo produto\n";
        cout << "2. Excluir produto cadastrado\n";
        cout << "3. Listar todos os produtos\n";
        cout << "4. Consultar preço de um produto\n";
        cout << "5. Sair\n";
        cout << "Escolha uma opção: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                cout << "Informe o código do produto (13 caracteres): ";
                cin.ignore();
                getline(cin, codigo);
                cout << "Informe o nome do produto (até 20 caracteres): ";
                getline(cin, nome);
                cout << "Informe o preço do produto: ";
                cin >> preco;

                if (InserirProduto(codigo, nome, preco)) {
                    cout << "Produto cadastrado com sucesso!\n";
                } else {
                    cout << "Erro: Produto já cadastrado ou limite de produtos atingido.\n";
                }
                break;

            case 2:
                cout << "Informe o código do produto a ser excluído: ";
                cin.ignore();
                getline(cin, codigo);

                if (ExcluirProduto(codigo)) {
                    cout << "Produto excluído com sucesso!\n";
                } else {
                    cout << "Erro: Produto não encontrado.\n";
                }
                break;

            case 3:
                ListarProdutos();
                break;

            case 4:
                cout << "Informe o código do produto para consultar o preço: ";
                cin.ignore();
                getline(cin, codigo);
                preco = ConsultarPreco(codigo);

                if (preco != -1.0) {
                    cout << "O preço do produto é: " << fixed << setprecision(2) << preco << endl;
                } else {
                    cout << "Produto não encontrado.\n";
                }
                break;

            case 5:
                cout << "Saindo do programa. Até mais!\n";
                return 0;

            default:
                cout << "Opção inválida. Tente novamente.\n";
                break;
        }
    }

    return 0;
}