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
		Complexo operator+(Complexo&); // +
		Complexo operator-(Complexo&); // -
		friend ostream& operator<<(ostream&, const Complexo&); // <<
};

#endif

// Construtor
Complexo::Complexo(double r, double i) : re{r}, im{i} {}

// Sobrecarga de operadores
// soma
Complexo Complexo::operator+(Complexo& c)
{
	double r, i;
	r = re + c.get_real();
	i = im + c.get_imag();
	return Complexo{r, i};
}

// subtração
Complexo Complexo::operator-(Complexo& c)
{
	double r, i;
	r = re - c.get_real();
	i = im - c.get_imag();
	return Complexo{r, i};
}

// impressão
ostream& operator<<(ostream& output, const Complexo& c)
{
	output << c.re << " + (" << c.im << ")i";
	return output;
}

int main()
{
	Complexo a{10,0};
	Complexo b{10, 15};

	a = a + b; // notação direta e simples
	a = a.operator+(b); // notação explícita funcional

	b = b - a; // como em representação aritmética comum
	cout << a << "\n" << b; // e impressão natural
}