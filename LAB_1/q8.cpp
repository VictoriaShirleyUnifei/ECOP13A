#include <iostream>
using namespace std;

int binarioParaDecimal(int binario) 
{
    int decimal = 0;
    int base = 1; 

    while (binario > 0) {
        int ultimoDigito = binario % 10;     
        decimal += ultimoDigito * base;      
        base *= 2;                            
        binario /= 10;                       
    }

    return decimal;
}

int q8() 
{
    int binario;
    cout << "Digite um numero binario (ex: 1101): ";
    cin >> binario;

    int decimal = binarioParaDecimal(binario);
    cout << "Equivalente decimal: " << decimal << endl;

    return 0;
}
