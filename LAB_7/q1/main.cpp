// main.cpp
#include <iostream>
#include "q1.h"

int main() {
    Presidente pres("João", "Partido A", "Brasil");
    Governador gov("Maria", "Partido B", "São Paulo");
    Prefeito pref("Carlos", "Partido C", "Campinas");

    cout << "\n[Impressão de Dados]\n";
    pres.Imprime();
    cout << endl;
    gov.Imprime();
    cout << endl;
    pref.Imprime();

    return 0;
}
