#include <iostream>
#include <vector>
using namespace std;

bool ehPalindromo(int numero) 
{
    vector<int> digitos(7); 

    for (int i = 6; i >= 0; i--) {
        digitos[i] = numero % 10;
        numero /= 10;
    }

    for (int i = 0; i < 7 / 2; i++) {
        if (digitos[i] != digitos[6 - i]) {
            return false;
        }
    }

    return true;
}

int main() {
    int numero;

    while (true) {
        cout << "Digite um numero inteiro de 7 digitos: ";
        cin >> numero;

        if (numero >= 1000000 && numero <= 9999999) {
            if (ehPalindromo(numero)) {
                cout << numero << " eh um palindromo!" << endl;
            } else {
                cout << numero << " nao eh um palindromo." << endl;
            }
            break;
        } else {
            cout << "Erro: o numero deve conter exatamente 7 digitos." << endl;
        }
    }

    return 0;
}
