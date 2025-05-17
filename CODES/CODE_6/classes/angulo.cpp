#include "angulo.h"
#include <cmath>

#define PI 3.141592

Angulo::Angulo(double g) {
	grau = fmod(g, 360);
}

double Angulo::radiano()
{
	return grau*PI/180;
}

double Angulo::seno()
{	
	return sin(radiano());
}

double Angulo::cosseno()
{	
	return cos(radiano());
}

double Angulo::tangente()
{	
	return tan(radiano());
}		

double Angulo::complementar()
{
	if(grau > 90) return -1;
	return (90-grau);
}

Angulo Angulo::operator+(Angulo& a)
{
	return Angulo{fmod((grau+a.grau),360)};
}

Angulo Angulo::operator-(Angulo& a)
{
	return Angulo{fmod((grau-a.grau),360)};
}

ostream& operator<<(ostream& saida, const Angulo& a)
{
	saida << a.grau;
	return saida;
}

istream& operator>>(istream& entrada, Angulo& a)
{
	entrada >> a.grau;
	return entrada;
}

		// conversao de tipo
Angulo::operator double() const
{
	return grau;
}
