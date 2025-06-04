#include "q3.h"
#include <cmath>
#include <iomanip>

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

Polinomio Polinomio::derivada() const {
    int g = grau();
    if (g == 0) return Polinomio(0);

    Polinomio deriv(g - 1);
    for (int i = 1; i <= g; ++i)
        deriv[i - 1] = i * coef[i];

    return deriv;
}

double Polinomio::avaliar(double x) const {
    double resultado = 0.0;
    for (int i = grau(); i >= 0; --i)
        resultado = resultado * x + coef[i];
    return resultado;
}

bool Polinomio::encontrarRaizNewton(double x0, int maxIter, double epsilon, double& raiz) const {
    Polinomio dp = derivada();
    double xn = x0;

    for (int i = 0; i < maxIter; ++i) {
        double fx = avaliar(xn);
        double dfx = dp.avaliar(xn);

        if (fabs(dfx) < 1e-10) return false;

        double xn1 = xn - fx / dfx;
        if (fabs(xn1 - xn) < epsilon) {
            raiz = xn1;
            return true;
        }

        xn = xn1;
    }

    raiz = xn;
    return false;
}

istream& operator>>(istream& in, Polinomio& p) {
    for (int i = p.grau(); i >= 0; --i) {
        cout << "Coeficiente de x^" << i << ": ";
        in >> p[i];
    }
    return in;
}

ostream& operator<<(ostream& out, const Polinomio& p) {
    bool primeiro = true;
    for (int i = p.grau(); i >= 0; --i) {
        if (p[i] != 0) {
            if (!primeiro)
                out << (p[i] > 0 ? " + " : " - ");
            else {
                if (p[i] < 0) out << "-";
                primeiro = false;
            }

            double val = fabs(p[i]);
            if (i == 0) out << val;
            else if (i == 1) out << val << "x";
            else out << val << "x^" << i;
        }
    }

    if (primeiro) out << "0";
    return out;
}
