#include<stdio.h>
#include <stdlib.h>
#include<time.h>
typedef struct color { 
float R;
float G;
float B;
} tcolor;
int main()
{
	struct pontoss { 
		int x;
		int y;
		int z;
		tcolor c[200];
	};

	struct pontoss p[200];
	
	int n, i;
	int sum=0;
	
	//leitura
	scanf("%d", &n);
	
	//geração da 'n'uvem
	srand(time(NULL));
	for (i=0; i<n; i= i + 1)
	{
		p[i].x = rand() %100;
		p[i].y = rand() %100;
		p[i].z = rand() %100;
		//R é x
			p[i].c[i].R = (p[i].x)*2.55;
		//G é y
			p[i].c[i].G = (p[i].y)*2.55;
		//B é z
			p[i].c[i].B = (p[i].z)*2.55;

	}
	/* Calculos*/
	
	//Centro de massa:
	for (i=0; i<n; i= i + 1)
	{
		sum = sum + 
	
	//impressao
	for (i=0; i<n; i= i + 1)
		printf("x:%d y:%d z:%d\n R:%f G:%f B:%f\n", p[i].x, p[i].y, p[i].z, p[i].c[i].R, p[i].c[i].G, p[i].c[i].B);
	
	return 0;
}