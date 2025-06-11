#ifndef INTEIRO_H
#define INTEIRO_H

#include <iostream>
#include <string>

class Inteiro {
private:
    int digitos[30];

public:
    Inteiro();
    Inteiro(const std::string& str);
    ~Inteiro();

    // Sobrecarga de operadores aritméticos
    Inteiro operator+(const Inteiro& outro) const;
    Inteiro operator-(const Inteiro& outro) const;

    // Sobrecarga de operadores de comparação
    bool operator<(const Inteiro& outro) const;
    bool operator>(const Inteiro& outro) const;
    bool operator<=(const Inteiro& outro) const;
    bool operator>=(const Inteiro& outro) const;
    bool operator==(const Inteiro& outro) const;
    bool operator!=(const Inteiro& outro) const;

    // Operadores de entrada e saída
    friend std::ostream& operator<<(std::ostream& os, const Inteiro& i);
    friend std::istream& operator>>(std::istream& is, Inteiro& i);
};

#endif
