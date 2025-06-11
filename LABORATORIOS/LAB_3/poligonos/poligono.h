#ifndef POLIGONO_H
#define POLIGONO_H

#include <iostream>
#include <cmath>
using namespace std;

class PoligonoRegular {
private:
    int lados;          
    double comprimento; 
    
public:
    PoligonoRegular(int n, double b);
    double area();
    double perimetro();
    void nomePoligono();
};

#endif
