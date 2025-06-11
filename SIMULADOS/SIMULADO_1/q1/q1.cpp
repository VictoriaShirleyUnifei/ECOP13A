// InteiroLongo.cpp

#include "q1.h"

// Construtor
InteiroLongo::InteiroLongo(int v) {
    valor = v;
}

// Verifica se o número é palíndromo
bool InteiroLongo::ehPalindromo() const {
    int original = valor;
    int invertido = 0;

    while (original > 0) {
        invertido = invertido * 10 + (original % 10);
        original /= 10;
    }

    return valor == invertido;
}

// Pré-incremento
InteiroLongo& InteiroLongo::operator++() {
    ++valor;
    return *this;
}

// Pós-incremento
InteiroLongo InteiroLongo::operator++(int) {
    InteiroLongo temp = *this;
    valor++;
    return temp;
}

// Operador +=
InteiroLongo& InteiroLongo::operator+=(int incremento) {
    valor += incremento;
    return *this;
}

// Getter
int InteiroLongo::getValor() const {
    return valor;
}

// Operador <<
ostream& operator<<(ostream& os, const InteiroLongo& obj) {
    os << obj.valor;
    return os;
}
