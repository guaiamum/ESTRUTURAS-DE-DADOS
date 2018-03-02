#include<stdio.h>
#define TAM 1000
int main()
{
	int t, i, aux;
	int n[TAM];
	
	scanf("%d", &t);
	
	aux=0;
	
	for (i=0;i<TAM;i=i+1)
	{	
		n[i] = aux;
		
		if (aux<(t-1))
			aux=aux+1;
		else
			aux = 0;
	}
	
	for (i=0;i<TAM;i=i+1)
		printf("N[%d] = %d\n", i, n[i]);
}