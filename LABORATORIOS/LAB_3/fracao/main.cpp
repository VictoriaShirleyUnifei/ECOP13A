#include <iostream>
#include "fracao.h"

using namespace std;

int main() {
    CFracao f1(2, 4);
    CFracao f2(3, 6);

    cout << "Fracao 1: ";
    f1.Print();
    cout << endl;

    cout << "Fracao 2: ";
    f2.Print();
    cout << endl;

    // Soma
    CFracao soma = f1.Somar(f2);
    cout << "Soma: ";
    soma.Print();
    cout << endl;

    // Subtração
    CFracao sub = f1.Subtrair(f2);
    cout << "Subtracao: ";
    sub.Print();
    cout << endl;

    // Multiplicação
    CFracao mult = f1.Multiplicar(f2);
    cout << "Multiplicacao: ";
    mult.Print();
    cout << endl;

    // Divisão
    CFracao div = f1.Dividir(f2);
    cout << "Divisao: ";
    div.Print();
    cout << endl;

    // Comparações
    cout << "f1 < f2? " << (f1.MenorQue(f2) ? "Sim" : "Nao") << endl;
    cout << "f1 > f2? " << (f1.MaiorQue(f2) ? "Sim" : "Nao") << endl;
    cout << "f1 == f2? " << (f1.Igual(f2) ? "Sim" : "Nao") << endl;

    // Conversão para float
    cout << "f1 como float: " << f1.ComoFloat() << endl;
    cout << "f2 como float: " << f2.ComoFloat() << endl;

    return 0;
}
