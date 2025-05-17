#include "q1.h"

// Método para reduzir a fração
CFracao CFracao::Reduzida(void)
{
    int a = abs(m_numerador), b = abs(m_denominador), r;
    while (b != 0)
    {
        r = a % b;
        a = b;
        b = r;
    }
    m_numerador /= a;
    m_denominador /= a;
    if (m_denominador < 0)
    {
        m_numerador *= -1;
        m_denominador *= -1;
    }
    return *this;
}

// Conversão
float CFracao::ComoFloat(void)
{
    return (float)m_numerador / m_denominador;
}

// Operadores Aritméticos
CFracao CFracao::operator+(const CFracao &f)
{
    return CFracao(m_numerador * f.m_denominador + m_denominador * f.m_numerador,
                   m_denominador * f.m_denominador)
        .Reduzida();
}
CFracao CFracao::operator-(const CFracao &f)
{
    return CFracao(m_numerador * f.m_denominador - m_denominador * f.m_numerador,
                   m_denominador * f.m_denominador)
        .Reduzida();
}
CFracao CFracao::operator*(const CFracao &f)
{
    return CFracao(m_numerador * f.m_numerador,
                   m_denominador * f.m_denominador)
        .Reduzida();
}
CFracao CFracao::operator/(const CFracao &f)
{
    return CFracao(m_numerador * f.m_denominador,
                   m_denominador * f.m_numerador)
        .Reduzida();
}

// Operadores de Comparação
bool CFracao::operator<(const CFracao &f)
{
    return m_numerador * f.m_denominador < m_denominador * f.m_numerador;
}
bool CFracao::operator>(const CFracao &f)
{
    return f < *this;
}
bool CFracao::operator<=(const CFracao &f)
{
    return !(*this > f);
}
bool CFracao::operator>=(const CFracao &f)
{
    return !(*this < f);
}
bool CFracao::operator==(const CFracao &f)
{
    return m_numerador * f.m_denominador == m_denominador * f.m_numerador;
}
bool CFracao::operator!=(const CFracao &f)
{
    return !(*this == f);
}

// Operadores de entrada e saída
ostream &operator<<(ostream &out, const CFracao &f)
{
    out << f.m_numerador << "/" << f.m_denominador;
    return out;
}
istream &operator>>(istream &in, CFracao &f)
{
    char barra;
    in >> f.m_numerador >> barra >> f.m_denominador;
    f.Reduzida();
    return in;
}
