#ifndef FILA_H
#define FILA_H 1

typedef struct tNode {  int dado;
                        struct tNode* prox;
                      } No;

typedef struct { No* inicio;
                 No* fim;
               } Fila;

No* sentinela;

bool initFila( Fila* f);

void limpaFila(Fila* f);

bool filaVazia(Fila f);

#endif
