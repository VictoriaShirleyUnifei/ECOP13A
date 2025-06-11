#ifndef PONTO_H
#define PONTO_H

#include <iostream>
using namespace std;

class Ponto {
private:
    double x, y;

public:
    Ponto(double x = 0.0, double y = 0.0);

    // Operadores de incremento
    Ponto& operator++();    // pré-incremento ++p
    Ponto operator++(int);  // pós-incremento p++

    // Métodos utilitários
    void exibir() const;

    // Amigável para acesso mais direto se quiser usar cout << p
    friend ostream& operator<<(ostream& out, const Ponto& p);
};

#endif
