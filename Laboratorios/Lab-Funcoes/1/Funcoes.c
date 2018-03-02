/* Funcoes */ 

#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
/// ***********************************************************************

typedef struct cor		{ 	int r; 	
							int g; 
							int b;
						} tCor;

typedef struct ponto 	{	int 	ID;
							float 	x;
							float 	y; 
							float 	z;
							tCor	c;
						} tPonto;				

/// ***********************************************************************
void criaPonto(tPonto p, int i);
void imprimePonto(tPonto P);
void imprimePontos(tPonto P[], int n);

/// ***********************************************************************
/// ***********************************************************************
/// ** 
/// ***********************************************************************
/// ***********************************************************************
int main() {

tPonto P[10];
tPonto Q;
	
	srand( time(NULL) );
	
	printf("Funcoes E Passagem de Parametros!!\n");

	criaPonto(Q, 0);
	imprimePonto(Q);
	
	int i;
	
	for (i = 0 ; i < 10 ; i++) 
		criaPonto(P[i], i);
	
	imprimePontos(P, 10);
		
	return 0;
}

/// ***********************************************************************
/// ** 
/// ***********************************************************************
void criaPonto(tPonto p, int i) {
	
	p.ID = i;
		
	p.x = ( rand() * 10 );
	p.y = ( rand() * 20 );
	p.z = ( rand() * 30 );

	p.c.r = ( rand() % 256 );
	p.c.g = ( rand() % 256 );
	p.c.b = ( rand() % 256 );
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
