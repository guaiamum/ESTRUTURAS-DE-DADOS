#ifndef __PILHA_H__
#define __PILHA_H__ 1


typedef struct { 	char* pilha; //vetor dinamico de char
					int maxElems;
					int topo; //posicao no vetor dinam do ultmo elem
                } Pilha;

bool initPilha(Pilha* p, int n);

bool pilhaEVazia(Pilha p); // verifica se ela esta vazia

bool pilhaECheia(Pilha p); // verifica se ela esta cheia

void empilha(Pilha* p, char c); //coloca item no topo

char desempilha(Pilha* p) ; //tira primeiro item do topo

#endif //__PILHA_H__
