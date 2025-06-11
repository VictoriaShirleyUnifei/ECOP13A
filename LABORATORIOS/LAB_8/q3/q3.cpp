// q2.cpp
#include "q3.h"
#include <cmath>

// ==== Ponto ====
Ponto::Ponto(double x, double y) : x(x), y(y) {}

double Ponto::getX() const { return x; }
double Ponto::getY() const { return y; }
void Ponto::setX(double x) { this->x = x; }
void Ponto::setY(double y) { this->y = y; }

double Ponto::area() const { return 0.0; }
double Ponto::volume() const { return 0.0; }

istream& operator>>(istream& in, Ponto& p) {
    cout << "Digite x e y: ";
    in >> p.x >> p.y;
    return in;
}

ostream& operator<<(ostream& out, const Ponto& p) {
    out << "Ponto(" << p.x << ", " << p.y << ")";
    return out;
}

// ==== Circulo ====
Circulo::Circulo(double x, double y, double r) : Ponto(x, y), raio(r) {}

double Circulo::getRaio() const { return raio; }
void Circulo::setRaio(double r) { raio = r; }

double Circulo::area() const {
    return M_PI * raio * raio;
}

double Circulo::volume() const {
    return 0.0;
}

istream& operator>>(istream& in, Circulo& c) {
    cout << "Digite x, y e raio: ";
    in >> c.x >> c.y >> c.raio;
    return in;
}

ostream& operator<<(ostream& out, const Circulo& c) {
    out << "Circulo(Centro: " << c.x << ", " << c.y << "; Raio: " << c.raio << ")";
    return out;
}

// ==== Cilindro ====
Cilindro::Cilindro(double x, double y, double r, double h) : Circulo(x, y, r), altura(h) {}

double Cilindro::getAltura() const { return altura; }
void Cilindro::setAltura(double h) { altura = h; }

double Cilindro::area() const {
    return 2 * M_PI * raio * (raio + altura); // Área total do cilindro
}

double Cilindro::volume() const {
    return M_PI * raio * raio * altura;
}

istream& operator>>(istream& in, Cilindro& c) {
    cout << "Digite x, y, raio e altura: ";
    in >> c.x >> c.y >> c.raio >> c.altura;
    return in;
}

ostream& operator<<(ostream& out, const Cilindro& c) {
    out << "Cilindro(Centro: " << c.x << ", " << c.y
        << "; Raio: " << c.raio << "; Altura: " << c.altura << ")";
    return out;
}
