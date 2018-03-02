#include "listaVetor.h"
#include <stdio.h>

// ***********************************************
// ***                                         ***
// ***********************************************
bool initLista(Lista *L,int N) {
	

	if (N <= MAX_LISTA){
	L->tamMax = N;
	L->numElems = 0;
	return true;
	}
	else
		return false;

}

// ***********************************************
// ***                                         ***
// ***********************************************
void limparLista(Lista *L) {
	
	//L->numElems = 0;
}

// ***********************************************
// ***                                         ***
// ***********************************************
bool inserirElem() {
	
	return false;

}

// ***********************************************
// ***                                         ***
// ***********************************************
bool removerElem() {
	
	return false;

}

// ***********************************************
// ***                                         ***
// ***********************************************
int buscarElemPos() {
	
	return -1;

}

// ***********************************************
// ***                                         ***
// ***********************************************
bool buscarElem() {
	
	return false;

}

void imprimirLista(Lista L) {
	int i;
	//printf("entrou em imprimirLista\n%d\n",L.numElems);
	printf("Imprimindo Lista ...");
	for (i=0;i<L.numElems;i++){
		printf("%.2f \n",L.V[i]);
	}
}

// ***********************************************
// ***                                         ***
// ***********************************************
void imprimirListaCompleta(Lista L) {
	int i;
	printf("Imprimindo Lista Completa...");
	for (i=0;i<MAX_LISTA;i++){
		printf("%.2f \n",L.V[i]);
	}
}

// ***********************************************
// ***                                         ***
// ***********************************************
int tamLista(Lista L) {

	return L.numElems;

}
