#include "stack.h"
#include <stdlib.h>
#include <stdio.h>


void initStack (Stack *s){
	*s = NULL;
}



int isEmptyS (Stack *s){  
	return (*s)? 0 : 1;
}


int push (Stack *s, int x){
    Stack novo;
    novo = malloc (sizeof(Nodo));
    if (novo) {
        novo->valor=x;
        novo->prox=(*s);
        *s = novo;
        return 0;
    } 
    else return 1;
}


int pop (Stack *s, int *x){
	Stack pt;
    if(!isEmptyS(s)) {
        *x = (*s)->valor;
        pt = (*s)->prox;
        free(*s);
        *s=pt;
        return 0;
    } 
    else return 1;
}



int top (Stack *s, int *x){
	if(!isEmptyS(s)) {
        *x = (*s)->valor;
        return 0;
    } 
    else return 1;
}