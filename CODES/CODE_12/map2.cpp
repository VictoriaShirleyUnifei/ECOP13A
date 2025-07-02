#include <map>
#include <iostream>

using namespace std;

int main()
{
    multimap<int, string> alunos;
    multimap<int, string>::iterator it;

    // inserindo cinco alunos
    alunos.insert(make_pair(11984, "Joao"));
    alunos.insert(pair<int, string>{23456, "Jose"});
    alunos.insert(make_pair(8541, "Carlos"));
    alunos.insert(make_pair(8541, "Edmilson")); // É inserido!
    alunos.insert(pair<int, string>{29546, "Maria"});

    // Removendo José
    alunos.erase(23456);

    // Imprimindo lista de alunos
    // Repare que o map está ordenado de acordo com a chave
    cout << "Lista de Alunos: " << endl;
    for(it = alunos.begin(); it != alunos.end(); ++it)
        cout << it->first << " - " << it->second << endl;

    return 0;
}

