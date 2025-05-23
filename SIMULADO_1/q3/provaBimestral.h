#ifndef PROVABIMESTRAL_H
#define PROVABIMESTRAL_H

#include <string>

using namespace std;

class ProvaBimestral {
    private:
        // Atributos
        string disciplina;
        float nota;
        string data;

    public:
        // Construtor
        ProvaBimestral(const string& disciplina, float nota, const string& data);

        // Métodos
        void exibirInformacoes() const;
        void atualizarNota(float novaNota);
        float obterNota() const;
};

#endif 
