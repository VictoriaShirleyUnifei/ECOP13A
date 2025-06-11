// main.cpp
#include <iostream>
#include "q2.h"

int main() {
    Ponto p;
    Circulo c;
    Cilindro ci;

    cout << "[Entrada de dados]\n";
    cin >> p;
    cin >> c;
    cin >> ci;

    cout << "\n[Saída dos objetos]\n";
    cout << p << " | Área: " << p.area() << " | Volume: " << p.volume() << endl;
    cout << c << " | Área: " << c.area() << " | Volume: " << c.volume() << endl;
    cout << ci << " | Área: " << ci.area() << " | Volume: " << ci.volume() << endl;

    return 0;
}
