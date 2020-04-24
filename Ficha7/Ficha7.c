#include <stdio.h>
#include <stdlib.h>
#include "structs.h"


typedef struct slist *LInt;
typedef struct slist {
int valor;
LInt prox;
} Nodo;

//1

//a)

LInt criaExemplo (){
	LInt primeiro = malloc (sizeof(struct slist));
	LInt segundo  = malloc (sizeof(struct slist));
	LInt terceiro = malloc (sizeof(struct slist));

	primeiro->valor = 10;
	segundo ->valor = 5;
	terceiro->valor = 15;

	primeiro->prox = segundo;
	segundo->prox = terceiro;
return 0;
}

//b)

//i)

LInt cons (LInt head, int x){
	LInt new = malloc(sizeof(struct slist));
	new->valor = x;
	new->prox = head;
	return new;
}

//ii)

LInt tail (LInt l) {
	LInt tmp = head;
	head = head->prox;
	free (tmp);
	return head;
}

//iii)

LInt init (LInt l) {
	LInt aux = l;   //aux-> apontador para cada elemento da lista
	while (aux != NULL && aux->prox != NULL) {
		aux = aux->prox;
	}
	if (aux != NULL && (aux->prox)->prox == NULL) {
		free(aux->prox);
		aux->prox = NULL;
	}
	return l;
}

//iv)

LInt snoc (LInt l, int x) {
	LInt aux = l;   //aux-> apontador para cada elemento da lista
	while (aux != NULL && aux->prox != NULL) {
		aux = aux->prox;
	}
	if (aux != NULL && aux->prox == NULL) {
		LInt new = (LInt) malloc(sizeof(struct slist));
		new->valor = x;
		new->prox = NULL;
		aux->prox = new;
	}
	return l;		
}		

//v)

LInt concat (LInt a, LInt b) {
	if (a==NULL) {
		a=b;
		return a;
	}
	else if (b==NULL) {
		return a;
	}
	LInt aux=a;
	while (aux!=NULL && aux->prox!=NULL) {
		aux=aux->prox;
	}
	if (aux!=NULL && aux->prox==NULL) {
		aux->prox=b;
	}
	return a;
}

//2019/2020

typedef struct slist *LInt;
typedef struct slist {
int valor;
LInt prox;
} Nodo;

//1
void showLInt (LInt l){
	while(l!=NULL){
		printf("%d",l->valor);
		l=l->prox;
	}
	putchar ('\n');
}

int main (){
	LInt lista;
	
	lista=(LInt)malloc(sizeof(Nodo)); //tipar o valor apontado pelo malloc (pode ajudar com erros no futuro, mas nao é necessário)
	lista->valor=15;
	lista->prox=NULL;

	aux=(LInt)malloc(sizeof(Nodo));
	aux->valor=5;
	aux->prox=lista;

	lista=(LInt)malloc(sizeof(Nodo));
	lista->valor=10;
	lista->prox=aux;

	showLInt(lista);

	return 0;
}
