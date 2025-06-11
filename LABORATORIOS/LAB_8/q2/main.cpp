#include <iostream>
#include <vector>
#include "q2.h"

int main() {
    vector<Ponto*> formas;

    Ponto* p = new Ponto();
    Circulo* c = new Circulo();
    Cilindro* ci = new Cilindro();

    cout << "[Entrada de dados]\n";
    cin >> *p;
    cin >> *c;
    cin >> *ci;

    formas.push_back(p);
    formas.push_back(c);
    formas.push_back(ci);

    cout << "\n[Saída dos objetos com polimorfismo]\n";
    for (Ponto* forma : formas) {
        cout << *forma 
             << " | Área: " << forma->area() 
             << " | Volume: " << forma->volume() << endl;
    }

    // Libera memória
    for (Ponto* forma : formas) {
        delete forma;
    }

    return 0;
}
