#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

#include "pilha.h"

// ***********************************************
// ******                                   ******
// ***********************************************

bool initPilha(Pilha* p, int n) {
		p->maxElems = 0;
		p->topo = -1;

		p->pilha = (char*) malloc(n*sizeof(char));

		if (p->pilha == NULL)
			return false;

		p->maxElems = n;

   	return true;
}

// ***********************************************
// ******                                   ******
// ***********************************************

bool pilhaEVazia(Pilha p) {
		//pilha esta vazia
		if(p.topo == -1)
			return true;
		//pilha com algo
    	return false;
}


// ***********************************************
// ******                                   ******
// ***********************************************

bool pilhaECheia(Pilha p) {
		// posicao do topo é igual ao maxElems
		if(p.topo == p.maxElems)
			return true;

		return false;
}

// ***********************************************
// ******                                   ******
// ***********************************************

void empilha(Pilha* p, char c) {
		// SE PILHA ESTIVER CHEIA NEM ROLA MANOO
		/*if(pilhaECheia(*p))
    	return;

		// PILHA VAZIA AEEE
		if(pilhaEVazia(*p)){
			p->topo = 0; //TOPO NO PRIMEIRO ELEM
			p->pilha[0] = c; //PRIMEIRO ELEM DO VETOR É c
			return;
		}
*/
		p->topo++;
		p->pilha[p->topo] = c;
		return;


}

// ***********************************************
// ******                                   ******
// ***********************************************

char desempilha(Pilha* p) {
		p->topo--;
  	return 'X';
}
