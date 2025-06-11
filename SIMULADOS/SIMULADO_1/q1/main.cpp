// main.cpp

#include <iostream>
#include "q1.h"

using namespace std;

int main() {
    InteiroLongo vetor[5];

    // Leitura dos 5 Inteiros Longos
    for (int i = 0; i < 5; ++i) {
        int valor;
        do {
            cout << "Digite o " << i+1 << "º número inteiro de 7 dígitos: ";
            cin >> valor;
            if (valor < 1000000 || valor > 9999999)
                cout << "Erro: o número deve conter exatamente 7 dígitos." << endl;
        } while (valor < 1000000 || valor > 9999999);

        vetor[i] = InteiroLongo(valor);
    }

    // Verificação de palíndromos
    for (int i = 0; i < 5; ++i) {
        cout << vetor[i] << " ";
        if (vetor[i].ehPalindromo())
            cout << "é um palíndromo!" << endl;
        else
            cout << "não é um palíndromo." << endl;
    }

    // Teste de operadores
    InteiroLongo x(1234321);
    cout << "\nValor inicial de x: " << x << endl;

    cout << "x++: " << x++ << endl;
    cout << "Após x++: " << x << endl;

    cout << "++x: " << ++x << endl;

    x += 100;
    cout << "Após x += 100: " << x << endl;

    return 0;
}
