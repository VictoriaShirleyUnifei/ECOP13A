#include <iostream>
#include "q2.h"

using namespace std;

int main() {
    Complexo a(3, 2);
    Complexo b(1, -4);

    cout << "Complexo A: " << a << endl;
    cout << "Complexo B: " << b << endl;

    // Aritméticos
    cout << "A + B = " << a + b << endl;
    cout << "A - B = " << a - b << endl;
    cout << "A * B = " << a * b << endl;
    cout << "A / B = " << a / b << endl;

    // Comparações
    cout << "A == B? " << (a == b ? "Sim" : "Nao") << endl;
    cout << "A != B? " << (a != b ? "Sim" : "Nao") << endl;
    cout << "A < B? "  << (a < b ? "Sim" : "Nao") << endl;
    cout << "A > B? "  << (a > b ? "Sim" : "Nao") << endl;
    cout << "A <= B? " << (a <= b ? "Sim" : "Nao") << endl;
    cout << "A >= B? " << (a >= b ? "Sim" : "Nao") << endl;

    // Entrada de número complexo
    Complexo c;
    cout << "\nDigite um número complexo:" << endl;
    cin >> c;
    cout << "Você digitou: " << c << endl;

    return 0;
}
