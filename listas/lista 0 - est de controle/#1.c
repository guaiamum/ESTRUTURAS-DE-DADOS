#include<stdio.h>
int main() 
{
		char v[6];
		int i;
		
		//leitura
		for (i=1;i<=5;i++) 
		{
		scanf("%c", &v[i]);
		}
		
		//impressao
		for (i=1;i<=5;i++) 
		{
			printf("%c %c",v[i],32);
		}
		
		return 0;
}