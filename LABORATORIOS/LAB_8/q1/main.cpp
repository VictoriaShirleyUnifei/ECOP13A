// main.cpp
#include <iostream>
#include <vector>
#include "q1.h"

using namespace std;

int main() {
    vector<Politico*> politicos;
    int opcao;
    
    do {
        cout << "\nMenu de Cadastro de Políticos:\n";
        cout << "1 - Presidente\n";
        cout << "2 - Governador\n";
        cout << "3 - Prefeito\n";
        cout << "0 - Sair e imprimir todos\n";
        cout << "Escolha uma opção: ";
        cin >> opcao;
        cin.ignore(); // limpar o buffer do cin

        if (opcao >= 1 && opcao <= 3) {
            string nome, partido, regiao;

            cout << "Digite o nome: ";
            getline(cin, nome);
            cout << "Digite o partido: ";
            getline(cin, partido);

            if (opcao == 1) {
                cout << "Digite o país: ";
                getline(cin, regiao);
                politicos.push_back(new Presidente(nome, partido, regiao));
            }
            else if (opcao == 2) {
                cout << "Digite o estado: ";
                getline(cin, regiao);
                politicos.push_back(new Governador(nome, partido, regiao));
            }
            else if (opcao == 3) {
                cout << "Digite a cidade: ";
                getline(cin, regiao);
                politicos.push_back(new Prefeito(nome, partido, regiao));
            }
        }

    } while (opcao != 0);

    cout << "\n[Impressão de todos os políticos cadastrados:]\n";
    for (auto p : politicos) {
        p->Imprime();
        cout << endl;
    }

    // Libera a memória alocada
    for (auto p : politicos) {
        delete p;
    }

    return 0;
}
