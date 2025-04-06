#include <iostream>
using namespace std;

template <typename T>
void troca(T& a, T& b) {
    T aux = a;
    a = b;
    b = aux;
}


int main() 
{
    cout << "\nTeste com inteiros: "; 
    int x = 10, y = 20;
    cout << "Antes da troca (int): x = " << x << ", y = " << y << endl;
    troca(x, y);
    cout << "Depois da troca (int): x = " << x << ", y = " << y << endl;

    cout << "\nTeste com caracteres: "; 
    char c1 = 'A', c2 = 'Z';
    cout << "Antes da troca (char): c1 = " << c1 << ", c2 = " << c2 << endl;
    troca(c1, c2);
    cout << "Depois da troca (char): c1 = " << c1 << ", c2 = " << c2 << endl;

    cout << "\nTeste com ponto flutuante (float): "; 
    float f1 = 3.4, f2 = 6.2;
    cout << "Antes da troca (float): f1 = " << f1 << ", f2 = " << f2 << endl;
    troca(f1, f2);
    cout << "Depois da troca (float): f1 = " << f1 << ", f2 = " << f2 << endl;

    cout << "\nTeste com ponto flutuante (double): "; 
    double d1 = 5.75, d2 = 8.96;
    cout << "Antes da troca (double): d1 = " << d1 << ", d2 = " << d2 << endl;
    troca(d1, d2);
    cout << "Depois da troca (double): d1 = " << d1 << ", d2 = " << d2 << endl;

    return 0;
}


