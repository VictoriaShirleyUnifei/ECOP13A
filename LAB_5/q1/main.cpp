#include <iostream>
#include "q1.h"

using namespace std;

int main()
{
    CFracao f1, f2;

    cout << "Digite a primeira fracao (formato a/b): ";
    cin >> f1;

    cout << "Digite a segunda fracao (formato a/b): ";
    cin >> f2;

    cout << "\nFracao 1: " << f1 << endl;
    cout << "Fracao 2: " << f2 << endl;

    cout << "\nSoma: " << f1 + f2 << endl;
    cout << "Subtracao: " << f1 - f2 << endl;
    cout << "Multiplicacao: " << f1 * f2 << endl;
    cout << "Divisao: " << f1 / f2 << endl;

    cout << "\nComparacoes:" << endl;
    cout << "f1 < f2? " << (f1 < f2 ? "Sim" : "Nao") << endl;
    cout << "f1 > f2? " << (f1 > f2 ? "Sim" : "Nao") << endl;
    cout << "f1 <= f2? " << (f1 <= f2 ? "Sim" : "Nao") << endl;
    cout << "f1 >= f2? " << (f1 >= f2 ? "Sim" : "Nao") << endl;
    cout << "f1 == f2? " << (f1 == f2 ? "Sim" : "Nao") << endl;
    cout << "f1 != f2? " << (f1 != f2 ? "Sim" : "Nao") << endl;

    cout << "\nf1 como float: " << f1.ComoFloat() << endl;
    cout << "f2 como float: " << f2.ComoFloat() << endl;

    return 0;
}
