#ifndef DATA_H
#define DATA_H

#include <iostream>
#include <string>

using namespace std;

class Data {
private:
    int dia, mes, ano;

public:
    Data(int d = 1, int m = 1, int a = 2000);

    // Pré-incremento ++d
    Data& operator++();
    // Pós-incremento d++
    Data operator++(int);

    // Operadores de entrada e saída
    friend istream& operator>>(istream& in, Data& data);
    friend ostream& operator<<(ostream& out, const Data& data);

private:
    bool ehBissexto(int ano) const;
    int diasNoMes(int mes, int ano) const;
    void avancarDia();
    string nomeMes(int mes) const;
};

#endif
