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

    // Sorteando numeros aleatorios
    for(int i = 0; i < 30; i++){
        int x = rand()%100;
        numeros.push_back(x);
    }

    // Precisam estar ordenados para que a busca binária funcione
    sort(numeros.begin(), numeros.end());

    int valor = -1;
    while(true) {
        cout << "Entre com um valor a ser buscado: ";
        cin >> valor;

        if(binary_search(numeros.begin(), numeros.end(), valor)){
            vector<int>::iterator it = lower_bound(numeros.begin(), numeros.end(), valor);
            cout << "Numero encontrado: " << *it << endl;
            break;
        }
        else
            cout << "Nao encontrado." << endl;
    }
}
