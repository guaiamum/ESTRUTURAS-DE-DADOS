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
	if (!initLista(*L0,numElem0) ) { 
    	printf("Nao foi possivel cria a lista com %d elementos\n", numElem0); 
    	exit(0);
    	}
    imprimirLista();
    imprimirListaCompleta();
    
    
	printf("Com quantos elementos voce deseja criar a lista 0? [1..%d]\n", MAX_LISTA);
	scanf("%d", &numElem1);
	if (!initLista() ) { 
    	printf("Nao foi possivel cria a lista com %d elementos\n", numElem1); 
    	exit(0);
    	}
    initLista();
    imprimirLista();
    imprimirListaCompleta();
    
    do { 
    	float n = rand() % 1000;
    	if (!inserirElem())
    		break;
    	i++;
    } while (i < numElem0);

    imprimirLista();   

    do { 
    	float n = rand() % 1000;
    	if (!inserirElem())
    		break;
    	i++;
    } while (i < numElem1);
    
    imprimirLista();   

    limparLista();
    imprimirLista();
    imprimirListaCompleta();
    
    for (i = 0 ; i < tamLista() ; i++)
    	if (removerElem())
    		printf("Remocao %d OK\n", i);
    	else
    		printf("Remocao %d nao OK\n", i);
    	
    imprimirLista();
    imprimirListaCompleta();
}
