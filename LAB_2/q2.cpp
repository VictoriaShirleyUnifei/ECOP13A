#include <iostream>
using namespace std;

int multipleByValue(int count)
{
    count = count * count;
    return count;
}

int multipleByReference(int& count)
{
    count = count * count;
}

int main()
{
    int count;

    cout << "Digite um numero: ";
    cin >> count;

    int resultByValue = multipleByValue(count);
    cout << "Resultado com multipleByValue: " << resultByValue << endl;
    cout << "Valor original apos multipleByValue: " << count << endl;

    multipleByReference(count);
    cout << "Resultado com multipleByReference: " << count << endl;

    return 0;
}
