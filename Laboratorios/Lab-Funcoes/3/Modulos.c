/* Modularizacao */ 

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#include "Ponto.h"

/// ***********************************************************************
/// ***********************************************************************
/// ** 
/// ***********************************************************************
/// ***********************************************************************
int main() {
	
	

tPonto P[10];
tPonto Q;

	
	srand( time(NULL) );
	
	printf("Modularizacao\n");

	criaPonto(&Q, 0);
	imprimePonto(Q);
	
	int i;
	
	for (i = 0 ; i < 10 ; i++) 
		criaPonto(&P[i], i);
	
	imprimePontos(P, 10);
	
	maiorMenorPonto(P);
	
	pontoMedio(P);
	
	
		
	return 0;
}
