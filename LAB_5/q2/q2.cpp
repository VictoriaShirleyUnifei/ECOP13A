#include <iostream>
#include <cmath>
#include "q2.h"

using namespace std;

int Complexo::contator = 0;

Complexo::Complexo(double r, double i) : real(r), imaginario(i) {
    contator++;
}

Complexo::~Complexo() {
    contator--;
}

Complexo& Complexo::setReal(double r) {
    real = r;
    return *this;
}

Complexo& Complexo::setImaginario(double i) {
    imaginario = i;
    return *this;
}

double Complexo::modulo() const {
    return sqrt(real * real + imaginario * imaginario);
}

// Aritméticos
Complexo Complexo::operator+(const Complexo& c) const {
    return Complexo(real + c.real, imaginario + c.imaginario);
}

Complexo Complexo::operator-(const Complexo& c) const {
    return Complexo(real - c.real, imaginario - c.imaginario);
}

Complexo Complexo::operator*(const Complexo& c) const {
    return Complexo(real * c.real - imaginario * c.imaginario,
                    real * c.imaginario + imaginario * c.real);
}

Complexo Complexo::operator/(const Complexo& c) const {
    double den = c.real * c.real + c.imaginario * c.imaginario;
    double a = real * c.real + imaginario * c.imaginario;
    double b = imaginario * c.real - real * c.imaginario;
    return Complexo(a / den, b / den);
}

// Comparações (com base no módulo)
bool Complexo::operator==(const Complexo& c) const {
    return real == c.real && imaginario == c.imaginario;
}

bool Complexo::operator!=(const Complexo& c) const {
    return !(*this == c);
}

bool Complexo::operator<(const Complexo& c) const {
    return this->modulo() < c.modulo();
}

bool Complexo::operator>(const Complexo& c) const {
    return this->modulo() > c.modulo();
}

bool Complexo::operator<=(const Complexo& c) const {
    return !(*this > c);
}

bool Complexo::operator>=(const Complexo& c) const {
    return !(*this < c);
}

// Impressão
ostream& operator<<(ostream& os, const Complexo& c) {
    os << c.real;
    os << ((c.imaginario >= 0) ? "+" : "") << c.imaginario << "i";
    return os;
}

// Leitura
istream& operator>>(istream& is, Complexo& c) {
    cout << "Parte real: ";
    is >> c.real;
    cout << "Parte imaginaria: ";
    is >> c.imaginario;
    return is;
}
