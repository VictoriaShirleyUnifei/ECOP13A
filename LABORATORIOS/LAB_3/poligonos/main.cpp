#include "poligono.h"

int main() {
    int n;
    double b;

    cout << "Digite o numero de lados (3 a 10): ";
    cin >> n;
    cout << "Digite o comprimento de cada lado: ";
    cin >> b;

    PoligonoRegular p(n, b);
    cout << "Nome do poligono: ";
    p.nomePoligono();
    cout << "Area: " << p.area() << endl;
    cout << "Perimetro: " << p.perimetro() << endl;

    return 0;
}
