#include <stdio.h>
#include <stdlib.h>

int um () {
int x,y;
x = 3; 
y = x + 1;
x = x * y; 
y = x + y;
printf ("%d %d\n", x, y);
}


//2
 //1 a)

int uma () {
int x, y;
x = 3; 
y = 5;
if (x > y) y = 6;
printf ("%d %d\n" , x, y);
}

//1 b)
int umb () {
int x , y ;
x = y = 0;
while ( x != 11) {
x = x +1; y += x ;
}
printf ( " % d % d \n " , x , y ) ;
}

//1 c)
int umc () {
int x , y ;
x = y = 0;
while ( x != 11) {
x = x + 2; y += x ;
}
printf ( " %d %d \n " , x , y ) ;
}

//1 d)
int umd () {
	int i;
	for ( i = 0 ; (i < 20) ; i++) {
		if ( i%2 == 0) {
			putchar ('_');
		}
		else {
			putchar ('#');
		}
	}			
}

//1 e)
int ume () {
	char i, j;
	for ( i = 'a'; ( i != 'h') ; i++) {
		for ( j = i ; ( j != 'h') ; j++) {
			putchar ( j );
		}
		putchar ('\n');
	}
}


//1 f)
void f ( int n ) {
	while (n >0) {
		if ( n %2 == 0) putchar ( '0') ;
    	else putchar ( '1') ;
       n = n /2;
    }
    putchar ( '\n') ;
}
int umf () {
	int i ;
	for ( i =0;( i <16) ; i ++) {
		f ( i ) ;
	}
	return 0;
}


//2

int dois () {
    int x,i,k;
    scanf ("%d", &x);
    i = k = 0;
    while (k != x){
        while (i!=x) {
            putchar ('#');
            i++;
        }
        putchar ('\n');
        i = 0;
        k++;
    }
return 0;
}

//3 

int tres () {
    char a;
    int x,i,k;
    i = k = 0;
    a = '_';
    scanf ("%d", &x);
    while (k != x){
        while (i!=x) {
        	if (a=='_'){
            putchar ('#');
            a = '#';}
            else {
            putchar ('_');           
            a = '_';}
            i++;
        }    
        putchar ('\n');
        i = 0;
        k++;
    }
return 0;
}    

//4

int triangulo1 () {
	int x,i,k,r;
	i = k = 0;
	r = 1;
	scanf ("%d", &x);
	while (i != x) {
		while (k != r) {
			putchar ('#');
		    k++;
		}
		putchar ('\n');
		k=0;
		r++;
		i++;
}
x-- ;
k = 0;
    while (x != 0){
        while ( k != x){
            putchar ('#');
            k++;
        }
        putchar ('\n');
        k = 0;
        x--;
    }
    return 0;
}		


int triangulo2 () {
	char p = '#';
    int e,x,i,r,f; // e = nº de espaços
    scanf ("%d", &x);
    i = f = 0;
    e = x-1;
    r=1;
    while (f!=x){
        while (i!=e){ // nº de espaços 1 linha
            putchar (' ');
            i++;
        }
        i=0;
        while (i!=r){
            putchar (p);
            i++;
        }
        putchar ('\n');
        i=0;
        r+=2; // aumenta 2 caracteres p/ linha
        f++;
        e--;
    }
    return 0;

}

//19/20

//2

void quadrado (int N) {
    int i,j;
    for (i=0; i<N; i++) {
        for (j=0; j<N; j++){
            putchar ('#');
            putchar ('\n');
        }
    }
}

//3

void alternado (int N) {
    int i,j;
    for (i=0; i<N; i++) {
        for (j=0; j<N; j++) {
            if ((i%2)==0) {
                if ((j%2)==0) {
                    putchar ('#');
                }
                else putchar ('_');
            }
            else if ((j%2)==0) {
                putchar ('_');
                else putchar ('#');
            }
        }
    }
    putchar ('\n');    
}

//4
