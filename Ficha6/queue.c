#include <stdio.h>
#include <stdlib.h>
#include "Queue.h"

// Static queues 

void SinitQueue (SQueue q){
	q->front=0;
	q->lenght=0;

int  SisEmptyQ (SQueue q){
    if ((q->length)==0) return 1;
	return 0;
}

int  Senqueue (SQueue q, int x){
	if ((q->length)==MAX) return 1;
	pos=(q->front)+(q->length)%Max;   //? n percebi o pq da %Max
	q->values[pos]=x;
	q->length++;
	return 0;
}

int  Sdequeue (SQueue q, int *x) {
	if (SisEmptyQ(q)) return 1;
	*x=q->values[q->front];
	q->front=(q->front+1)%Max;  //? %Max
	q->length--;
	return 0;
}

int  Sfront (SQueue q, int *x) {
	if (SisEmptyQ(q)) return 1;
	*x=q->values[q->front];
	return 0;
}

void ShowSQueue (SQueue q){
    int i, p;
    printf ("%d Items: ", q->length);
    for (i=0, p=q->front; i<q->length; i++) {
        printf ("%d ", q->values[p]);
        p = (p+1)%Max;
    }
    putchar ('\n');
}

// Queues with dynamic arrays

int dupQueue (DQueue q){
    int i, j, r = 0;
    int *aux = malloc(2*q->size,(sizeof(int)));
    if(aux == NULL) r = 1;
    else{
    	for (i = q->front; j = 0; j < q->size; j++, i = (i+1)%q->size) {
        	aux[j] = q->values[i];
   	 }
    	free(q->values);
    	q->values = aux;
    	q->size = 2*q->size;
    	q->front = 0;
    }
    return r;
}

void DinitQueue (DQueue q) {
	q->size=1;
	q->front=0;
	q->length=0;
	q->values=malloc(sizeof(int)); //? sizeof(int)
}

int  DisEmptyQ (DQueue s) {
	if (q->length==0) return 1;
	return 0;
}

int  Denqueue (DQueue q, int x){
	if (q->length==q->size) dupQueue(q);
	pos=(q->front)+(q->length)%(q->size);
	q->values[pos]=x;
	q->length++;
	return 0;
}

int  Ddequeue (DQueue q, int *x){
	if (DisEmptyQ(q)) return 1;
	*x=q->values[q->front];
	q->front0=((q->front) + 1)%q->size;  //? %q->size
	q->length--;
	return 0;
}

int  Dfront (DQueue q, int *x){
	if (DisEmptyQ(q)) return 1;
	*x=q->values[q->front];
	return 0;
}

void ShowDQueue (DQueue q){
    int i, p;
    printf ("%d Items: ", q->length);
    for (i=0, p=q->front; i<q->length; i++) {
        printf ("%d ", q->values[p]);
        p = (p+1)%q->size;
    }
    putchar ('\n');
}