#ifndef __ListaSimples__
#define __ListaSimples__ 1

#include <stdbool.h>

#define MAX_LISTA 50

typedef struct { 	float V[MAX_LISTA];
					int numElems;
					int tamMax;
                } Lista;

/**
 Funcao responsavel por inicalizar a lista.
 Parametros: Lista e tamanho.
 Retorno: true caso o vetor comporte o numero de elementos solicitados
 e false caso contrario.
*/
bool initLista(Lista *L,int N);

/**
 Funcao responsavel por remover todos os elementos da lista de forma logica.
 Parametros: Lista.
 Retorno: nenhum.
*/
void limparLista();

/**
 Função responsável por inserir um novo elemento na lista. 
 Parametros: uma Lista e o elemento a ser inserido.
 Retorno: true se o valor foi inserido com sucesso e false caso contrario.
*/
bool inserirElem();

/**
 Função responsável por remover um elemento da lista. 
 Parametros: uma Lista e o elemento a ser removido.
 Retorno: true caso o valor seja removido com sucesso e false caso contrario.
*/
bool removerElem();

/**
 Função responsável por buscar um elemento na lista.
 Parametros: uma Lista, o elemento a ser buscado e a posicao em que foi encontrado. 
 Retorno: true se o elemento foi encontrado e false caso contrario (nesse caso a
 posicao deve retornar um indice invalido). 
*/
bool buscarElem();

/**
 Função responsável por imprimir no console os elementos da lista. 
 Parametros: uma Lista.
 Retorno: nenhum
*/
void imprimirLista(Lista L);

/**
 Função responsável por imprimir no console todos os elementos do vetor
 que implementa a lista. 
 Parametros: uma Lista.
 Retorno: nenhum
*/
void imprimirListaCompleta(Lista);

/**
 Função responsável informar o numero de elementos na lista. 
 Parametros: uma Lista.
 Retorno: numero de elementos contidos na lista.
*/
int tamLista(Lista L);

#endif // __ListaSimples__
