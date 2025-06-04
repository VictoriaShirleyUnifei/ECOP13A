#include <iostream>
#include <iomanip>
#include "q3.h"
using namespace std;

int main() {
    int grau;
    cout << "Digite o grau do polinômio: ";
    cin >> grau;

    Polinomio p(grau);
    cin >> p;

    cout << "\nPolinômio P(x) = " << p << endl;
    cout << "Derivada P'(x) = " << p.derivada() << endl;

    double x0, epsilon, raiz;
    int maxIter;

    cout << "\nAproximação inicial (x0): ";
    cin >> x0;
    cout << "Número máximo de iterações: ";
    cin >> maxIter;
    cout << "Precisão (epsilon): ";
    cin >> epsilon;

    if (p.encontrarRaizNewton(x0, maxIter, epsilon, raiz)) {
        cout << fixed << setprecision(6);
        cout << "Raiz encontrada: x = " << raiz << endl;
        cout << "P(x) = " << p.avaliar(raiz) << endl;
    } else {
        cout << "Não foi possível encontrar raiz com os parâmetros fornecidos." << endl;
    }

    return 0;
}
