#include "alunos.h"
#include <stdlib.h>
#include <stdio.h>

int acrescentaAluno (Turma *t, Aluno a){
	Turma aux = malloc(sizeof(NodoTurma)); 
	if (aux){
		aux->aluno = a;
		aux->proxAluno = *t;

		*t = aux;
		return 0;
	}
	else return 1;	
}

void showAluno(Aluno a){
	printf("%30s :: %d :: %2d\n", a.nome, a.numeroAluno, a.nota);
}


void showTurma(Turma t){
	while (t){
		showAluno (t->aluno);
		t=t->proxAluno;
	} 
}

void showTurmaRec(Turma t){  //igual a de cima mas recursiva
	if (t){
		showTurmaRec(t->proxAluno);
		showAluno (t->aluno);
	} 
}


Aluno *procura (Turma t, int numero){
	while (t && t->aluno.numeroAluno != numero) t = t->proxAluno;
	if(t)
        return &(t->aluno);
    else
        return NULL;
}

int numeroAprovados (Turma t){
	while (t){
		if(t->aluno.nota >= 10) n++;
        t=t->proxAluno;
    }
    return n;
}

int numeroAprovadosRec (Turma t){   //igual a de cima mas recursiva
	if (!t) return 0;
	else 
		return (t->aluno.nota >= 10)? 
			1 + numeroAprovadosRec (t->proxAluno) : 
			numeroAprovadosRec (t->proxAluno);
}