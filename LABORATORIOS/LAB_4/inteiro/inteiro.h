#ifndef INTEIRO_H
#define INTEIRO_H

#include <iostream>
#include <string>

class Inteiro {
private:
    int digitos[30];

public:
    Inteiro();                        
    Inteiro(const std::string& str);  
    ~Inteiro();                        

    void ler();                        
    void imprimir() const;            

    Inteiro somar(const Inteiro& outro) const;
    Inteiro subtrair(const Inteiro& outro) const;
};

#endif
