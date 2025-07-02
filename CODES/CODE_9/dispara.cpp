#include <iostream>
#include <stdexcept>
using namespace std;

// exemplo simples
void set_valor(int *v, int val, int pos, int sz)
{
	if(pos >= sz)
		throw out_of_range("set_valor(() : indice fora dos limites.");
	if(val > 100)
		throw overflow_error("set_valor(() : valores precisam ser menores que 100.");
	v[pos] = val;
}

int main()
{
	const int size = 10;
	int vec[size];
	try {
		// vec recebe o valor 123 na posicao 1, tem tamanho igual size
		set_valor(vec, 123, 1, size);
	} catch(out_of_range &ex) {
		cout << "out_of_range capturada: " << ex.what() << "\n";
	} catch(overflow_error &ex) {
		cout << "overflow_error capturada: " << ex.what() << "\n";
	} catch(...) { // exception não dá na mesma? NÃO! Não é obrigado a herdar de exception.
		cout << "Captura qualquer exceção\n"; // default
	}
}

