// programa principal para utilização da
// classe Circle
#include <iostream>
#include "circle.h" // incluindo classe

using namespace std;

int main()
{
	Circle c1;
	Circle c2(10, 10, 5);
	Circle c3(12.5);
	
	Circle c4 = c3; //usa construtor de cópia
	
	cout << "Diametro de cada circulo: \n";
	cout << "c1 = " << c1.diameter() << "\n";
	cout << "c2 = " << c2.diameter() << "\n";
	cout << "c3 = " << c3.diameter() << "\n";
	cout << "c4 = " << c4.diameter() << "\n";
	
	cout << "Area de cada circulo: \n";
	cout << "c1 = " << c1.area() << "\n";
	cout << "c2 = " << c2.area() << "\n";
	cout << "c3 = " << c3.area() << "\n";
	cout << "c4 = " << c4.area() << "\n";
	
	c4.set_origin(10, 100);
	c4.set_radius(15);
	
	cout << endl << "Mudando os valores de c4" << endl;
	cout << "c3 = " << c3.diameter() << "\n";
	cout << "c4 = " << c4.diameter() << "\n";
	cout << "c3 = " << c3.area() << "\n";
	cout << "c4 = " << c4.area() << "\n";
}