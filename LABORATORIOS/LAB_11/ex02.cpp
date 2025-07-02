// ex02.cpp
#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int> minhaLista;
    int escolha;

    do {
        cout << "===============================" << endl;
        cout << "Implementacao de Lista no STL" << endl;
        cout << "===============================" << endl;
        cout << "1. Inserir elemento na frente" << endl;
        cout << "2. Inserir elemento no final" << endl;
        cout << "3. Excluir elemento na frente" << endl;
        cout << "4. Excluir elemento no final" << endl;
        cout << "5. Exibir primeiro elemento da lista" << endl;
        cout << "6. Exibir ultimo elemento da lista" << endl;
        cout << "7. Tamanho da lista" << endl;
        cout << "8. Redimensionar lista" << endl;
        cout << "9. Remover elementos com valores especificos" << endl;
        cout << "10. Remover valores duplicados" << endl;
        cout << "11. Reverter a ordem dos elementos" << endl;
        cout << "12. Ordenar a lista" << endl;
        cout << "13. Sair" << endl;
        cout << "Escolha uma opcao: ";
        cin >> escolha;

        switch (escolha) {
            case 1: {
                int valor;
                cout << "Entre com o valor a ser inserido na frente: ";
                cin >> valor;
                minhaLista.push_front(valor);
                break;
            }
            case 2: {
                int valor;
                cout << "Entre com o valor a ser inserido no final: ";
                cin >> valor;
                minhaLista.push_back(valor);
                break;
            }
            case 3:
                if (!minhaLista.empty()) {
                    cout << "Elemento " << minhaLista.front() << " removido da frente." << endl;
                    minhaLista.pop_front();
                } else {
                    cout << "A lista esta vazia. Nada a remover." << endl;
                }
                break;
            case 4:
                if (!minhaLista.empty()) {
                    cout << "Elemento " << minhaLista.back() << " removido do final." << endl;
                    minhaLista.pop_back();
                } else {
                    cout << "A lista esta vazia. Nada a remover." << endl;
                }
                break;
            case 5:
                if (!minhaLista.empty()) {
                    cout << "Primeiro elemento da lista: " << minhaLista.front() << endl;
                } else {
                    cout << "A lista esta vazia." << endl;
                }
                break;
            case 6:
                if (!minhaLista.empty()) {
                    cout << "Ultimo elemento da lista: " << minhaLista.back() << endl;
                } else {
                    cout << "A lista esta vazia." << endl;
                }
                break;
            case 7:
                cout << "Tamanho da lista: " << minhaLista.size() << endl;
                break;
            case 8: {
                size_t novoTamanho;
                cout << "Digite o novo tamanho da lista: ";
                cin >> novoTamanho;
                minhaLista.resize(novoTamanho);
                cout << "Lista redimensionada para " << novoTamanho << " elementos." << endl;
                break;
            }
            case 9: {
                int valor;
                cout << "Digite o valor a ser removido da lista: ";
                cin >> valor;
                minhaLista.remove(valor);
                cout << "Todos os elementos com valor " << valor << " foram removidos." << endl;
                break;
            }
            case 10:
                minhaLista.unique();
                cout << "Valores duplicados removidos (somente duplicatas consecutivas)." << endl;
                break;
            case 11:
                minhaLista.reverse();
                cout << "A lista foi invertida." << endl;
                break;
            case 12:
                minhaLista.sort();
                cout << "A lista foi ordenada em ordem crescente." << endl;
                break;
            case 13:
                cout << "Programa finalizado!" << endl;
                break;
            default:
                cout << "Opcao invalida! Escolha entre 1 e 13." << endl;
        }

    } while (escolha != 13);

    return 0;
}
