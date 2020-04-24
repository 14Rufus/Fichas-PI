#include "alunos.h"
#include <stdlib.h>
#include <stdio.h>

int main(){
	Aluno a1 = {"Ana Cristina", 91234, 16}
	Aluno a2 = {"Berto Almeida", 88919, 14}

	Turma t1=NULL;

	acrescentaAluno(&t1, a1);
	acrescentaAluno(&t1, a2);
	acrescentaAluno(&t1, a3);

	showTurma (t1);
	showTurmaRec(t1);

	printf("Procura de 88919:\n\t");
	showAluno(*procura(t1,88919));

}