#ifndef ID_CFRACAO
#define ID_CFRACAO

#include <iostream>
using namespace std;

class CFracao
{
protected:
    int m_numerador;
    int m_denominador;
    CFracao Reduzida(void);

public:
    CFracao(int Num = 1, int Denom = 1) : m_numerador(Num), m_denominador(Denom) {}

    // Métodos de acesso
    int getNumerador(void) { return m_numerador; }
    int getDenominador(void) { return m_denominador; }

    // Conversão
    float ComoFloat(void);

    // Sobrecarga de operadores aritméticos
    CFracao operator+(const CFracao &);
    CFracao operator-(const CFracao &);
    CFracao operator*(const CFracao &);
    CFracao operator/(const CFracao &);

    // Sobrecarga de operadores de comparação
    bool operator<(const CFracao &);
    bool operator>(const CFracao &);
    bool operator<=(const CFracao &);
    bool operator>=(const CFracao &);
    bool operator==(const CFracao &);
    bool operator!=(const CFracao &);

    // Sobrecarga dos operadores de stream
    friend ostream &operator<<(ostream &, const CFracao &);
    friend istream &operator>>(istream &, CFracao &);
};

#endif // ID_CFRACAO
