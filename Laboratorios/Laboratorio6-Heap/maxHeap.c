#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#include "ArvoreHeap.h"

/// ***********************************************
/// ***********************************************
/// ***                                         ***
/// ***********************************************
/// ***********************************************

int main() {

#define MAX 20

tHeap	heapTree;
int		n, i;

    srand ( time(NULL) );

	if (!createHeap(&heapTree, MAX)) {
		printf("ERROR : create Heap %d\n", MAX);
		exit(0);
		}

    for ( i = 0 ; i < MAX/2 ; i++ ) {

    	n = rand() % 100;
    	printf("tentando inserir [%d] ", n);

    	if (!insertHeap(&heapTree, n)) {
    		printf("ERROR : insert Heap %d\n", n);
    		break;
    		}
      else
        printf("insercao OK\n\n" );
    	}
    printf("\n\n");

    printando(&heapTree);

    i=0;
    while (i < 2){
      removeHeap(&heapTree, &n);
    	printf("[%d] removido\n", n);
      i++;
    }

    printf("\n\n");

    printando(&heapTree);

    return 0;
}
