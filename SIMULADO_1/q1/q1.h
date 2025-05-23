// InteiroLongo.h

#ifndef INTEIROLONGO_H
#define INTEIROLONGO_H

#include <iostream>
using namespace std;

class InteiroLongo {
private:
    int valor;

public:
    InteiroLongo(int v = 0);

    // Verifica se é palíndromo
    bool ehPalindromo() const;

    // Pré-incremento
    InteiroLongo& operator++();          

    // Pós-incremento
    InteiroLongo operator++(int);        

    // Operador +=
    InteiroLongo& operator+=(int incremento);

    // Getter
    int getValor() const;

    // Operador de saída
    friend ostream& operator<<(ostream& os, const InteiroLongo& obj);
};

#endif
