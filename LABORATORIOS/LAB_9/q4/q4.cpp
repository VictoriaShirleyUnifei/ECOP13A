#include <stdexcept>
#include "q4.h"

CPilha::CPilha (int memoria) {
    m_tamanho = memoria;
    m_dados = new int[m_tamanho];
    m_ponteirodaPilha = -1;
}

CPilha::~CPilha() {
    delete[] m_dados;
}

int CPilha::push(int push_this) {
    if (m_ponteirodaPilha == m_tamanho - 1)
        throw overflow_error("Pilha cheia!!"); 
    m_dados[++m_ponteirodaPilha] = push_this;
    return push_this;
}

int CPilha::pop(int &pop_to) {
    if (m_ponteirodaPilha == -1)
        throw underflow_error("Pilha vazia!!!"); 
    pop_to = m_dados[m_ponteirodaPilha--];
    return pop_to;
}

CPilha::CPilha (const CPilha& p) {
    m_ponteirodaPilha = p.m_ponteirodaPilha;
    m_tamanho = p.m_tamanho;
    m_dados = new int [ m_tamanho ];
    for (int i = 0; i <= m_ponteirodaPilha ; i++)
    m_dados[i] = p.m_dados[i];
} // construtor de cópia

CPilha& CPilha::operator = (const CPilha& p) {
    delete [] m_dados;
    m_ponteirodaPilha = p.m_ponteirodaPilha;
    m_tamanho = p.m_tamanho;
    m_dados = new int [ m_tamanho ];
    for (int i = 0; i <= m_ponteirodaPilha ; i++)
    m_dados[i] = p.m_dados[i];
    return *this;
} // operador de atribuição

ostream& operator<<(ostream& out, const CPilha& p) {
    out << "[ ";
    for (int i = 0; i <= p.m_ponteirodaPilha; ++i) {
        out << p.m_dados[i] << " ";
    }
    out << "]";
    return out;
}

istream& operator>>(istream& in, CPilha& p) {
    int valor;
    cout << "Digite valores para empilhar (-999 para parar):\n";
    while (true) {
        cout << "> ";
        in >> valor;
        if (valor == -999) break;
        try {
            p.push(valor);
        } catch (const overflow_error& e) {
            cerr << e.what() << endl;
            break;
        }
    }
    return in;
}





