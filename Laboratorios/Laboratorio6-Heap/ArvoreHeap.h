#ifndef __ARVORE_HEAP__
#define __ARVORE_HEAP__ 1


typedef struct 	{ 	int* heap;
               		int numElem;
               		int maxElem;
               	} tHeap;


// ***********************************************
bool createHeap(tHeap* h, int n );

// ***********************************************
void clearHeap(tHeap* h );

// ***********************************************
bool insertHeap(tHeap* h, int n);

// ***********************************************
bool removeHeap(tHeap* h, int* k);

// ***********************************************
//recebe heap e indice
void upHeap(tHeap* h, int i);

// ***********************************************
void downHeap(tHeap* h, int i);

// ***********************************************
void printando(tHeap* h);

// ***********************************************
bool createHeapFromVector(int* v);

#endif // __ARVORE_HEAP__
