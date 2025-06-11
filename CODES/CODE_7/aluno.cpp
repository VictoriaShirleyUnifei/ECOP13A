#include "aluno.h"

// Podemos chamar o construtor da classe base
// para inicializar os membros herdados.
// Por isso, Pessoa{n,e} já inicializa a parte 
// de Aluno que é simplesmente uma Pessoa.
Aluno::Aluno(string n, string e, string c, int m)
	: Pessoa{n,e}, curso{c}, matricula{m} {}

// Somente implementamos as funções membro da classe Aluno
void Aluno::mudar_curso(string c)
{
	curso = c;
}

