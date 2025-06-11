#include "poligono.h"

PoligonoRegular::PoligonoRegular(int n, double b) {
    if (n < 3 || n > 10) {
        cout << "Numero de lados invalido (deve ser entre 3 e 10). Definindo como 3.\n";
        n = 3;
    }
    lados = n;
    comprimento = b;
}

double PoligonoRegular::area() {
    double pi = acos(-1);
    return (lados * pow(comprimento, 2)) / (4 * tan(pi / lados));
}

double PoligonoRegular::perimetro() {
    return lados * comprimento;
}

void PoligonoRegular::nomePoligono() {
    switch (lados) {
        case 3: cout << "Triangulo" << endl; break;
        case 4: cout << "Quadrado" << endl; break;
        case 5: cout << "Pentagono" << endl; break;
        case 6: cout << "Hexagono" << endl; break;
        case 7: cout << "Heptagono" << endl; break;
        case 8: cout << "Octogono" << endl; break;
        case 9: cout << "Eneagono" << endl; break;
        case 10: cout << "Decagono" << endl; break;
        default: cout << "Poligono nao identificado" << endl;
    }
}
