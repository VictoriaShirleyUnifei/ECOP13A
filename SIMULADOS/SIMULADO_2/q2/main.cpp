#include "q2.h"
#include <iostream>

int main() {
    ListaOrdenada<int> lista;

    lista.insere(5);
    lista.insere(2);
    lista.insere(8);
    lista.insere(1);

    std::cout << "Lista ordenada: ";
    lista.imprime();  // Saída esperada: 1 2 5 8

    return 0;
}
