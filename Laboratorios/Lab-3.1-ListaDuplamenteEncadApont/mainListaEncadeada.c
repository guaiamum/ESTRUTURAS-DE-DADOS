#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "listaEncadeada.h"

// ***********************************************
// ***********************************************
// ***********************************************

int main(int argc, char** argv) {

tListaEncadeada L0, L1;
int i;

	if (!initLista(&L0)) {
		printf("Nao foi possivel inicializar a Lista L0\n");
		exit(-1);
		}
		printf("                 LISTA L0(vazia)          \n" );
    imprimirLista(L0);

// ***********************************************

	if (!initLista(&L1)) {
		printf("Nao foi possivel inicializar a Lista L0\n");
		exit(-1);
		}
			printf("               LISTA L1          \n" );
    imprimirLista(L1);

// ***********************************************

    i = 0;
    do {
    	float n = rand() % 1000;
    	if (!inserirElem(&L0, n))
    		break;
    	i++;
    } while (i < 10);
		printf("               LISTA L0\n" );
    imprimirLista(L0);

		/*printf("primeiro item de L0 eh %.2f\n",L0.inicio->dado );
		if(buscarElemPos(L0,807))
			printf("achei\n" );*/
// ***********************************************

    i = 0;
    do {
    	float n = rand() % 1000;
    	if (!inserirElem(&L1, n))
    		break;
    	i++;
    } while (i < 10);
		printf("               LISTA L1          \n" );
    imprimirLista(L1);

// ***********************************************

    limparLista(&L1);
		printf("               LISTA L1(limpa)          \n" );
    imprimirLista(L1);

// ***********************************************

    //for (i = 0 ; i < tamLista(L0) ; i++) {
    	float nu = L0.inicio->dado;//rand() % 1000;
    	if (removerElem(&L0, nu))
    		printf("Remocao %.2f OK :)\n", nu);
    	else
    		printf("Remocao %.2f nao OK :(\n", nu);
    //	}

    imprimirLista(L0);
}
