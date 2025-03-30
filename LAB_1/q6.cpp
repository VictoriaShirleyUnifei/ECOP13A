#include <iostream>

using namespace std;

int somaRecursiva(int n) 
{
    if (n <= 0) 
        return 0;
    else
        return n + somaRecursiva(n - 1);
}

int q6() 
{
    int n;
    cout << "Digite um numero inteiro positivo: ";
    cin >> n;

    int resultado = somaRecursiva(n);
    cout << "A soma dos " << n << " primeiros numeros inteiros é: " << resultado << endl;

    return 0;
}
