//Questão 2
#include <iostream>

using namespace std;

// Função para verificar se um número é primo
bool isPrime(int num) 
{
    if (num <= 1) return false;
    for (int i = 2; i <= num / 2; i++) 
    {
        if (num % i == 0) return false;
    }
    return true;
}

int main() 
{
    int count = 0;
    int number = 2;

    cout << "Os 20 primeiros números primos são:" << endl;

    while (count < 20) {
        if (isPrime(number)) {
            cout << number << " ";
            count++;
        }
        number++;
    }

    cout << endl;
    return 0;
}