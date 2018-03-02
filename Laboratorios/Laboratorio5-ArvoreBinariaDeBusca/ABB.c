#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#include "ArvoreBinariaDeBusca.h"

#define MAX 5

// ***********************************************
// ***********************************************
// ***********************************************

int main() {

  TreeNode* root = NULL;
  TreeNode* aux;
  bool OK	= true;
  int i	= 0, n;

  srand ( time(NULL) );

  for ( i = 0 ; i < MAX ; i++ ){
    int a = rand() % 10;
    insertNode(&root, a);
    printf("inseriu %d\n", a );

  }

  printf("\n====== BUSCAR NÓ ======\n");

//******************************************
//
  aux = root;
  for ( i = 0 ; i < 5 ; i++ ){
    if (aux != NULL){
      findNode(aux, aux->data);
      aux = aux->right;
    }

  }

  findNode(root, rand() % 10);

//
//******************************************
  printf("************** PRE **************\n");
  preOrderVisit(root);

  printf("************** IN **************\n");
  inOrderVisit(root);

  printf("************** POS **************\n");
  posOrderVisit(root);

  for ( i = 0 ; i < MAX*2 ; i++ ) {
  	n = rand() % 10;
  	printf("\nRemovendo %d ... ", n);
  	if (removeNode(&root, n)) {
  		printf("OK\n");
  	} else {
  		printf("NOT FOUND\n");
  	}
  }

  printf("************** PRE **************\n");
  preOrderVisit(root);

  printf("************** IN **************\n");
  inOrderVisit(root);

  printf("************** POS **************\n");
  posOrderVisit(root);

  printf("************** LIMPAR ARVORE **************\n");
  clearTree(&root);

  printf("************** ARVORE LIMPA: **************\n");
  inOrderVisit(root);

}
