// ex02.cpp
#include <iostream>
#include <set>

using namespace std;

int main() {
    multiset<int> arvore;  // Usa multiset para permitir valores repetidos

    int opcao = 0;

    cout << "======================================" << endl;
    cout << " Implementação de Árvore (set) no STL " << endl;
    cout << "======================================" << endl;

    do {
        cout << "\n1. Inserir elemento" << endl;
        cout << "2. Remover elementos com determinado valor" << endl;
        cout << "3. Exibir elementos em ordem" << endl;
        cout << "4. Exibir quantidade de elementos" << endl;
        cout << "5. Remover todos os elementos" << endl;
        cout << "6. Consultar quantidade de elementos com determinado valor" << endl;
        cout << "7. Sair" << endl;
        cout << "Escolha uma opção: ";
        cin >> opcao;

        switch (opcao) {
            case 1: {
                int valor;
                cout << "Digite o valor a ser inserido: ";
                cin >> valor;
                arvore.insert(valor);
                cout << "Valor " << valor << " inserido na árvore." << endl;
                break;
            }
            case 2: {
                int valor;
                cout << "Digite o valor a ser removido: ";
                cin >> valor;
                int removidos = arvore.erase(valor);
                cout << removidos << " elemento(s) com valor " << valor << " removido(s)." << endl;
                break;
            }
            case 3: {
                if (arvore.empty()) {
                    cout << "A árvore está vazia!" << endl;
                } else {
                    cout << "Elementos em ordem: ";
                    for (int x : arvore) {
                        cout << x << " ";
                    }
                    cout << endl;
                }
                break;
            }
            case 4: {
                cout << "Quantidade total de elementos: " << arvore.size() << endl;
                break;
            }
            case 5: {
                arvore.clear();
                cout << "Todos os elementos foram removidos." << endl;
                break;
            }
            case 6: {
                int valor;
                cout << "Digite o valor a ser consultado: ";
                cin >> valor;
                cout << "Quantidade de elementos com valor " << valor << ": " << arvore.count(valor) << endl;
                break;
            }
            case 7: {
                cout << "Programa finalizado!" << endl;
                break;
            }
            default: {
                cout << "Opção inválida! Escolha de 1 a 7." << endl;
                break;
            }
        }
    } while (opcao != 7);

    return 0;
}
