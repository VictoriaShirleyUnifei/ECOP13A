#ifndef COMPLEXO_H
#define  COMPLEXO_H

#include <iostream>
using namespace std;

class Complexo 
{
	private:
		double re, im;
	public:
		Complexo(double=0, double=0);
		~Complexo() {}
		double get_real() {return re;}
		double get_imag() {return im;}

		// definindo operadores
		Complexo& adicionar(Complexo&); // +
		Complexo& subtrair(Complexo&); // -
		void print(); // <<
};

#endif

// Construtor
Complexo::Complexo(double r, double i) : re{r}, im{i} {}

// Operadores com sintaxe funcional básica
// soma
Complexo& Complexo::adicionar(Complexo& c)
{
	re += c.get_real();
	im += c.get_imag();
	return *this;
}

// subtração
Complexo& Complexo::subtrair(Complexo& c)
{
	re -= c.get_real();
	im -= c.get_imag();
	return *this;
}

void Complexo::print()
{
	cout << re << " + (" << im << ")i";
}

int main()
{
	Complexo a{10,0};
	Complexo b{10, 15};

	a.adicionar(b); // a = a+b;
	b.subtrair(a); // b = b-a;
	a.print();
	cout << "\n";
	b.print();
}