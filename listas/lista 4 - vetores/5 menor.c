#include<stdio.h>

int main()
{
	int i, n, menor, pos;
	int vetor[1000];
	
	scanf("%d", &n);
	
	for (i=0;i<n;i=i+1)
	{
		scanf("%d", &vetor[i]);
	}
	
	menor = vetor[0]; pos = 0;
	for (i=1;i<n;i=i+1)
	{
		if (vetor[i]<menor)
		{
			menor = vetor[i]; pos = i;
		}
	}
	
	printf("Menor valor: %d\n", menor);
	printf("Posicao: %d\n", pos);
	
}