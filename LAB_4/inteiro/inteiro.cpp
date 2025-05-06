#include "inteiro.h"
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

void Inteiro::ler() {
    std::string entrada;
    std::cin >> entrada;
    *this = Inteiro(entrada);
}

void Inteiro::imprimir() const {
    bool leading = true;
    for (int i = 0; i < 30; ++i) {
        if (leading && digitos[i] == 0) continue;
        leading = false;
        std::cout << digitos[i];
    }
    if (leading) std::cout << "0"; // se for tudo zero
    std::cout << std::endl;
}

Inteiro Inteiro::somar(const Inteiro& outro) const {
    Inteiro resultado;
    int carry = 0;
    for (int i = 29; i >= 0; --i) {
        int soma = digitos[i] + outro.digitos[i] + carry;
        resultado.digitos[i] = soma % 10;
        carry = soma / 10;
    }
    return resultado;
}

Inteiro Inteiro::subtrair(const Inteiro& outro) const {
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
