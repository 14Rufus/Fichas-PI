#ifndef _LLINT
#define _LLINT

typedef struct slist *LInt;

typedef struct slist{
	int valor;
	struct slist * prox;
}Nodo;

void showLInt (LInt l);
