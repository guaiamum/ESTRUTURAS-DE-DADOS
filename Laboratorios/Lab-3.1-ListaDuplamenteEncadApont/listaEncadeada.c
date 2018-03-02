#include <stdio.h>
#include <stdlib.h>
#include "listaEncadeada.h"

// ***********************************************
// ***                                         ***
// ***********************************************
bool initLista(tListaEncadeada *l) {

	l->inicio = NULL;
	l->fim = NULL;
	l->numElems = 0;


	return true;
}

// ***********************************************
// ***                                         ***
// ***********************************************
void limparLista(tListaEncadeada *l) {
	tNo* p;

	p = l->inicio;
	while (p->prox != NULL){
		free(p);
		p = p->prox;
	}
	 initLista(l);
}

// ***********************************************
// ***                                         ***
// ***********************************************
bool inserirElem(tListaEncadeada *l, float k) {
	tNo *novoNo;

	novoNo = (tNo*) malloc(sizeof(tNo));

	//lista vazia
	if(l->numElems == 0){


		l->inicio = novoNo;
		l->fim = novoNo;
		l->numElems++;
		novoNo->dado = k;
		novoNo->prox = NULL;
		novoNo->prev = NULL;
		return true;
	}

	l->fim->prox = novoNo; //ultimo vira penultimo
	l->numElems++;

	novoNo->prev = l->fim;
	novoNo->dado = k;
	novoNo->prox = NULL;

	l->fim = novoNo;

	return true;

}

// ***********************************************
// ***                                         ***
// ***********************************************
bool removerElem(tListaEncadeada *l, float k) {
	tNo *sf;

	sf = buscarElemPos(*l,k);

	if( sf == NULL)
		return false;

//se for o primeiro
	if(sf->prev == NULL){
		sf->prox->prev = NULL;
		l->inicio = sf->prox;
		free(sf);
		l->numElems--;
		return true;
	}
	//ultimo
	if(sf->prox == NULL){
		l->fim = sf->prev;
	}

	//se n for
	sf->prev->prox = sf->prox;
	free(sf);
	l->numElems--;

	return true;

}

// ***********************************************
// ***                                         ***
// ***********************************************
tNo* buscarElemPos(tListaEncadeada l, float k) {
	tNo* p;

	//procuro k
	p = l.inicio;
	while (p->prox != NULL){

		if (p->dado == k){
			printf("achei %.2f !!\n", k);
			return p;
		}

		p = p->prox;
	}
	//else
		printf("nao achei %.2f :(\n", k);
    return NULL;
}

// ***********************************************
// ***                                         ***
// ***********************************************
bool buscarElem(tListaEncadeada l, float k) {
	if (buscarElemPos(l,k) == NULL)
		return false;
	else
		return true;

}

// ***********************************************
// ***              IMPRIMIR LISTA             ***
// ***********************************************
void imprimirLista(tListaEncadeada l) {
	tNo* p;

	printf("------------LISTA ENCADEADA-------------\n");
	if (l.numElems == 0){
		printf("lista vazia!\n");
		//printf("----------------------------------------\n");
		return;
	}

	p = l.inicio;

	while (p->prox != NULL){
		printf("%.2f\n",p->dado);
		p = p->prox;
	}
	printf("%.2f\n",p->dado);
}

// ***********************************************
// ***                                         ***
// ***********************************************
int tamLista(tListaEncadeada l) {

	return l.numElems;

}
