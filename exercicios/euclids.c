#include<stdio.h>
int main()
{
	int a, b, c;
	
	scanf("%d %d", &a, &b);
	
	printf("O MDC entre %d e %d eh: %d\n", a, b, eucrides(a,b));
	
	return 0;
}

int eucrides(int a, int b)
{
	if (b == 0)
		return a;
	else 	
		return eucrides(b, a % b);
}
