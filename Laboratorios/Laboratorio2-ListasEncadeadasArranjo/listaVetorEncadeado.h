#ifndef __ListaVetorDinamico__
#define __ListaVetorDinamico__ 1

#include <stdbool.h>

#define SENTINELA	-1

typedef struct {	float 	dado;
 					int 	prox;
 				} tNo;

typedef struct { 	tNo *V;			// vetor que armazena os elementos da lista
					int inicio;
					int numElems;	// numero de elementos na lista em um determinado momento
					int tamMax;		// tamanho maximo da lista. <= MAX_LISTA
                } tListaVet;
                
/**
 Funcao responsavel por inicalizar a lista.
 Parametros: Lista e tamanho.
 Retorno: true caso o vetor comporte o numero de elementos solicitados
 e false caso contrario.
*/
bool initLista(tListaVet *l, int num);

/**
 Funcao responsavel por remover todos os elementos da lista de forma logica.
 Parametros: Lista.
 Retorno: nenhum.
*/
void limparLista(tListaVet *l);

/**
 Função responsável por inserir um novo elemento na lista. 
 Parametros: uma Lista e o elemento a ser inserido.
 Retorno: true se o valor foi inserido com sucesso e false caso contrario.
*/
bool inserirElem(tListaVet *l, float k);

/**
 Função responsável por remover um elemento da lista. 
 Parametros: uma Lista e o elemento a ser removido.
 Retorno: true caso o valor seja removido com sucesso e false caso contrario.
*/
bool removerElem(tListaVet *l, float k);

/**
 Função responsável por buscar um elemento na lista identificando sua posicao.
 Parametros: uma Lista, o elemento a ser buscado e a posicao em que foi encontrado. 
 Retorno: true se o elemento foi encontrado e false caso contrario (nesse caso a
 posicao deve retornar um indice invalido). 
*/
int buscarElemPos(tListaVet l, float k, int* pos);

/**
 Função responsável por buscar um elemento na lista.
 Parametros: uma Lista, o elemento a ser buscado. 
 Retorno: true se o elemento foi encontrado e false caso contrario. 
*/
bool buscarElem(tListaVet l, float k);

/**
 Função responsável por imprimir no console os elementos da lista. 
 Parametros: uma Lista.
 Retorno: nenhum
*/
void imprimirLista(tListaVet l);

/**
 Função responsável por imprimir no console todos os elementos do vetor
 que implementa a lista. 
 Parametros: uma Lista.
 Retorno: nenhum
*/
void imprimirListaCompleta(tListaVet l);

/**
 Função responsável informar o numero de elementos na lista. 
 Parametros: uma Lista.
 Retorno: numero de elementos contidos na lista.
*/
int tamLista(tListaVet l);

#endif // __ListaVetorDinamico__