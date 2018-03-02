#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "listaVetor.h"

// ***********************************************
// ***********************************************
// ***********************************************

int main(int argc, char** argv) {

Lista L0, L1;
int i, numElem0, numElem1;

	printf("Com quantos elementos voce deseja criar a lista 0? [1..%d]\n", MAX_LISTA);
	scanf("%d", &numElem0);
	if (!initLista(&L0,numElem0) ) { 
    	printf("Nao foi possivel cria a lista com %d elementos\n", numElem0); 
    	exit(0);
    	}
    imprimirLista(L0);
    imprimirListaCompleta(L0);
    
	//*************************************************************
    
	printf("Com quantos elementos voce deseja criar a lista 1? [1..%d]\n", MAX_LISTA);
	scanf("%d", &numElem1);
	if (!initLista(&L1,numElem1) ) { 
    	printf("Nao foi possivel cria a lista com %d elementos\n", numElem1); 
    	exit(0);
    	}
    initLista(&L1,numElem1);
    imprimirLista(L1);
    imprimirListaCompleta(L1);
    
	//*************************************************************

    do { 
    	float n = rand() % 1000;
    	if (!inserirElem())
    		break;
    	i++;
    } while (i < numElem0);

    imprimirLista(L0);   

	//**************************************************************

    do { 
    	float n = rand() % 1000;
    	if (!inserirElem())
    		break;
    	i++;
    } while (i < numElem1);
    
    imprimirLista(L0);   

    limparLista();
    imprimirLista(L1);
    //imprimirListaCompleta(L1);
    
	//*************************************************************

    for (i = 0 ; i < tamLista(L0) ; i++)
    	if (removerElem())
    		printf("Remocao %d OK\n", i);
    	else
    		printf("Remocao %d nao OK\n", i);
    	
    imprimirLista(L0);
    imprimirListaCompleta(L0);
}
