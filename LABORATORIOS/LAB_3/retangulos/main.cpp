#include <iostream>
#include "retangulo.h"

using namespace std;

int main() {
    CRetangulo vet[5];

    cout << "Entrada dos 5 objetos: " << endl;
    for (int i = 0; i < 5; i++) {
        cout << "\nRetangulo " << i + 1 << endl;
        vet[i].leitura();
    }

    cout << "\nImpressao dos retangulos:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "\nRetangulo " << i + 1 << ":" << endl;
        vet[i].imprime();
    }

    CRetangulo* ptrRet = new CRetangulo(); // objeto dinâmico

    cout << "Criando retangulo via ponteiro" << endl;
    ptrRet->leitura(); // usando o operador -> para acessar método
    cout << "Dados do retangulo via ponteiro" << endl;
    ptrRet->imprime();

    delete ptrRet; // liberar memória

    return 0;
}
