// ex01.cpp
#include <iostream>
#include <queue>

using namespace std;

int main() {
    priority_queue<int> heap; // Heap do tipo max-heap por padrão

    int opcao = 0;

    cout << "---------------------------" << endl;
    cout << " Programa de Heap STL " << endl;
    cout << "---------------------------" << endl;

    do {
        cout << "\n1. Insira um elemento na heap" << endl;
        cout << "2. Remova um elemento da heap" << endl;
        cout << "3. Tamanho da heap" << endl;
        cout << "4. Primeiro elemento da heap" << endl;
        cout << "5. Sair" << endl;
        cout << "Escolha (1-5): ";
        cin >> opcao;

        switch (opcao) {
            case 1: {
                int valor;
                cout << "Entre com o valor a ser inserido: ";
                cin >> valor;
                heap.push(valor);
                break;
            }
            case 2: {
                if (!heap.empty()) {
                    cout << "Elemento " << heap.top() << " removido do topo da heap" << endl;
                    heap.pop();
                } else {
                    cout << "Heap vazia! Nada a remover." << endl;
                }
                break;
            }
            case 3: {
                cout << "Tamanho da heap: " << heap.size() << endl;
                break;
            }
            case 4: {
                if (!heap.empty()) {
                    cout << "Primeiro elemento da heap (topo): " << heap.top() << endl;
                } else {
                    cout << "Heap vazia!" << endl;
                }
                break;
            }
            case 5: {
                cout << "Programa finalizado!" << endl;
                break;
            }
            default: {
                cout << "Opção inválida! Escolha de 1 a 5." << endl;
                break;
            }
        }
    } while (opcao != 5);

    return 0;
}
