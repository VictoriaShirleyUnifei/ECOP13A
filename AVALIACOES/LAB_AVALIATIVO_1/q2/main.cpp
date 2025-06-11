#include <iostream>
#include "q2.h"

using namespace std;

//e
int main() {
    int grau;
    cout << "Digite o grau do polinomio: ";
    cin >> grau;

    Polinomio p1(grau), p2(grau);

    cout << "Digite os coeficientes do primeiro polinomio:\n";
    cin >> p1;

    cout << "Digite os coeficientes do segundo polinomio:\n";
    cin >> p2;

    cout << "\nP1(x) = " << p1 << endl;
    cout << "P2(x) = " << p2 << endl;

    cout << "\nSoma: " << p1 + p2 << endl;
    cout << "Subtração: " << p1 - p2 << endl;

    cout << "\nComparações de grau:" << endl;
    cout << "P1 > P2? " << (p1 > p2 ? "Sim" : "Não") << endl;
    cout << "P1 < P2? " << (p1 < p2 ? "Sim" : "Não") << endl;
    cout << "P1 == P2? " << (p1 == p2 ? "Sim" : "Não") << endl;
    cout << "P1 != P2? " << (p1 != p2 ? "Sim" : "Não") << endl;

    cout << "\nValor de P1(0) = " << float(p1) << endl;
    cout << "Valor de P2(0) = " << float(p2) << endl;

    return 0;
}
