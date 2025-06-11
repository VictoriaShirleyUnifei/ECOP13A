#include <iostream>
#include "q1.h"

using namespace std;

int main() {
    InteiroLongo vet[4];

    cout << "Digite 4 numeros para InteiroLongo:\n";
    for (int i = 0; i < 4; ++i) {
        cout << "Numero " << i + 1 << ": ";
        cin >> vet[i];
    }

    cout << "\nResultados:\n";
    for (int i = 0; i < 4; ++i) {
        cout << "InteiroLongo[" << i << "] = " << vet[i] << "\n";
        cout << "  Palindromo? " << (vet[i].ehPalindromo() ? "Sim" : "Nao") << "\n";
        cout << "  Tem tres digitos iguais? " << (vet[i].sequenciaTresIguais() ? "Sim" : "Nao") << "\n";
    }

    // Teste dos operadores
    InteiroLongo a(12321), b(1000);
    cout << "\nTeste dos operadores:\n";
    cout << "a = " << a << ", b = " << b << "\n";
    cout << "Pré-fixado --a: " << --a << "\n";
    cout << "Pós-fixado b--: " << b-- << " (depois: " << b << ")\n";
    a -= 100;
    cout << "a -= 100: " << a << "\n";

    return 0;
}
