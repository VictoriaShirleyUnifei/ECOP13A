#include <iostream>
#include "point.h"
#include <cmath>
using namespace std;

// função converte Ponto para int
// retornando o valor do módulo da coordenada
Point::operator int()
{
	return sqrt(x*x + y*y);
}

bool Point::operator==(Point& p)
{
	if(x == p.x && y == p.y) return true;
	return false;
	// um simples return (x == p.x && y == p.y); bastaria.
}

bool operator!=(Point& p1, Point& p2)
{
	if(!(p1 == p2)) return true;
	return false;
}

ostream& operator<<(ostream& out, const Point& p) {
	out << "(" << p.x << ", " << p.y << ")";
	return out;
}

istream& operator>>(istream& in, Point& p) {
	in >> p.x >> p.y;
	return in;
}

int main() {
	Point p1{10,10};
	Point p2{10,10};

	cout << p1 << " e " << p2;
	cout << " sao " << (p1 == p2 ? "iguais" : "diferentes");
	cout << "\n";

	Point p3{10,11};
	if(p1 != p3)
		cout << p1 << " e " << p3 << " sao diferentes.\n";

/*
	cout << "Ponto 1: " << p1 << "\n";

	Point p2;
	cout << "Entre com os valores de p2 (x e y): ";
	cin >> p2;
	cout << "Ponto 2: " << p2 << "\n";

	// Para realizar a conversão, utilize o operador
	// de cast, como já estamos acostumados
	cout << "Modulo de " << p2 << ": " << (int)p2 << "\n";

	int x = (int)p2; // necessário tornar explícito
	cout << "Valor de x = " << x << "\n";
	*/
}

