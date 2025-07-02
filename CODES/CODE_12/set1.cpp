#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> conjunto;
    set<int>::iterator it;

    // Em um set, as chaves não podem ser duplicadas.
    // para isso, utilize um multiset (também de <set>)
    conjunto.insert(30);
    conjunto.insert(20);
    conjunto.insert(10);
    conjunto.insert(10); // não será inserido
    conjunto.insert(20); // não será inserido
    conjunto.insert(40);
    conjunto.erase(10); // apaga um item, baseado no valor.

    cout << "Quantidade de elementos: " << conjunto.size() << endl;
    cout << "Elementos: ";
    // perceba que os elementos em um set estão sempre ordenados
    for(it = conjunto.begin(); it != conjunto.end(); ++it)
        cout << *it << " ";
    cout << endl;

    return 0;
}
