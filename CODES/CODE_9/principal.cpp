#include <iostream>
#include "DivideByZeroException.h"

using namespace std;

// retorna divisão de num por den (inteiro)
int quociente(int num, int den)
{
	if(den == 0) // dispare uma exceção (ela será tratada em algum lugar)
		throw DivideByZeroException(); // termina a função por aqui.
	return num/den;
}

int main()
{
	int n = 0, d = 0;
	cout << "Entre com um numerador e um denominador: ";
	cin >> n >> d;

	try 
	{
		cout << "Resultado: " << quociente(n,d) << "\n"; // aqui pode ocorrer exceção
		cout << "Seu calculo ocorreu normalmente - sem excecao.\n";
	} 
	catch(runtime_error &ex)
	{
		cout << "runtime_error: " << ex.what() << "\n";
	}
	catch(DivideByZeroException &ex)
	{
		// nunca será executada, uma vez que DivideByZeroException
		// é uma classe derivada de runtime_error, e as comparações são feitas
		// na ordem. runtime_error será sempre a primeira correspondência.
		cout << "DivideByZeroException: " << ex.what() << "\n";
	}

	// execução retomada a partir daqui
	cout << "Primeira instrucao apos ultimo catch!\n";	
}

