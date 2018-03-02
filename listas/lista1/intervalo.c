#include<stdio.h>
int main()
{
	float c;
	
	scanf("%f", &c);
	
	if ((c>=0) && (c<=25))
		printf("Intervalo [0,25]");
	else 
		printf("Fora de intervalo");
		
	return 0;
}