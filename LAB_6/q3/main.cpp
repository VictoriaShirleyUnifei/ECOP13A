#include <iostream>
#include "data.h"

int main() {
    Data d;
    cin >> d;

    cout << "Data inicial: " << d << endl;

    cout << "Pós-incremento (d++): " << d++ << endl;
    cout << "Após d++: " << d << endl;

    cout << "Pré-incremento (++d): " << ++d << endl;
    cout << "Após ++d: " << d << endl;

    return 0;
}
