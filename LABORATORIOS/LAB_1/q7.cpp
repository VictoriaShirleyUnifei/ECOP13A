#include <iostream>

using namespace std;

int mdc(int x, int y) 
{
    if (y == 0)
        return x;
    else
        return mdc(y, x % y);
}

int q7() 
{
    int a, b;
    cout << "Digite dois numeros inteiros: ";
    cin >> a >> b;

    int resultado = mdc(a, b);
    cout << "O MDC de " << a << " e " << b << " é: " << resultado << endl;

    return 0;
}
