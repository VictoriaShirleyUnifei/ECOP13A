// Definições das funções membro da classe Circle
// arquivo (circle.cpp)

#include "circle.h"

using namespace std;

// Construtor padrão: Não recebe parãmetros
// Inicializa um objeto default, com valores 0.
Circle::Circle()
{
	x = y = 0;
	radius = 0;
	cout << "Criando círculo padrão..." << endl;
}

// Construtor
// Recebe parâmetros de inicialização
Circle::Circle(float r, int vx, int vy)
{
	radius = r;
	x = vx;
	y = vy;
	cout << endl << "Criando círculo personalizado..." << endl;
}

//Criando nossa própria cópia
Circle::Circle(const Circle& copia)
{
	radius = copia.radius; //só consigo acessar porque estou dentro da classe
	x = copia.x;
	y = copia.y;
	cout << endl << "Criando cópia do círculo..." << endl;
}

// Calcula a área do círculo
float Circle::area()
{
	return 3.141593 * radius * radius;
}

// Calcula o diãmetro do círculo
float Circle::diameter()
{
	return 2 * radius;
}

// Dá acesso ao usuário, para modificar
// valor de radius
void Circle::set_radius(float r)
{
	radius = r;
}

// Dá acesso ao usuário, para modificar
// valor da coordenada de origem
void Circle::set_origin(int x, int y)
{
	this->x = x;
	this->y = y;
}
// Dá acesso ao usuário, para obter
// valor de radius
float Circle::get_radius()
{
	return radius;
}