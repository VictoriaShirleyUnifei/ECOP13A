#include "q2.h"
#include <cmath>

Polinomio::Polinomio(int grau) {
    coef.resize(grau + 1, 0.0);
}

int Polinomio::grau() const {
    return coef.size() - 1;
}

double& Polinomio::operator[](int i) {
    return coef[i];
}

const double& Polinomio::operator[](int i) const {
    return coef[i];
}

Polinomio Polinomio::operator+(const Polinomio& outro) const {
    int maxGrau = max(grau(), outro.grau());
    Polinomio resultado(maxGrau);

    for (int i = 0; i <= maxGrau; ++i) {
        double a = (i <= grau()) ? coef[i] : 0;
        double b = (i <= outro.grau()) ? outro.coef[i] : 0;
        resultado[i] = a + b;
    }

    return resultado;
}

Polinomio Polinomio::operator-(const Polinomio& outro) const {
    int maxGrau = max(grau(), outro.grau());
    Polinomio resultado(maxGrau);

    for (int i = 0; i <= maxGrau; ++i) {
        double a = (i <= grau()) ? coef[i] : 0;
        double b = (i <= outro.grau()) ? outro.coef[i] : 0;
        resultado[i] = a - b;
    }

    return resultado;
}

istream& operator>>(istream& in, Polinomio& p) {
    for (int i = p.grau(); i >= 0; --i) {
        cout << "Coeficiente de x^" << i << ": ";
        in >> p.coef[i];
    }
    return in;
}

//d
ostream& operator<<(ostream& out, const Polinomio& p) {
    bool primeiro = true;
    for (int i = p.grau(); i >= 0; --i) {
        double c = p.coef[i];
        if (c != 0) {
            if (!primeiro) {
                out << (c > 0 ? " + " : " - ");
                out << abs(c);
            } else {
                out << c;
                primeiro = false;
            }

            if (i > 0)
                out << "x^" << i;
        }
    }
    if (primeiro) out << "0";
    return out;
}

//a
bool Polinomio::operator>(const Polinomio& outro) const {
    return grau() > outro.grau();
}

bool Polinomio::operator<(const Polinomio& outro) const {
    return grau() < outro.grau();
}

bool Polinomio::operator>=(const Polinomio& outro) const {
    return grau() >= outro.grau();
}

bool Polinomio::operator<=(const Polinomio& outro) const {
    return grau() <= outro.grau();
}

//b
bool Polinomio::operator==(const Polinomio& outro) const {
    if (grau() != outro.grau()) return false;
    for (int i = 0; i <= grau(); ++i) {
        if (coef[i] != outro.coef[i])
            return false;
    }
    return true;
}

bool Polinomio::operator!=(const Polinomio& outro) const {
    return !(*this == outro);
}

//c
Polinomio::operator float() const {
    return static_cast<float>(coef[0]); // valor do polinômio em x = 0
}

