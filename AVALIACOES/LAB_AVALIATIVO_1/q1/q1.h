#ifndef Q1_H
#define Q1_H

#include <iostream>

using namespace std;

class InteiroLongo {
    private: 
        int valor;
    
    public:
        InteiroLongo(int v = 0); //iniciador
        ~InteiroLongo() {}; //destrutor

        bool ehPalindromo() const; //a
        bool sequenciaTresIguais() const; //b
        InteiroLongo& operator--(); // c) Pré-fixada         
        InteiroLongo operator--(int); // c) Pós-fixada    
        InteiroLongo& operator-=(int incremento); //d
        friend istream& operator>>(istream& in, InteiroLongo& obj);
        friend ostream& operator<<(ostream& out, const InteiroLongo& obj);
};

#endif