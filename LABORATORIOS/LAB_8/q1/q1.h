// q1.h
#ifndef Q1_H
#define Q1_H

#include <string>
using namespace std;

class Politico {
    protected:
        string nome;
        string partido;

    public:
        Politico(string n = "Desconhecido", string p = "Sem Partido");
        virtual void Imprime();
        virtual ~Politico() {}
};

class Presidente : public Politico {
    private:
        string pais;

    public:
        Presidente(string n, string p, string pais);
        void Imprime() override;
};

class Governador : public Politico {
    private:
        string estado;

    public:
        Governador(string n, string p, string estado);
        void Imprime() override;
};

class Prefeito : public Politico {
    private:
        string cidade;

    public:
        Prefeito(string n, string p, string cidade);
        void Imprime() override;
};

#endif
