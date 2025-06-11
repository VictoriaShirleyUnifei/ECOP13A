#include <iostream>
#include "polinomio.h"

using namespace std;

int main() 
{
    int grau;
    cout << "Digite o grau do polinomio: ";
    cin >> grau;

    Polinomio p1(grau), p2(grau);

    cout << "Digite os coeficientes do primeiro polinomio:\n";
    cin >> p1;

    cout << "Digite os coeficientes do segundo polinomio:\n";
    cin >> p2;

    Polinomio soma = p1 + p2;
    Polinomio subtracao = p1 - p2;

    cout << "\nP1(x) = " << p1 << endl;
    cout << "P2(x) = " << p2 << endl;
    cout << "Soma: " << soma << endl;
    cout << "Subtracao: " << subtracao << endl;

    return 0;
}
