#include <stdio.h>

void swap (int v[], int i, int j){
	int t=v[i];
	v[i]=v[j]; v[j]=t;
}


//1 Insertion Sort

void insere (int s[], int N, int x){
	int i,j;
	for (i=0;i<N && s[i]<x;i++){
		for (j=N;j!=i;j--){
			s[j]=s[j-i];
		}
	}
	s[i]=x;
}

//2 

void iSort (int v[], int N){
	int i,j;
	for (i=0;i<N-1;i++){
		m=i;
		for (j=i+1;j<N;j++){
			if (v[j]<v[m]) m=j;
		}
		swap (v,i,m);
	}
}

//3

int maxInd (int s[], int N){
	int i,n=0,max=0;
	for (i=0:i<N-1;i++){
		if (s[i]>max){
			max=s[i];
			n=i;
		} 
	}
	return n;
}

//4

void maxInd1 (int s[], int N){
	int j,x;
	for (j=N-1;j>0;j--){
		x=maxInd(s,j+1);
		swap(s,j,x);
	}
}

//5

void maxInd2 (ins s[], int N){
	int i,j;
	for (i=N;i>0;i--){
		for (j=0;j<i;j++){
			if (v[i]<v[j]) swap (s,i,j);
		}
	}
}

//6
//predefinida no enunciado
void bubble (int v[], int N) {
	int i;
	for (i=1;(i<n); i++){
		if (v[i-1] > v[i]) swap (v,i-1, i);
	}
}

//não sei se está certa
void bubbleSort (int v[], int N){
	int i;
	for (i=N-1;i>0;i--){
		bubble (v,i);
	}
}