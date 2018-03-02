#include<stdio.h>
int fibb(int a)
{
	int i, p, s, fib;
	
	i=3; p=1; s=1;
	while (i <= a)
	{
	fib = (p + s);
	p = s;
	s = fib;
	i++;
	}
	return fib;
}

int main()
{
	int n;
	
	scanf("%d", &n);
	
	switch (n)
	{
		case 1: printf("1");
			break;
		case 2: printf("1");
			break;
	}
	
	if (n>2)
	{
	printf("%d", fibb(n));
	}
}
