#include "livro.h"

int main() {
    Livro l("1984", "George Orwell", "1234567890", 1949);

    l.exibirDados();
    l.emprestar();
    cout << "\nApós emprestar:\n";
    l.exibirDados();

    l.devolver();
    cout << "\nApós devolver:\n";
    l.exibirDados();

    return 0;
}
