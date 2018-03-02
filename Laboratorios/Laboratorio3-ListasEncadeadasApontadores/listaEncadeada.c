#include <stdio.h>
#include <stdlib.h>
#include "listaEncadeada.h"

// ***********************************************
// ***                                         ***
// ***********************************************
bool initLista(tListaEncadeada *l) {

	l->inicio = NULL;
	l->numElems = 0;

	return true;
}

// ***********************************************
// ***                                         ***
// ***********************************************
void limparLista(tListaEncadeada *l) {

}

// ***********************************************
// ***                                         ***
// ***********************************************
bool inserirElem(tListaEncadeada *l, float k) {
	tNo *p, *novoNo;

	novoNo = (tNo*) malloc(sizeof(tNo));

	//lista vazia
	if(l->numElems == 0){
		l->inicio = novoNo;
		l->numElems++;
		novoNo->dado = k;
		novoNo->prox = NULL;
		return true;
	}

	//procuro ultimo nó
	p = l->inicio;
	while (p->prox != NULL) {
		p = p->prox;
	}

	p->prox = novoNo; //ultimo vira penultimo
	l->numElems++;
	novoNo->dado = k;
	novoNo->prox = NULL;
	return true;

}

// ***********************************************
// ***                                         ***
// ***********************************************
bool removerElem(tListaEncadeada *l, float k) {
	tNo *sf, *aux;

	sf = buscarElemPos(*l,k);
	printf("%.2f\n", sf->dado);

	if( sf == NULL)
		return false;

		//procuro anterior a p
		aux = l->inicio;

		//se for primeiro
		if (aux == sf){
			l->inicio = sf->prox;
			free(sf);
			l->numElems--;
			return true;
		}

		//se n for
		while (aux->prox != sf){
			aux= aux->prox;
		}

		aux->prox = sf->prox; //anterior aponta para o prox
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
	if (l.inicio == NULL){
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
