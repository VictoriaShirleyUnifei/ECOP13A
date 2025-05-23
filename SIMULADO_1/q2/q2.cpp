#include "q2.h"
#include <cmath>

Polinomio::Polinomio(int grau)
{
    coef.resize(grau + 1, 0.0);
}

int Polinomio::grau() const
{
    return coef.size() - 1;
}

double &Polinomio::operator[](int i)
{
    return coef[i];
}

const double &Polinomio::operator[](int i) const
{
    return coef[i];
}

// Operador ==
bool Polinomio::operator==(const Polinomio &outro) const
{
    if (grau() != outro.grau())
        return false;
    for (int i = 0; i <= grau(); ++i)
    {
        if (coef[i] != outro.coef[i])
            return false;
    }
    return true;
}

// Operador !=
bool Polinomio::operator!=(const Polinomio &outro) const
{
    return !(*this == outro);
}

// Operador >
bool Polinomio::operator>(const Polinomio &outro) const
{
    if (grau() != outro.grau())
    {
        return grau() > outro.grau();
    }
    else
    {
        return coef[grau()] > outro.coef[outro.grau()];
    }
}

// Operador <
bool Polinomio::operator<(const Polinomio &outro) const
{
    return outro > *this;
}

// Operador >=
bool Polinomio::operator>=(const Polinomio &outro) const
{
    return !(*this < outro);
}

// Operador <=
bool Polinomio::operator<=(const Polinomio &outro) const
{
    return !(*this > outro);
}
