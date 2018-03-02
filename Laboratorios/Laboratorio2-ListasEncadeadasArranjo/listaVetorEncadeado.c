#include <stdio.h>
#include <stdlib.h>
#include "listaVetorEncadeado.h"

// ***********************************************
// ***                                         ***
// ***********************************************
bool initLista(tListaVet *l, int num) {	
	
tNo *vet;
int i;
	
	l->inicio 	= SENTINELA;
    l->numElems = 0;
    l->tamMax 	= 0;
    
    l->V = (tNo *) malloc(num*sizeof(tNo));
    
    if (l->V == NULL) 
    	return false;
  
    l->tamMax = num;
    
    return true;
}

// ***********************************************
// ***                                         ***
// ***********************************************
void limparLista(tListaVet *l) {
	
	l->inicio 	= SENTINELA;
    l->numElems = 0;
    l->tamMax 	= 0;
    
    if (l->V != NULL)
    	free(l->V);
}

// ***********************************************
// ***                                         ***
// ***********************************************
bool inserirElem(tListaVet *l, float k) {

	return false;
}

// ***********************************************
// ***                                         ***
// ***********************************************
bool removerElem(tListaVet *l, float k) {
	
	return false;
}

// ***********************************************
// ***                                         ***
// ***********************************************
int buscarElemPos(tListaVet l, float k, int* pos) {
	
    return false;
}

// ***********************************************
// ***                                         ***
// ***********************************************
bool buscarElem(tListaVet l, float k) {
	
    return false;
}

// ***********************************************
// ***                                         ***
// ***********************************************
void imprimirLista(tListaVet l) {

	printf("------------ LISTA ------------\n");	
    	
	printf("----------------------------------\n");

}

// ***********************************************
// ***                                         ***
// ***********************************************
void imprimirListaCompleta(tListaVet l) {
	
	printf("--------- LISTA COMPLETA ---------\n");	

	printf("----------------------------------\n");
}

// ***********************************************
// ***                                         ***
// ***********************************************
int tamLista(tListaVet l) {

	return 0;
	
}
