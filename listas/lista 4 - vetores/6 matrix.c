#include<stdio.h>
#define doze 4


int main()
{
	float m; float sum=0;
	int i,j,aux;
	char op;
	
	scanf("%c", &op);
	aux = 0;
	for (i=0;i<doze;i=i+1)
	{
		
			for (j=0;j<doze;j=j+1)
			{
				if (((j+i)>=doze) && (j>i))
				{	
					scanf("%f", &m);
					sum = sum + m;
					aux = aux + 1;
				}
				else
					scanf("%f", &m);
			}	
	}
	
	if (op == 'S')
		printf("%.1f\n", sum);
	else if (op == 'M')
		printf("%.1f\n", sum/aux);
}