#include "polinomio.h"
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

ostream& operator<<(ostream& out, const Polinomio& p) {
    bool primeiro = true;
    for (int i = p.grau(); i >= 0; --i) {
        if (p.coef[i] != 0) {
            if (!primeiro) {
                out << (p.coef[i] > 0 ? " + " : " - ");
                out << abs(p.coef[i]);
            } else {
                out << p.coef[i];
                primeiro = false;
            }

            if (i > 0)
                out << "x^" << i;
        }
    }
    if (primeiro) out << "0"; // polinômio nulo
    return out;
}
