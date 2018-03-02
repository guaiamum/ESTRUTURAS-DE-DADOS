#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "listaVetor.h"

#define tam 10
// ***********************************************
// ****  Função principal
// ***********************************************

int main(int argc, char** argv) {

Lista L0;
int i, numElem0;

int opcao;
float valor;

	do {		
		do {
			printf("------- Gerenciador de Lista Simples -------\n");
			printf("Menu: \n");
			printf("1 - INICIALIZAR\n");
			printf("2 - INSERIR\n");
			printf("3 - REMOVER\n");
			printf("4 - BUSCAR\n");
			printf("5 - LISTAR\n");
			printf("6 - LISTAR TODOS\n");
			printf("7 - SAIR\n");
			printf("OPÇÃO - ");			
			scanf("%d", &opcao);			
			system("clear");
		} while(opcao < 1 && opcao > 6);

		switch(opcao){
			case 1:
				//initLista(*L0,tam);//Inicializar a lista
				break;
			case 2:
				printf("DIGITE O VALOR: ");
				scanf("%f", &valor);
				//Inserir valor na lista
				break;
			case 3:
				printf("DIGITE O VALOR: ");
				scanf("%f", &valor);
				//Remover valor da lista
				break;
			case 4:
				printf("DIGITE O VALOR: ");
				scanf("%f", &valor);
				//Buscar valor da lista
				break;
			case 5:
				printf("LISTA DE VALORES INSERIDOS NO VETOR\n");
				//Listar elementos inseridos no vetor
				break;
			case 6:
				printf("LISTA DE TODOS OS VALORES DO VETOR\n");
				//Listar todos os elementos no vetor
				break;
		}

	} while(opcao != 7);
}
