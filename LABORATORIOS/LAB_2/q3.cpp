#include <iostream>
using namespace std;

template <typename T>
T produto(T a, T b) {
    return a * b;
}

int main() 
{
    int x = 3, y = 4;
    cout << "Produto de inteiros: " << x << " * " << y << " = " << produto(x, y) << endl;

    float f1 = 2.5, f2 = 4.0;
    cout << "Produto de floats: " << f1 << " * " << f2 << " = " << produto(f1, f2) << endl;

    double d1 = 1.75, d2 = 3.2;
    cout << "Produto de doubles: " << d1 << " * " << d2 << " = " << produto(d1, d2) << endl;

    return 0;
}
