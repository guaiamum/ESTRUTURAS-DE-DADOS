#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "pilha.h"

// ***********************************************
// ***********************************************
// ***********************************************

int main() {

Pilha 	p;
bool 	OK;

    if (!initPilha(&p, 10)) {
    	printf("ERRO ao iniciar a lista\n");
    	exit(-1);
    	}

    char c = 65;

    while ( !pilhaECheia(p) ) {
    	empilha(&p, c);
    	printf("Empilha %c\n", c);
    	c++;
    	}

    while ( !pilhaEVazia(p) )
    	printf("Desempilha %c\n", desempilha(&p));

}
