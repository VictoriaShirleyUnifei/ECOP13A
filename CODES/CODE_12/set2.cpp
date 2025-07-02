#include <iostream>
#include <set>

using namespace std;

int main()
{
    multiset<int> conjunto;
    multiset<int>::iterator it;

    // Em um multiset, as chaves podem ser duplicadas.
    conjunto.insert(30);
    conjunto.insert(20);
    conjunto.insert(10);
    conjunto.insert(10); // será inserido
    conjunto.insert(20); // será inserido
    conjunto.insert(40);
    conjunto.erase(10); // apaga os itens com valor 10, baseado no valor.

    cout << "Quantidade de elementos: " << conjunto.size() << endl;
    cout << "Elementos: ";
    // perceba que os elementos em um multiset tb estão sempre ordenados
    for(it = conjunto.begin(); it != conjunto.end(); ++it)
        cout << *it << " ";
    cout << endl;

    return 0;
}
