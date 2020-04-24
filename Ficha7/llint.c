#include "llintpontoh.c"



void showLInt (LInt l){
	while(l!=NULL){
		printf("%d",l->valor);
		l=l->prox;
	}
	putchar ('\n');
}

void showLInt (LInt l, int x){
	LInt novo=malloc(sizeof(Nodo));
	novo->valor=x;
	novo->prox=l;
	
}

LInt cons (LInt l, int x){
	LInt novo = (LInt) malloc(sizeof(Nodo));
	novo->valor=x;
	novo->prox=l;
	return novo;
}

LInt tail (LInt l){
	LInt r=NULL;
	if(l){
		r=l->prox;
		free(l);
	}
	return r;
}

LInt init (LInt l){
	LInt r = l, ant;
       
    while(l!=NULL && l -> prox != NULL) {  //ou  while(l && l -> prox) {
       ant = l;
       l = l ->prox; 
    }
    if (l){
    	ant -> prox = NULL;
    	free(l);
    }


    return r;
}

LInt snoc (LInt l, int x) {
  LInt novoNodo = malloc (sizeof(Nodo));
  LInt pt;
  
  novoNodo->valor = x;
  novoNodo->prox = NULL;

  for( pt = l; pt != NULL && pt->prox != NULL; pt = pt->prox) ;

  if (!pt) {
    l = novoNodo;
  } else {
    pt->prox = novoNodo;
  }

  return l;
}

LInt concat (LInt a, LInt b) {
  LInt pt;
  
  for(pt = a; pt!=NULL && pt->prox != NULL; pt = pt->prox) ;

  if (!pt) {  //testa se o pt é NULL ou não. Percorre o if apenas se for NULL.
    a = b;
  } else {
    pt->prox = b;
  }

  return a;
}


//2 (Exemplo stor)
int main(){
	Aluno a1 = {"Ana Cristina", 91234, 16}
	Aluno a2 = {"Berto Almeida", 88919, 14}

	t1 = malloc(sizeof(NodoTurma));
  t2 = malloc(sizeof(NodoTurma));

    t1->aluno = a1;
    t1->proxAluno->aluno = t2;
    t1->proxAluno->proxAluno = NULL;


	Turma t1;

	return 0;
}


