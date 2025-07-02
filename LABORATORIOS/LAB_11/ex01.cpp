// ex01.cpp
#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> pilha;
    int escolha;
    do {
        cout << "---------------------------" << endl;
        cout << "Programa de Pilha STL" << endl;
        cout << "---------------------------" << endl;
        cout << "1. Insira um elemento na pilha" << endl;
        cout << "2. Remova um elemento da pilha" << endl;
        cout << "3. Tamanho da pilha" << endl;
        cout << "4. Primeiro elemento da pilha" << endl;
        cout << "5. Sair" << endl;
        cout << "Escolha (1-5): ";
        cin >> escolha;

        switch (escolha) {
            case 1: {
                int valor;
                cout << "Entre com o valor a ser inserido: ";
                cin >> valor;
                pilha.push(valor);
                break;
            }
            case 2:
                if (!pilha.empty()) {
                    cout << "Elemento " << pilha.top() << " removido" << endl;
                    pilha.pop();
                } else {
                    cout << "A pilha esta vazia. Nada a remover." << endl;
                }
                break;
            case 3:
                cout << "Tamanho da pilha: " << pilha.size() << endl;
                break;
            case 4:
                if (!pilha.empty()) {
                    cout << "Primeiro elemento da pilha: " << pilha.top() << endl;
                } else {
                    cout << "A pilha esta vazia." << endl;
                }
                break;
            case 5:
                cout << "Programa finalizado!" << endl;
                break;
            default:
                cout << "Opcao invalida! Escolha entre 1 e 5." << endl;
        }

    } while (escolha != 5);

    return 0;
}
