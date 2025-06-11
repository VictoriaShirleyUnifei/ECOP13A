// main.cpp

#include <iostream>
#include "q2.h"
using namespace std;

int main() 
{
    int grau;
    cout << "Digite o grau do polinomio: ";
    cin >> grau;

    Polinomio p1(grau), p2(grau);

    // Teste dos operadores de comparação
    cout << "\nComparações:\n";

    cout << "P1 == P2? " << (p1 == p2 ? "Sim" : "Não") << endl;
    cout << "P1 != P2? " << (p1 != p2 ? "Sim" : "Não") << endl;
    cout << "P1 >  P2? " << (p1 > p2  ? "Sim" : "Não") << endl;
    cout << "P1 <  P2? " << (p1 < p2  ? "Sim" : "Não") << endl;
    cout << "P1 >= P2? " << (p1 >= p2 ? "Sim" : "Não") << endl;
    cout << "P1 <= P2? " << (p1 <= p2 ? "Sim" : "Não") << endl;

    return 0;
}
