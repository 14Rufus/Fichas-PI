#include <stdio.h>
#include <stdlib.h>

//1

//a
int uma() {
int x [15] = {1, 2, 3, 4, 5,
6, 7, 8, 9,10,
11,12,13,14,15};
int *y, *z, i;
y = x; z = x+3;
for (i=0; (i<5); i++) {
printf ("%d %d %d\n",
x[i], *y, *z);
y = y+1; z = z+2;
}
}

//b
int umb () {
int i, j, *a, *b;
i=3; j=5;
a = &i; b = &j;
i++;
j = i + *b;
b = a;
j = j + *b;
printf ("%d\n", j);
return 0;
}

//2

void swapM (int*x, int*y) {
	int r=0;
	r=*x;
	*x=*y;
	*y=r;
}


int dois () {
	int x = 3, y = 5;
	swapM (&x, &y);
	printf ("%d %d\n", x, y);
	return 0;
}

//3

void swap (int v[10], int i, int j) {
	int z = 0;
	z = v[j];
	v[j] = v[i];
	v[i] = z;
}

int tres () {
	int i,j;
	i = 3, j = 5;
	int v[10] = {0,1,2,3,4,5,6,7,8,9};
	swap (v, i, j);
	printf ("%d %d\n", v[i], v[j]);
	return 0;
}


//4 

int soma (int v[], int N) {
	int i=0, t=0;
	for (i=0; i<N; i++) {
		t+=v[i];
	}
return t;
}

int quatro () {
	int N;
	int v[10]= {0,1,2,3,4,5,6,7,8,9};
	scanf ("%d", &N);
	soma (v, N);
	printf("%d\n", soma(v, N));
return 0;
}

//5

int maximum (int v[], int N, int *m) {
	int i=0, max = v[0], a;
	for (i=0; i<N; i++){
		a = v[i];
		if (a > max) {
			max = a;
		}
	}
	*m = max;
return *m;	
}

int cinco () {
	int N = 5, m = 0;
	int v[5]= {14,139,30,56,165};
	maximum (v, N, &m);
	printf("%d\n", maximum(v, N, &m));
return 0;
}

//6

void quadrados (int v[], int N) {
	int n;
	for (n=0; n!=N; n++) {
		v[n] = (n+1)*(n+1);
	}
}