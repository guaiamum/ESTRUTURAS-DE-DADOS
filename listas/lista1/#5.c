#include<stdio.h>
#include <stdlib.h>
#include<time.h>
int main()
{
	struct pontoss { 
		int x;
		int y;
		int z;
		int color;
		}
	struct pontoss p;
	int n, i;
	
	scanf("%d", &n);
	
	srand(time(NULL));
	for (i=0; i<n; i= i + 1)
		p.x = rand() %100;
		p.y = rand() %100;
		p.z = rand() %100;
		
	
	return 0;
}