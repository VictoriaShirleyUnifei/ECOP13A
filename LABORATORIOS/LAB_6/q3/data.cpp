#include "data.h"

Data::Data(int d, int m, int a) : dia(d), mes(m), ano(a) {}

bool Data::ehBissexto(int ano) const {
    return (ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0);
}

int Data::diasNoMes(int mes, int ano) const {
    static const int dias[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
    if (mes == 2 && ehBissexto(ano)) return 29;
    return dias[mes - 1];
}

void Data::avancarDia() {
    dia++;
    if (dia > diasNoMes(mes, ano)) {
        dia = 1;
        mes++;
        if (mes > 12) {
            mes = 1;
            ano++;
        }
    }
}

// Pré-incremento ++d
Data& Data::operator++() {
    avancarDia();
    return *this;
}

// Pós-incremento d++
Data Data::operator++(int) {
    Data temp = *this;
    avancarDia();
    return temp;
}

istream& operator>>(istream& in, Data& data) {
    cout << "Digite o dia: ";
    in >> data.dia;
    cout << "Digite o mes (numero): ";
    in >> data.mes;
    cout << "Digite o ano: ";
    in >> data.ano;
    return in;
}

string Data::nomeMes(int mes) const {
    static const string nomes[] = {
        "janeiro", "fevereiro", "março", "abril", "maio", "junho",
        "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"
    };
    return nomes[mes - 1];
}

ostream& operator<<(ostream& out, const Data& data) {
    out << (data.dia < 10 ? "0" : "") << data.dia
        << " de " << data.nomeMes(data.mes)
        << " de " << data.ano;
    return out;
}
