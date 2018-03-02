/* Modulo Ponto */ 

typedef struct cor		{ 	int r; 	
							int g; 
							int b;
						} tCor;

typedef struct ponto 	{	int ID;
							float x;
							float y; 
							float z;
							tCor	c;
						} tPonto;
				

void criaPonto(tPonto Q, int i);

void imprimePonto(tPonto P);

void imprimePontos(tPonto P[], int n);

void pontoMedio(tPonto, int p);

void maiorMenorPonto(tPonto, int p);
