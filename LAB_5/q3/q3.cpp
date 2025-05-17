#include "q3.h"
#include <iomanip>
#include <cstring>

Inteiro::Inteiro() {
    std::memset(digitos, 0, sizeof(digitos));
}

Inteiro::Inteiro(const std::string& str) {
    std::memset(digitos, 0, sizeof(digitos));
    int offset = 30 - str.size();
    for (size_t i = 0; i < str.size() && i < 30; ++i) {
        digitos[offset + i] = str[i] - '0';
    }
}

Inteiro::~Inteiro() {}

Inteiro Inteiro::operator+(const Inteiro& outro) const {
    Inteiro resultado;
    int carry = 0;
    for (int i = 29; i >= 0; --i) {
        int soma = digitos[i] + outro.digitos[i] + carry;
        resultado.digitos[i] = soma % 10;
        carry = soma / 10;
    }
    return resultado;
}

Inteiro Inteiro::operator-(const Inteiro& outro) const {
    Inteiro resultado;
    int emprestimo = 0;
    for (int i = 29; i >= 0; --i) {
        int sub = digitos[i] - outro.digitos[i] - emprestimo;
        if (sub < 0) {
            sub += 10;
            emprestimo = 1;
        } else {
            emprestimo = 0;
        }
        resultado.digitos[i] = sub;
    }
    return resultado;
}

// Comparações
bool Inteiro::operator<(const Inteiro& outro) const {
    for (int i = 0; i < 30; ++i)
        if (digitos[i] != outro.digitos[i])
            return digitos[i] < outro.digitos[i];
    return false;
}

bool Inteiro::operator>(const Inteiro& outro) const {
    return outro < *this;
}

bool Inteiro::operator<=(const Inteiro& outro) const {
    return !(outro < *this);
}

bool Inteiro::operator>=(const Inteiro& outro) const {
    return !(*this < outro);
}

bool Inteiro::operator==(const Inteiro& outro) const {
    for (int i = 0; i < 30; ++i)
        if (digitos[i] != outro.digitos[i])
            return false;
    return true;
}

bool Inteiro::operator!=(const Inteiro& outro) const {
    return !(*this == outro);
}

// Saída
std::ostream& operator<<(std::ostream& os, const Inteiro& i) {
    bool leading = true;
    for (int j = 0; j < 30; ++j) {
        if (leading && i.digitos[j] == 0) continue;
        leading = false;
        os << i.digitos[j];
    }
    if (leading) os << "0";
    return os;
}

// Entrada
std::istream& operator>>(std::istream& is, Inteiro& i) {
    std::string entrada;
    is >> entrada;
    i = Inteiro(entrada);
    return is;
}
