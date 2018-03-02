#include<stdio.h>
int main()
{
	float c;
	
	scanf("%f", &c);
	
	if ((c>=0) && (c<=25))
		printf("Intervalo [0,25]\n");
	else if ((c>25) && (c<=50))
		printf("Intervalo (25,50]\n");
	else if ((c>50) && (c<=75))
		printf("Intervalo (50,75]\n");
	else if ((c>75) && (c<=100))
		printf("Intervalo (75,100]\n");
	else 
		printf("Fora de intervalo\n");
		
	return 0;
}