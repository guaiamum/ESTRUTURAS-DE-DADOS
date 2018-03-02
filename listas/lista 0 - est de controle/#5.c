#include<stdio.h>

int main()
{
	char ch;
	int i,j,k;
	
	scanf("%c", &ch);
	
	printf("%c", ch);
	if (ch == 'A')
		for (i=0;i=6;i++)
		{	
			k = 6-i;
			for (j=0;j=k;j++)
				printf("*");
		}
}