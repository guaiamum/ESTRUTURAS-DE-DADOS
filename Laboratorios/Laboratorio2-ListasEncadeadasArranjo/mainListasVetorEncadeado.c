#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "listaVetorEncadeado.h"

// ***********************************************
// ***********************************************
// ***********************************************

int main(int argc, char** argv) {

tListaVet L0, L1;
int i, numElem0, numElem1;

	printf("Com quantos elementos voce deseja criar a lista 0? \n");
	scanf("%d", &numElem0);
	if (!initLista(&L0, numElem0) ) { 
    	printf("Nao foi possivel cria a lista com %d elementos\n", numElem0); 
    	exit(0);
    	}
    imprimirLista(L0);
    imprimirListaCompleta(L0);
    
    
	printf("Com quantos elementos voce deseja criar a lista 0? \n");
	scanf("%d", &numElem1);
	if (!initLista(&L1, numElem1) ) { 
    	printf("Nao foi possivel cria a lista com %d elementos\n", numElem1); 
    	exit(0);
    	}
    imprimirLista(L1);
    imprimirListaCompleta(L1);
    i = 0;
    do { 
    	float n = rand() % 1000;
    	if (!inserirElem(&L0, n))
    		break;
    	i++;
    } while (i < numElem0);

    imprimirLista(L0);   
    i = 0;
    do { 
    	float n = rand() % 1000;
    	if (!inserirElem(&L1, n))
    		break;
    	i++;
    } while (i < numElem1);
    
    imprimirLista(L1);   

    limparLista(&L1);
    imprimirLista(L1);
    imprimirListaCompleta(L1);
    
    for (i = 0 ; i < tamLista(L0) ; i++) {
    	float n = rand() % 1000;
    	if (removerElem(&L0, n))
    		printf("Remocao %f OK\n", n);
    	else
    		printf("Remocao %f nao OK\n", n);
    	}
    	
    imprimirLista(L0);
    imprimirListaCompleta(L0);
}
