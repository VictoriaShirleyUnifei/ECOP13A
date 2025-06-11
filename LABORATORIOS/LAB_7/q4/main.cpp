#include <iostream>
#include "q4.h"
using namespace std;

int main() {
    PhoneNumber phone;

    cout << "Digite o número de telefone no formato (XX) 9XXXX-XXXX:" << endl;
    cin >> phone;

    cout << "Número digitado: " << phone << endl;
    return 0;
}
