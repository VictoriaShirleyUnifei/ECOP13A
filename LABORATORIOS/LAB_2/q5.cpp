#include <iostream>
#include <cstdlib>  
#include <ctime>    
using namespace std;

int main() 
{
    int tamanho;
    cout << "Digite o tamanho do vetor: ";
    cin >> tamanho;

    // Aloca dinamicamente o vetor
    double* vetor = new double[tamanho];

    srand(time(0));

    double soma = 0;
    cout << "Vetor gerado: ";
    for (int i = 0; i < tamanho; i++) {
        vetor[i] = (rand() % 1000) / 10.0;  // valores de 0.0 a 99.9
        cout << vetor[i] << " ";
        soma += vetor[i];
    }

    cout << "\nSoma dos elementos: " << soma << endl;

    delete[] vetor;

    return 0;
}
