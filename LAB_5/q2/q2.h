#ifndef COMPLEXO_H
#define COMPLEXO_H

#include <iostream>
using namespace std;

class Complexo {
    double real, imaginario;
    static int contator;

public:
    Complexo(double r = 0, double i = 0);
    ~Complexo();

    double getReal() const { return real; }
    double getImaginario() const { return imaginario; }

    Complexo& setReal(double r);
    Complexo& setImaginario(double i);

    double modulo() const;

    // Sobrecarga de operadores aritméticos
    Complexo operator+(const Complexo& c) const;
    Complexo operator-(const Complexo& c) const;
    Complexo operator*(const Complexo& c) const;
    Complexo operator/(const Complexo& c) const;

    // Sobrecarga de operadores de comparação (baseado no módulo)
    bool operator==(const Complexo& c) const;
    bool operator!=(const Complexo& c) const;
    bool operator<(const Complexo& c) const;
    bool operator>(const Complexo& c) const;
    bool operator<=(const Complexo& c) const;
    bool operator>=(const Complexo& c) const;

    // Sobrecarga de entrada/saída
    friend ostream& operator<<(ostream& os, const Complexo& c);
    friend istream& operator>>(istream& is, Complexo& c);
};

#endif
