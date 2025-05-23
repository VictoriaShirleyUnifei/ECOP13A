#ifndef POLINOMIO_H
#define POLINOMIO_H

#include <iostream>
#include <vector>
using namespace std;

class Polinomio {
private:
    vector<double> coef; 

public:
    Polinomio(int grau = 0);

    int grau() const;

    double& operator[](int i);
    const double& operator[](int i) const;

    // Operadores de comparação
    bool operator==(const Polinomio& outro) const;
    bool operator!=(const Polinomio& outro) const;
    bool operator>(const Polinomio& outro) const;
    bool operator<(const Polinomio& outro) const;
    bool operator>=(const Polinomio& outro) const;
    bool operator<=(const Polinomio& outro) const;
};

#endif 
