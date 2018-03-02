#include<stdio.h>

int main (){
	float valor;
	int q, cod;
	
	scanf("%d %d", &cod, &q);
	
	switch (cod){
		case 1:
			valor = 4;
			break;
		case 2:
			valor = 4.5;
			break;
		case 3:
			valor = 5;
			break;
		case 4:
			valor = 2;
			break;
		case 5:
			valor = 1.5;
			break;
	}
	
	printf("Total: R$ %.2f\n",valor * q);
	
	return 0;
}