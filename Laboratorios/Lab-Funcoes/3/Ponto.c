/* Modulo Ponto */ 

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include "Ponto.h"

/// ***********************************************************************
/// ** 
/// ***********************************************************************
void criaPonto(tPonto *p, int i) {
	
	p->ID = i;
		
	p->x = ( rand() * 10 );
	p->y = ( rand() * 20 );
	p->z = ( rand() * 30 );

	p->c.r = ( rand() % 256 );
	p->c.g = ( rand() % 256 );
	p->c.b = ( rand() % 256 );
}

/// ***********************************************************************
/// ** 
/// ***********************************************************************
void imprimePonto(tPonto P) {

	printf("P[%d] = (%3.2f,\t%3.2f,\t%3.2f) - (%d, \t%d, \t%d)\n", 
			P.ID, P.x, P.y, P.z, P.c.r, P.c.g, P.c.b);
}

/// ***********************************************************************
/// ** 
/// ***********************************************************************
void imprimePontos(tPonto P[], int n) {

int i = 0;
	
	while (i < n) {
		imprimePonto(P[i]);
		i++;
		}
}

/// ***********************************************************************
/// ** 
/// ***********************************************************************
void pontoMedio(tPonto P[]) {
	int i = 0;
	int sumx, sumy=0, sumz = 0; 
	//posso declarar essas variaveis no .h?
	//se eu quisesse gravar as somas no main, como faria?
	
	while (i<10)
	{
		sumx = sumx + P[i].x;
		sumy = sumy + P[i].y;
		sumz = sumz + P[i].z;
		i++;
	}
	
	printf("\nP[medio] = (%d, %d, %d)\n", sumx/10, sumy/10, sumz/10);
}

/// ***********************************************************************
/// ** 
/// ***********************************************************************
void maiorMenorPonto(tPonto P[]) {
	int i = 1;
	struct min {
		int x;
		int y;
		int z;
	};
	struct min n;
	struct max{
		int x;
		int y;
		int z;
	};
	struct max x;
	
	n.x = P[0].x;
	n.y = P[0].y;
	n.z = P[0].z;
	x.x = P[0].x;
	x.y = P[0].y;
	x.z = P[0].z;
	
	while (i<10)
	{
		//x
		if (n.x>P[i].x)
			n.x = P[i].x;
		if (x.x<P[i].x)
			x.x = P[i].x;
		//y
		if (n.y>P[i].y)
			n.y = P[i].y;
		if (x.y<P[i].y)
			x.y = P[i].y;
		//z
		if (n.z>P[i].z)
			n.z = P[i].z;
		if (x.z<P[i].z)
			x.z = P[i].z;
		i++;
	}
	
	printf("\nP[min] = (%d, %d, %d)\n", n.x, n.y, n.z);
	printf("P[max] = (%d, %d, %d)\n", x.x, x.y, x.z);
}

