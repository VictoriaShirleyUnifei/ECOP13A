#include <iostream>
#include "aluno.h"
#include "professor.h"
#include "professoraluno.h"

int main()
{
	Pessoa p{"Joao", "Itajuba"};
	Aluno a{"Paulo", "Campinas", "ECO", 11984};
	Professor pf{"Pedro", "SJC", 132515, 2, "IESTI"};

	cout << "Pessoa: \n";
	p.imprime_perfil();
	cout << "\n\nAluno: \n";
	a.imprime_perfil();
	cout << "\n\nProfessor: \n";
	pf.imprime_perfil();

	Pessoa p2 = pf; // Pode isso? SIM. Mas não o contrário.
	cout << "\n\nSegunda Pessoa: \n";
	p2.imprime_perfil();

	ProfessorAluno pa{"Joao Paulo", "Itajuba-MG", 11984, 165165, 2, "ECO", "IESTI"};
	cout << "\n\nProfessor Aluno: \n";
	pa.imprime_perfil();
}

