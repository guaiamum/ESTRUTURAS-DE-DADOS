#include<stdio.h>
int randomm(int c)
{
	int i=0;
	
	while (i<1000000)
	{
		if ((rand() % 100) == c)
			break;
		i++;
	}
	return i;
}
int main()
{
	int b,j;
	
	//leitura
	scanf("%d", &b);
	//achando
	j = randomm(b);
	//impressao
	if (j<1000000)
		printf("%d", j);
	else
		printf("NAO ACHEI ESSA BAGAÇA");
	return 0;
}