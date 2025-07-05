#ifndef Q2_H
#define Q2_H

#include <vector>
#include <algorithm>  // para std::sort
#include <iostream>

template <typename T>
class ListaOrdenada {
private:
    std::vector<T> elementos; // vetor para armazenar os elementos

public:
    void insere(const T& elemento);
    void imprime() const;
};

#endif
