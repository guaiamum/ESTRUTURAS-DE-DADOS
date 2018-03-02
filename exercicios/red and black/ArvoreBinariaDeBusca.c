#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#include "ArvoreBinariaDeBusca.h"

// ***********************************************
// ******                                   ******
// ***********************************************

void clearTree( TreeNode** r) {

	if (*r != NULL){
		clearTree(&(*r)->left);
		clearTree(&(*r)->right);

		free(*r);
		return;
	}
	return;

}

// ***********************************************
// ******                                   ******
// ***********************************************

TreeNode* createNode(int num,TreeNode* pai) {
	TreeNode* NovoNo;

	NovoNo = (TreeNode*) malloc(sizeof(TreeNode));

	if(NovoNo == NULL)
		printf("erro na criacao (KKK)\n" );

	NovoNo->data = num;
	NovoNo->left = NULL;
	NovoNo->right = NULL;
	NovoNo->pai = pai;

	return NovoNo;
}

// ***********************************************
// ******                                   ******
// ***********************************************

void insertNode(TreeNode** r, int n, TreeNode* pai) {

	if (*r == NULL){ // se estiver vazia
		*r = createNode(n,&(*pai));
		return;
	}

		else if(n > (*r)->data)//se for maior , vai pra direita
			return insertNode(&(*r)->right, n, &(*pai));

			else if(n < (*r)->data)//se for menor...
				return insertNode(&(*r)->left,n, &(*pai));


}

// ***********************************************
// ******                                   ******
// ***********************************************

TreeNode* findNode(TreeNode* r, int n){
	if (r == NULL){
		printf("nao achei o %d\n", n);
		return NULL;
	}

	if (n == r->data){
		printf("achei o %d\n", r->data);
		return r;
	}

	if (n > r->data)
		return findNode(r->right, n);
	else
		return findNode(r->left, n);
}

// ***********************************************
// ******                                   ******
// ***********************************************

void preOrderVisit( TreeNode* r) {
	if (r == NULL)
		return;

	printf("%d\n",r->data);
	preOrderVisit(r->left);
	preOrderVisit(r->right);
}

// ***********************************************
// ******                                   ******
// ***********************************************

void inOrderVisit( TreeNode* r) {
	if (r == NULL)
		return;

	inOrderVisit(r->left);
	printf("%d\n",r->data);
	inOrderVisit(r->right);

}

// ***********************************************
// ******                                   ******
// ***********************************************

void posOrderVisit( TreeNode* r) {
	if (r == NULL)
		return;

	posOrderVisit(r->left);
	posOrderVisit(r->right);
	printf("%d\n",r->data);
}

// ***********************************************
// ******                                   ******
// ***********************************************

bool removeNode(TreeNode** r, int n) { //fazer interativo
	TreeNode* aux = findNode(*r,n);

	if (aux == NULL) //se for nulo, não esta na arv, se nao for, é quem quero remover
		return false;

	if (aux->left == NULL){
		if (aux->right == NULL){ //se for folha
			if (aux->data > (aux->pai)->data)
				aux->pai->right = NULL;
			else
				aux->pai->left = NULL;

			free(aux);
			return true;
		}
	}

	return false;
}
