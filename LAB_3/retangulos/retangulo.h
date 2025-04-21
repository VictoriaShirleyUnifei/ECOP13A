#ifndef RETANGULO_H
#define RETANGULO_H
#include <iostream>

using namespace std;

class CRetangulo {
    int largura, altura;

    public:
        CRetangulo(int = 1, int = 1);
        CRetangulo(const CRetangulo&);
        ~CRetangulo();

        //GETTERS
        int getLargura(){
            return largura;
        }
        int getAltura(){
            return altura;
        }

        //SETTERS
        void setLargura(int);
        void setAltura(int);

        //FUNÇÕES
        int area() {
            return largura * altura;
        };
        int perimetro() {
            return 2 * largura + 2 * altura;
        };
        bool ehQuadrado();
        int imprime();
        void leitura();
};
#endif