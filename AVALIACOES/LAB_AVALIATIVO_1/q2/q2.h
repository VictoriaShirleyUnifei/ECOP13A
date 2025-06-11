#ifndef Q2_H
#define Q2_H

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

        //a - comparacao por grau
        bool operator>(const Polinomio& outro) const;
        bool operator<(const Polinomio& outro) const;
        bool operator>=(const Polinomio& outro) const;
        bool operator<=(const Polinomio& outro) const;

        //b - comparacao por coeficientes
        bool operator==(const Polinomio& outro) const;
        bool operator!=(const Polinomio& outro) const;

        //c - conversao para float(valor do polinomio em x = 0)
        operator float() const;
};

#endif 
