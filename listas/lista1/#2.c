#include<stdio.h>
int main()
{
	int v[4];
	int i, prod, sum, maior, menor;
	float med;
	

	//lendo 
	scanf("%d %d %d", &v[1], &v[2], &v[3]);
	//sumando
	sum=v[1]+v[2]+v[3];
	//produtando
	prod = v[1]*v[2]*v[3];
	//mediando
	med = (float)sum/3.0f;
	//ordenando
	maior=v[1]; menor=v[1];
	for (i=1; i<=3; i++)
	{
		if (v[i]>maior)
		{	maior=v[i];
		}
		if (v[i]<menor)
		{	menor=v[i];
		}
	}
			
	//imprimindo
	printf(" A soma eh: %d \n O produto eh: %d \n A media eh: %f \n O maior e menor numeros sao, respect: %d, %d", sum, prod, med, maior, menor);
	return 0;
}