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

    Polinomio operator+(const Polinomio& outro) const;
    Polinomio operator-(const Polinomio& outro) const;

    friend istream& operator>>(istream& in, Polinomio& p);
    friend ostream& operator<<(ostream& out, const Polinomio& p);
};

#endif 
