#include "livro.h"

Livro::Livro(string t, string a, string i, int ano)
    : titulo(t), autor(a), isbn(i), anoPublicacao(ano), emprestado(false) {}

void Livro::emprestar() {
    emprestado = true;
}

void Livro::devolver() {
    emprestado = false;
}

bool Livro::estaEmprestado() const {
    return emprestado;
}

void Livro::exibirDados() const {
    cout << "Título: " << titulo << endl;
    cout << "Autor: " << autor << endl;
    cout << "ISBN: " << isbn << endl;
    cout << "Ano: " << anoPublicacao << endl;
    cout << "Status: " << (emprestado ? "Emprestado" : "Disponível") << endl;
}
