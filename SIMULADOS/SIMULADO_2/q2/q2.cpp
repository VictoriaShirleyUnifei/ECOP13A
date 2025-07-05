#include "q2.h"
#include <iostream>

template <typename T>
void ListaOrdenada<T>::insere(const T& elemento) {
    elementos.push_back(elemento);
    sort(elementos.begin(), elementos.end());
}

template <typename T>
void ListaOrdenada<T>::imprime() const {
    for(const auto& elem : elementos) {
        cout << elem << " ";
    }
    cout << std::endl;
}


