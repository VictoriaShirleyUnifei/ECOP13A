#include <iostream>

using namespace std;

bool ehPalindromo(int numero) 
{
    int original = numero;
    int invertido = 0;

    while (numero > 0) {
        int digito = numero % 10;
        invertido = invertido * 10 + digito;
        numero /= 10;
    }

    return original == invertido;
}

int q9() 
{
    int numero;

    while (true) {
        cout << "Digite um numero inteiro de 7 digitos: ";
        cin >> numero;

        if (numero >= 1000000 && numero <= 9999999) {
            if (ehPalindromo(numero)) {
                cout << numero << " é um palindromo!" << endl;
            } else {
                cout << numero << " nao é um palindromo." << endl;
            }
            break; 
        } else {
            cout << "Erro: o numero deve conter exatamente 7 digitos." << endl;
        }
    }

    return 0;
}
