// q1.cpp
#include <iostream>
#include "q1.h"

Politico::Politico(string n, string p) : nome(n), partido(p) {
    cout << "[Depuração] Construtor de Politico chamado\n";
}

void Politico::Imprime() {
    cout << "Nome: " << nome << ", Partido: " << partido << endl;
}

Presidente::Presidente(string n, string p, string pais) : Politico(n, p), pais(pais) {
    cout << "[Depuração] Construtor de Presidente chamado\n";
}

void Presidente::Imprime() {
    Politico::Imprime();
    cout << "Cargo: Presidente do país " << pais << endl;
}

Governador::Governador(string n, string p, string estado) : Politico(n, p), estado(estado) {
    cout << "[Depuração] Construtor de Governador chamado\n";
}

void Governador::Imprime() {
    Politico::Imprime();
    cout << "Cargo: Governador do estado " << estado << endl;
}

Prefeito::Prefeito(string n, string p, string cidade) : Politico(n, p), cidade(cidade) {
    cout << "[Depuração] Construtor de Prefeito chamado\n";
}

void Prefeito::Imprime() {
    Politico::Imprime();
    cout << "Cargo: Prefeito da cidade " << cidade << endl;
}
