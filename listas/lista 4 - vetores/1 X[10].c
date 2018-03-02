#include<stdio.h>

int main()
{
	int vetor[10];
	int i;
	
	for (i=0;i<=9;i=i+1)
		scanf("%d", &vetor[i]);
	
	for (i=0;i<=9;i=i+1)
	{
		if (vetor[i]<=0)
			vetor[i]=1;
		
		printf("X[%d] = %d\n", i, vetor[i]);
	}
	
	return 0;
}