#include "ponto.h"

Ponto::Ponto(double x, double y) : x(x), y(y) {}

// Pré-incremento: ++p
Ponto& Ponto::operator++() {
    ++x;
    ++y;
    return *this;
}

// Pós-incremento: p++
Ponto Ponto::operator++(int) {
    Ponto temp = *this;
    x++;
    y++;
    return temp;
}

void Ponto::exibir() const {
    cout << "(" << x << ", " << y << ")" << endl;
}

ostream& operator<<(ostream& out, const Ponto& p) {
    out << "(" << p.x << ", " << p.y << ")";
    return out;
}
