#include <stdio.h>
#include <stdlib.h>


//1

	//ciclo
float multInt (int n, float m) {
		float r=0;
		while (n>0) {
			r+=m;
			n--;
		}
		return r;
}

	//recursiva
float multInt (int n, float m) {
	if (n==1) return m;
	else return (m + multInt (n-1,m));
}

float multInt (int n, float m) {
	return (n==1) ? m:(m+multInt (n-1,m));
}

//2

	//ciclo
float multInt2 (int n, float m) {
	float r=0;
	while (n>0){
		if ((n%2)!=0) r+=m;
		m=2*m;
		n=n/2;
	}
	return r;
}
int main (){
	int a;
	float b;
	printf ("Introduza o inteiro n:");
	scanf ("%d\n", &a);
	printf ("Introduza o inteiro m:");
	scanf ("%d\n", &b);
	printf ("\nOresultado da multiplicação %d por %f é:%f\n", a, b, multInt (a,b));
	return 0;
}

	//recursiva
float multInt2 (int n, float m) {
	if (n==0) return 0;
	else {
		if (n%2) return m + multInt2 (n/2,m+2);
		else return multInt2(n/2,m*2);
	}
}

//3

int mdc (int a, int b) {
	int i;
	if (a<b)
		i=a; else i=b;
	while (b%i!=0 || a%i!=0)
		i--;
	return i;
}

//4

int mdc2 (int a, int b){
	int r;
	if(a == b) r = a;
	if(a > b) r = mymdc(a-b,b);
	if(a < b) r = mymdc(a,b-a);
	return r;
}

//6

int fib (int n) {
	int r=0;
	if (n<2) r=1;
	else r=(fib (n-1)+fib(n-2));
	return r; 
}

//7

int fib2 (int n) {
	int x, b=1, c=1;
	if(a>=2){
		while (n!=1){
			x=b+c;
			c=b;
			b=x;
			n--;
		}
	}	
	else return 1;	
	return x;
}