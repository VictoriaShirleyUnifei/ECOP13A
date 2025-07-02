#include <iostream>
#include <algorithm>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    vector<int> numeros;
    srand(time(NULL));

    // Sorteando numeros aleatorios e imprimindo
    cout << "Vetor sorteado: ";
    for(int i = 0; i < 10; i++) {
        int x = rand()%100;
        numeros.push_back(x);
        cout << x << " ";
    }
    cout << endl;

    // Ordenando parcialmente vetor
    // Apenas 5 primeiros ficarão em seus próprios lugares
    partial_sort(numeros.begin(), numeros.begin()+5, numeros.end());
    cout << "Primeira metade ordenada: ";
    for(int i = 0; i < 10; i++)
        cout << numeros[i] << " ";
    cout << endl;

    // Ordenando segunda metade (sort normal)
    sort(numeros.begin() + 5, numeros.end());
    cout << "Segunda metade ordenada: ";
    for(int i = 0; i < 10; i++)
        cout << numeros[i] << " ";
    cout << endl;

    // Ordenando tudo (com função de comparação e ordenação estável)
    stable_sort(numeros.begin(), numeros.end());
    cout << "Vetor ordenado: ";
    for(int i = 0; i < 10; i++)
        cout << numeros[i] << " ";
    cout << endl;

    return 0;
}
