#infdef _ALUNOS
#define _ALUNOS

typedef struct aluno{
	char nome[61];
	int numeroAluno, nota;
} Aluno;

typedef struct turma *Turma;

typedef struct turma {
	Aluno aluno;
	Turma proxAluno;
}NodoTurma;

int acrescentaAluno (Turma *t, Aluno a);

void showTurma(Turma t);

void showAluno(Aluno a);

void showTurmaRec(Turma t);

Aluno *procura (Turma t, int numero);

int numeroAprovados (Turma t);

#endif