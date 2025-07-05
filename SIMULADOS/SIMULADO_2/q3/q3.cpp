// ex02_multimap.cpp
#include <iostream>
#include <map>

using namespace std;

int main() {
    multimap<int, string> minhaArvore;
    int escolha;

    do {
        cout << "======================================" << endl;
        cout << "Implementacao de Arvore (multimap) no STL" << endl;
        cout << "======================================" << endl;
        cout << "1. Inserir elemento" << endl;
        cout << "2. Remover elementos pelo valor da chave" << endl;
        cout << "3. Exibir elementos em ordem" << endl;
        cout << "4. Exibir quantidade de elementos" << endl;
        cout << "5. Remover todos os elementos" << endl;
        cout << "6. Consultar quantidade de elementos com determinada chave" << endl;
        cout << "7. Dada uma chave, exibir o valor do conteudo associado a ela" << endl;
        cout << "8. Sair" << endl;
        cout << "Escolha uma opcao: ";
        cin >> escolha;

        switch (escolha) {
            case 1: {
                int chave;
                string valor;
                cout << "Entre com a chave (int): ";
                cin >> chave;
                cout << "Entre com o valor (string): ";
                cin.ignore();
                getline(cin, valor);
                minhaArvore.insert({chave, valor});
                cout << "Elemento (" << chave << ", " << valor << ") inserido com sucesso!" << endl;
                break;
            }

            case 2: {
                int chave;
                cout << "Digite a chave dos elementos a remover: ";
                cin >> chave;
                int removidos = minhaArvore.erase(chave);
                cout << "Elementos removidos: " << removidos << endl;
                break;
            }

            case 3: {
                cout << "Elementos em ordem:" << endl;
                for (const auto& par : minhaArvore) {
                    cout << par.first << " => " << par.second << endl;
                }
                break;
            }

            case 4: {
                cout << "Quantidade total de elementos: " << minhaArvore.size() << endl;
                break;
            }

            case 5: {
                minhaArvore.clear();
                cout << "Todos os elementos foram removidos!" << endl;
                break;
            }

            case 6: {
                int chave;
                cout << "Digite a chave: ";
                cin >> chave;
                cout << "Quantidade de elementos com chave " << chave << ": "
                     << minhaArvore.count(chave) << endl;
                break;
            }

            case 7: {
                int chave;
                cout << "Digite a chave: ";
                cin >> chave;
                auto range = minhaArvore.equal_range(chave);
                cout << "Valores associados à chave " << chave << ":" << endl;
                for (auto it = range.first; it != range.second; ++it) {
                    cout << it->second << endl;
                }
                break;
            }

            case 8:
                cout << "Programa finalizado!" << endl;
                break;

            default:
                cout << "Opcao invalida! Escolha entre 1 e 8." << endl;
        }

        cout << endl;

    } while (escolha != 8);

    return 0;
}
