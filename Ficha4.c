#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> //utilização da função 'tolower' p.e.
#include <string.h>


//1

int minusculas (char s[]){
	int i,c=0;
	for (i=0;s[i]!='\0';i++){
		if (s[i]>='A' && s[i]<='Z'){
			s[i]=tolower(s[i]);
			c++;
		}
	}
	return c;
}

int main() {
    char s[]="ABCDE";
    printf("%s\n %d", s,minusculas(s));
    return 0;
}

//2

int contalinhas (char s[]){
	int i,l=1;
	for (i=0;s[i]!='\0';i++){
		if (s[i]=='\n') c++;
	}
	return l;
}

//3 pode estar errada n consegui testar

int contaPal (char s[]){
	int i,p=1;
	for (i=0;s[i]!='\0';i++){
		if (isalpha (s[i]) && (isspace(s[i+1]) || s[i+1]='\0')) p++;
	}
	return p;
}

//4

int procura (char *p, char *ps[], int N){
	int i, flag=0;
	for (i=0;!flag && i<N;i++){  //!flag é equivalente a flag=0
		if(!strcmp(p,ps[i])) flag=1; //!strcmp é equivalente ao valor dado por essa função ser 0
	}								 //ou seja ambas as strings serem iguais
	return flag;
}

//5

#define MAX 100
typedef struct stack {
int sp;
int valores [MAX];
} STACK;

//a)
void initStack (STACK *s){
	s->sp=0;
}

//b)
int isEmptyS (STACK *s){
	if (s->sp==0) return 1;
	return 0;
}


//c)
int push (STACK *s, int x){
	if (s->sp<MAX){
		s->valores[s->sp]=x;
		s->sp++;
		return 0;
	} 
	else return 1; 
}

//d)

int pop (STACK *s, int *x){
	if (s->sp==0) return 1;
	*x = s->valores[s->sp-1];  //-1? pq nao sp apenas
	s->sp--;
	return 0;
}


//e)

int top (STACK *s, int *x){
	if (s->sp==0) return 1;
	*x = s->valores[s->sp-1];
	return 0;
}
