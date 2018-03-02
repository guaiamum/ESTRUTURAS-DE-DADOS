#include<stdio.h>
#define TAMN 20
int main()
{
	int vetor[TAMN];
	int i, aux;
	
	for (i=0;i<TAMN;i=i+1)
		scanf("%d", &vetor[i]);
	
	for (i=0;i<TAMN;i=i+1)
	{
		if (i<(TAMN/2)) {
		aux = vetor[i];
		vetor[i] = vetor[TAMN-(i+1)];
		vetor[TAMN-(i+1)] = aux;
		}
		printf("N[%d] = %d\n", i, vetor[i]);
	}
	
	return 0;
}