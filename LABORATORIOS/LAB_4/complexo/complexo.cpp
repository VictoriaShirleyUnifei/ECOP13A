#include <iostream>
#include <cmath>
#include "complexo.h"

using namespace std;

Complexo::Complexo(double r, double i):
    real{r}, imaginario{i} {
        contator++;
    }


Complexo::~Complexo()
{
   contator--;
}

Complexo Complexo::somar(const Complexo& c) const
{
    Complexo temp(real + c.getReal(), imaginario + c.getImaginario());
    return temp;
}


Complexo Complexo::subtrair(const Complexo& c) const
{
    Complexo temp(real - c.getReal(), imaginario - c.getImaginario());
    return temp;
}


Complexo Complexo::multiplicar(const Complexo& c) const
{
    Complexo temp(real * c.getReal() - imaginario * c.getImaginario(), real * c.getReal() + imaginario * c.getImaginario());
    return temp;
}


Complexo Complexo::dividir(const Complexo& c) const
{
    double den = c.real * c.real + c.imaginario * c.imaginario;
    double a = real * c.real + imaginario * c.imaginario;
    double b = c.real * imaginario - real * c.imaginario;

    return Complexo(a / den, b / den);
}

int Complexo::contator = 0;

double Complexo::modulo() const {
    return sqrt(real * real + imaginario * imaginario);
}

void Complexo::imprime() const {
    cout << real;
    cout << (imaginario >= 0) ? "+" : ":";
    cout << imaginario << "i";
}

// (a + bi) * (c + di)
// a * c + adi + cbi + bdi
// (ac - bd) + (ad + cb)i
