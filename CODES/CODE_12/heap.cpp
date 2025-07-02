#include <iostream>
#include <queue>

using namespace std;

int main()
{
    priority_queue<float> distancias;

    // insere valores de distancias
    distancias.push(1000.0);
    distancias.push(100.0);
    distancias.push(10.0);
    distancias.push(1001.0);
    distancias.push(900.0);

    cout << "Imprimindo na ordem de prioridade: " << endl;
    while(!distancias.empty())
    {
        cout << distancias.top() << endl;
        distancias.pop();
    }

    return 0;
}

