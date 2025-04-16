// Definição da classe Circle (arquivo: circle.h)
// Funções-membro serão definidas em circle.cpp
#ifndef CIRCLE_H
#define CIRCLE_H
#include <iostream>

using namespace std;

class Circle {
	private:
		float radius;
		int x, y;
			public:
			
			// Construtores e Destrutores
				Circle();
				Circle(float, int = 0, int = 0);
				Circle( const Circle&); //círculo referência //o const garante que dentro da cópia não altera o c3
				~Circle() {
				cout << endl << "Destruindo círculo..." << endl;
			}
			// Funções de interface
			float area();
			float diameter();
			void set_radius(float);
			void set_origin(int, int);
			float get_radius();
};
#endif