#ifndef PROVABIMESTRAL_H
#define PROVABIMESTRAL_H

#include <iostream>
#include <string>

using namespace std;

class ProvaBimestral {
private:
    //Atributos
    string disciplina;
    float nota;
    string data;
    string professor;

public:
    // Construtor
    ProvaBimestral(const string& disciplina, float nota, const string& data, const string& professor);

    // Destrutor
    ~ProvaBimestral() {}

    // Métodos
    void atualizarNota(float novaNota);       
    void alterarData(const string& novaData); 
    void exibirInformacoes() const;           
};

#endif 