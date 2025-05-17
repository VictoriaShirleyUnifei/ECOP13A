#include "angulo.h"

int main()
{
	Angulo a1{45};
	Angulo a2;
	Angulo a3{170};
	Angulo a4{180};
	Angulo a5{390};

	cout << "a5 = " << a5 << "\n";
	cout << "a2 = " << a2 << "\n";
	cout << "Entre com a2: ";
	cin >> a2;
	cout << "a2 = " << a2 << "\n";

	cout << a2 << " graus = " << a2.radiano() << " radianos";
	cout << "sen(" << a2 << ") = " << a2.seno() << "\n";
	cout << "cos(" << a2 << ") = " << a2.cosseno() << "\n";
	cout << "tan(" << a2 << ") = " << a2.tangente() << "\n";
	cout << "complemente de " << a2 << " = " << a2.complementar() << "\n";

	double difference = (double)(a4-a3);
	cout << a1 << " + " << a3 << " = " << a1+a3 << "\n";
	cout << a4 << " - " << a3 << " = " << difference << "\n";

}