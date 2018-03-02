#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "buscaSeq.h"
#include "buscaSeqOrd.h"
#include "buscaBin.h"
#include "insertSort.h"
#include "quicksort.h"

#define MAX 	200
#define ERROR 	-1


/// ***********************************************************************
/// ** 
/// ***********************************************************************

void initRandom(int v[], int n) {

int i;
	
	srand( time(NULL) );
	
	for (i = 0 ; i < n; i++) 
		v[i] = ( rand() % 10000 );	
	
} 

/// ***********************************************************************
/// ** 
/// ***********************************************************************

void imprimeVetor(int v[], int n) {

int i;
	
	srand( time(NULL) );
	
	for (i = 0 ; i < n; i++) 
		printf("%d - ", v[i]);
	printf("\n");
	
} 

/// ***********************************************************************
/// ***********************************************************************
/// ** 
/// ***********************************************************************
/// ***********************************************************************

int main () {

	int v[MAX];
	
	int numElem, chave, pos;
	
	do {
		printf("Quantos Elementos no vetor? [%d..%d]\n", 1, MAX);
		scanf("%d", &numElem);
	} while ( (numElem <= 0) && numElem > MAX);
	
	initRandom(v, numElem);
	
	imprimeVetor(v, numElem);
	
	printf("Qual chave buscar?\n");
	scanf("%d", &chave);

	pos = buscaSeq(v, numElem, chave);	

	if (pos == ERROR)
		printf ("Nao encontrou\n");
	else
		printf ("Encontrei em v[%d] => %d\n", pos, v[pos]);	
	
	insertSort(v, numElem);
	//quicksort(v,0,numElem-1);
	imprimeVetor(v, numElem);

	pos = buscaSeqOrd(v, numElem, chave);	

	if (pos == ERROR)
		printf ("Nao encontrou\n");
	else
		printf ("Encontrei em v[%d] => %d\n", pos, v[pos]);	
	
	pos = buscaBin(v, numElem, chave);	

	if (pos == ERROR)
		printf ("Nao encontrou\n");
	else
		printf ("Encontrei [bin] em v[%d] => %d\n", pos, v[pos]);	
	
	return 0;
}