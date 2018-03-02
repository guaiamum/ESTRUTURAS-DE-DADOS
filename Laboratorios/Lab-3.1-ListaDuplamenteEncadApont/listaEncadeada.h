#ifndef __LISTA_ENCADEADA__
#define __LISTA_ENCADEADA__ 1

#include <stdbool.h>

typedef struct No	{	float 		dado;
 						struct No 	*prox, *prev;
 					} tNo;

typedef struct { 	tNo* inicio;	// endereco do primeiro elemento da lista
          tNo* fim; //endereco do ultimo
					int numElems;	// numero de elementos na lista em um determinado momento
					} tListaEncadeada;

/**
 Funcao responsavel por inicalizar a lista.
*/
bool initLista(tListaEncadeada *l);



/**
 Funcao responsavel por remover todos os elementos da lista de forma logica.
 Parametros: Lista.
 Retorno: nenhum.
*/
void limparLista(tListaEncadeada *l);



/**
 Função responsável por inserir um novo elemento na lista.
 Parametros: uma Lista e o elemento a ser inserido.
 Retorno: true se o valor foi inserido com sucesso e false caso contrario.
*/
bool inserirElem(tListaEncadeada *l, float k);



/**
 Função responsável por remover um elemento da lista.
 Parametros: uma Lista e o elemento a ser removido.
 Retorno: true caso o valor seja removido com sucesso e false caso contrario.
*/
bool removerElem(tListaEncadeada *l, float k);



/**
 Função responsável por buscar um elemento na lista identificando sua posicao.
 Parametros: uma Lista, o elemento a ser buscado.
 Retorno: endereco do no se o valor for encontrado e NULL caso contrario.
*/
tNo* buscarElemPos(tListaEncadeada l, float k);



/**
 Função responsável por buscar um elemento na lista.
 Parametros: uma Lista, o elemento a ser buscado.
 Retorno: true se o elemento foi encontrado e false caso contrario.
*/
bool buscarElem(tListaEncadeada l, float k);



/**
 Função responsável por imprimir no console os elementos da lista.
 Parametros: uma Lista.
 Retorno: nenhum
*/
void imprimirLista(tListaEncadeada l);



/**
 Função responsável informar o numero de elementos na lista.
 Parametros: uma Lista.
 Retorno: numero de elementos contidos na lista.
*/
int tamLista(tListaEncadeada l);

#endif // __LISTA_ENCADEADA__
