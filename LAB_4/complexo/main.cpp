#include <iostream>
#include <cmath>
#include "complexo.h"

using namespace std;

int main()
{
    Complexo a(1, 2);
    Complexo b(3, 4);
    Complexo aux;
    int ans;

    cout << "A: ";
    a.imprime();
    cout << "B: ";
    b.imprime();

    cout << "A + B: ";
    aux = a.somar(b);
    aux.imprime();

    cout << "A - B: ";
    aux = a.subtrair(b);
    aux.imprime();

    cout << "A * B: ";
    aux = a.multiplicar(b);
    aux.imprime();

    cout << "A / B: ";
    aux = a.dividir(b);
    aux.imprime();

    cout << "|A|: " << a.modulo() << endl;
    cout << "|B|: " << b.modulo() << endl;
}