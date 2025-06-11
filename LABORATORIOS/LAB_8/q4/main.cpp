#include <iostream>
#include <vector>
#include "q4.h" 

using namespace std;

int main() {
    vector<Ponto*> objetos;
    int opcao;

    while (true) {
        cout << "\n[Menu de Criação de Objetos]\n";
        cout << "1 - Criar Ponto\n";
        cout << "2 - Criar Círculo\n";
        cout << "3 - Criar Cilindro\n";
        cout << "0 - Sair e mostrar todos os objetos\n";
        cout << "Opção: ";
        cin >> opcao;

        if (opcao == 0) break;

        switch (opcao) {
            case 1: {
                Ponto* p = new Ponto();
                cin >> *p;
                objetos.push_back(p);
                break;
            }
            case 2: {
                Circulo* c = new Circulo();
                cin >> *c;
                objetos.push_back(c);
                break;
            }
            case 3: {
                Cilindro* ci = new Cilindro();
                cin >> *ci;
                objetos.push_back(ci);
                break;
            }
            default:
                cout << "Opção inválida. Tente novamente.\n";
        }
    }

    cout << "\n[Objetos Criados]\n";
    for (Ponto* obj : objetos) {
        cout << *obj 
             << " | Área: " << obj->area() 
             << " | Volume: " << obj->volume() << endl;
    }

    // Libera memória
    for (Ponto* obj : objetos) {
        delete obj;
    }

    return 0;
}
