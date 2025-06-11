#include <iostream>
#include "ponto.h"

int main() {
    Ponto p(2.5, 3.5);

    cout << "Ponto inicial: " << p << endl;

    cout << "Pós-incremento (p++): " << p++ << endl;
    cout << "Após p++: " << p << endl;

    cout << "Pré-incremento (++p): " << ++p << endl;
    cout << "Após ++p: " << p << endl;

    return 0;
}
