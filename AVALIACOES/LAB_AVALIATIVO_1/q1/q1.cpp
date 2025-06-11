#include "q1.h"
#include <iostream>
#include <string>

using namespace std;

InteiroLongo::InteiroLongo(int v) {
    valor = v;
}

// a) Verifica palíndromo
bool InteiroLongo::ehPalindromo() const {
    int temp = valor, rev = 0;
    while (temp > 0) {
        rev = rev * 10 + (temp % 10);
        temp /= 10;
    }
    return valor == rev;
}

// b) Verifica sequência de 3 dígitos iguais (ignora zeros à esquerda)
bool InteiroLongo::sequenciaTresIguais() const {
    string str = to_string(valor);
    for (size_t i = 0; i + 2 < str.size(); ++i) {
        if (str[i] == str[i + 1] && str[i] == str[i + 2])
            return true;
    }
    return false;
}

// c) Pré-fixado --
InteiroLongo& InteiroLongo::operator--() {
    --valor;
    return *this;
}

// c) Pós-fixado --
InteiroLongo InteiroLongo::operator--(int) {
    InteiroLongo temp = *this;
    valor--;
    return temp;
}

// d) Operador -=
InteiroLongo& InteiroLongo::operator-=(int n) {
    valor -= n;
    return *this;
}

// Entrada
istream& operator>>(istream& in, InteiroLongo& obj) {
    in >> obj.valor;
    return in;
}

// Saída
ostream& operator<<(ostream& out, const InteiroLongo& obj) {
    out << obj.valor;
    return out;
}
