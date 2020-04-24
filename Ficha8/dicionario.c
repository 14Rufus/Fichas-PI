#include "dicionario.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void initDic (Dicionario *d){
    d->lista = NULL;
    d->npal = 0;  //(*d).npal = 0;
}

Palavras existePal(Palavras pals, char *pal){
    Palavras res = NULL;
    while (pals && strcmp(pals->palavra, pal)!=0 )
        pals = pals->prox;
    if(pals && strcmp(pals->palavra, pal)==0)
        res = pals;
    
    return res;
}

Palavras insPal(Palavras pals, char *pal){
    Palavras palPtr, res;
    if((palPtr = existePal(pals, pal))){
        palPtr->ocorr++;
        res = pals;
    }
    else{
        palPtr = malloc (sizeof(Palavra));
        palPtr->palavra = strdup(pal);
        palPtr->ocorr = 1;

        palPtr->prox = pals;
        res = palPtr;
    }
    return res;
}

int acrescenta (Dicionario *d, char *pal){
    d->lista = insPal(d->lista, pal);
    return 0;
}

void showPalavras(Palavras pals){
    if(pals){
        printf("%s : %d\n",pals->palavra, pals->ocorr);
        showPalavras(pals->prox);
    }
}

void showDic(Dicionario d){
    if(d.lista) showPalavras(d.lista);
}

char *maisFreq (Dicionario d, int *c);