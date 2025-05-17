#include <iostream>
#include "q3.h"

int main() {
    Inteiro a, b;

    std::cout << "Digite o primeiro número (até 30 dígitos): ";
    std::cin >> a;

    std::cout << "Digite o segundo número (até 30 dígitos): ";
    std::cin >> b;

    std::cout << "\nSoma: " << a + b << std::endl;
    std::cout << "Diferença (a - b): " << a - b << std::endl;

    std::cout << "\nComparações:\n";
    std::cout << "a == b: " << (a == b ? "Sim" : "Não") << std::endl;
    std::cout << "a != b: " << (a != b ? "Sim" : "Não") << std::endl;
    std::cout << "a < b: "  << (a < b  ? "Sim" : "Não") << std::endl;
    std::cout << "a <= b: " << (a <= b ? "Sim" : "Não") << std::endl;
    std::cout << "a > b: "  << (a > b  ? "Sim" : "Não") << std::endl;
    std::cout << "a >= b: " << (a >= b ? "Sim" : "Não") << std::endl;

    return 0;
}
