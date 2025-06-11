//Questão 1
#include <iostream>
using namespace std;

inline float rectArea(float comprimento, float largura)
{
    return comprimento * largura;
}

int main()
{
    float comprimento, largura;

    cout << "Insira o comprimento do retangulo: ";
    cin >> comprimento;
    
    cout << "Insira a largura do retangulo: ";
    cin >> largura;

    float area = rectArea(comprimento, largura);

    cout << "A area do retangulo eh: " << area << endl;

    return 0;
}