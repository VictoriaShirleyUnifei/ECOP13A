#include <iostream>
#include "pilha.h"
using namespace std;

int main() {
    CPilha<int> pInt;
    CPilha<char> pChar;
    CPilha<float> pFloat;

    // usando a pilha de inteiros
    cin >> pInt;
    cout << "Pilha de int: " << pInt;

    // usando a pilha de char
    cin >> pChar;
    cout << "Pilha de char: " << pChar;

    // usando a pilha de float
    cin >> pFloat;
    cout << "Pilha de float: " << pFloat;

    return 0;
}
