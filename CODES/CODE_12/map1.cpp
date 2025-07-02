#include <map>
#include <iostream>

using namespace std;

int main()
{
    map<int, string> alunos;
    map<int, string>::iterator it;

    alunos.insert(make_pair(11984, "Joao"));
    alunos.insert(pair<int, string>{23456, "Jose"});
    alunos.insert(make_pair(8541, "Carlos"));
    alunos.insert(make_pair(8541, "Edmilson"));
    alunos.insert(pair<int, string>{29546, "Maria"});

    alunos.erase(23456);

    cout << "Lista de Alunos: " << endl;
    for(it = alunos.begin(); it != alunos.end(); ++it)
        cout << it->first << " - " << it->second << endl;

    return 0;
}
