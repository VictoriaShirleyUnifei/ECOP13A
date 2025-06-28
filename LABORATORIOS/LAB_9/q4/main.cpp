#include <iostream>
#include "q4.h"

using namespace std;

int main() {
    CPilha p(3); 

    try {
        p.push(10);
        p.push(20);
        p.push(30);
        cout << "Pilha após inserções: " << p << endl;

        // Este push deve falhar
        cout << "Tentando empilhar 40...\n";
        p.push(40);
    } catch (const overflow_error& e) {
        cerr << "Exceção capturada: " << e.what() << endl;
    }

    try {
        int valor;
        for (int i = 0; i < 4; ++i) {
            p.pop(valor);
            cout << "Desempilhado: " << valor << endl;
        }
    } catch (const underflow_error& e) {
        cerr << "Exceção capturada: " << e.what() << endl;
    }

    return 0;
}
