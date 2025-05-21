#ifndef LIVRO_H
#define LIVRO_H

#include <iostream>
#include <string>

using namespace std;

class Livro {
private:
    string titulo;
    string autor;
    string isbn;
    int anoPublicacao;
    bool emprestado;

public:
    Livro(string t = "", string a = "", string i = "", int ano = 0);

    void emprestar();
    void devolver();
    bool estaEmprestado() const;

    void exibirDados() const;
};

#endif
