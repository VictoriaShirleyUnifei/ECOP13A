#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> conjunto;
    set<int>::iterator it;

    // Em um set, as chaves n�o podem ser duplicadas.
    // para isso, utilize um multiset (tamb�m de <set>)
    conjunto.insert(30);
    conjunto.insert(20);
    conjunto.insert(10);
    conjunto.insert(10); // n�o ser� inserido
    conjunto.insert(20); // n�o ser� inserido
    conjunto.insert(40);
    conjunto.erase(10); // apaga um item, baseado no valor.

    cout << "Quantidade de elementos: " << conjunto.size() << endl;
    cout << "Elementos: ";
    // perceba que os elementos em um set est�o sempre ordenados
    for(it = conjunto.begin(); it != conjunto.end(); ++it)
        cout << *it << " ";
    cout << endl;

    return 0;
}
