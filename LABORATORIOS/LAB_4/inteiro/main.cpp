#include <iostream>
#include "inteiro.h"

int main() {
    Inteiro a, b, soma, diferenca;

    std::cout << "Digite o primeiro numero de até 30 dígitos: ";
    a.ler();

    std::cout << "Digite o segundo numero de até 30 dígitos: ";
    b.ler();

    soma = a.somar(b);
    diferenca = a.subtrair(b);

    std::cout << "\nSoma: ";
    soma.imprimir();

    std::cout << "Diferença (a - b): ";
    diferenca.imprimir();

    return 0;
}
