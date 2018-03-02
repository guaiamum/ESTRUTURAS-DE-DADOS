#include<stdio.h>

int main()
{
	int valor,i;
	int vetor[10];
	
	scanf("%d", &valor);
	
	vetor[0] = valor;
	for (i=1;i<10;i=i+1)
		vetor[i] = vetor[i-1]*2;
	
	for (i=0;i<10;i=i+1)
	printf("N[%d] = %d\n", i, vetor[i]);
	
	return 0;
}