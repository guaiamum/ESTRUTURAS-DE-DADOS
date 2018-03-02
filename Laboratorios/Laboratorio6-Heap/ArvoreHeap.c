#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "ArvoreHeap.h"

// ***********************************************
// ******                                   ******
// ***********************************************
bool createHeap( tHeap* h, int n ) {

	h->heap = (int*) malloc(sizeof(int)*n);

	if (h->heap == NULL)
		return false;

	h->numElem = 0;
	h->maxElem = n;

	return true;
}

// ***********************************************
// ******                                   ******
// ***********************************************
void clearHeap(tHeap* h) {
	h->numElem = 0;
}

// ***********************************************
// ******                                   ******
// ***********************************************
bool insertHeap(tHeap* h, int n) {
	int index = h->numElem;
	//int pai = (index-1)/2; //printf("pai: %d\n",pai );

	if(index < h->maxElem){ //se o numElem for menor que o MAX
		h->heap[index] = n; // atribuo o valor desejado a pos no vetor
		h->numElem++; //incremento o numElem

		upHeap(h,index);

		printf("\ninserido em index= %d\n", index);
		return true;
	}
		return false;
}
// ***********************************************
// ******                                   ******
// ***********************************************
void printando(tHeap* h){
	int i = 0;

	if(h->numElem == 0)
		printf("heap vazio :(\n");

	while (i< h->numElem){
		printf("%d\n", h->heap[i]);
		i++;
	}

	printf("\n" );
}

// ***********************************************
// ******                                   ******
// ***********************************************
bool removeHeap(tHeap* h, int *k) {
	int i=1;

	if(h->numElem == 0)
		return false;

	*k = h->heap[0];

	while(i < h->numElem){
		h->heap[i-1] = h->heap[i];
		i++;
	}

	h->numElem--;
	return true;

}

// ***********************************************
// ******                                   ******
// ***********************************************
void upHeap(tHeap* h, int i) {
	int pai = (i-1)/2;

	while (h->heap[i] > h->heap[pai]){ //enquanto for maior que o pai, troco de pos c ele
		int aux;

		aux = h->heap[pai];
		h->heap[pai] = h->heap[i];
		h->heap[i] = aux;

		i = pai;
		pai = (i-1)/2;
	}
}

// ***********************************************
// ******                                   ******
// ***********************************************
void downHeap(tHeap* h, int i) {
	int filho_e = 2*i + 1;
	int filho_d = 2*i + 2;

	while (h->heap[i] < h->heap[filho_e] || h->heap[i] < h->heap[filho_d]){
		int aux;

		aux = h->heap[filho_e];
		h->heap[filho_e] = h->heap[i];
		h->heap[i] = aux;

		i = filho_e;
		filho_e = 2*i + 1;
	}
}

// ***********************************************
// ******                                   ******
// ***********************************************
bool createHeapFromVector(int* v){
	return false;
}
