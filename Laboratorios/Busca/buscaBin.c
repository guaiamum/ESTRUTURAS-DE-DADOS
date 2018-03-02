/*
 *  buscaBinaria.cpp
 *  Metodos de Busca
 *
 *  Created by Antonio Lopes Apolinario Jr. on 1/19/11.
 *  Copyright 2011 Federal University of Bahia. All rights reserved.
 *
 */

/// ***********************************************************************
/// ** 
/// ***********************************************************************

int buscaBin(int *v, int n, int k) {
	int inicio, fim, meio;
	
	fim = (n-1);
	inicio = 0;
	meio = n/2; 
	while (inicio < fim){
		if (k == v[meio])
			return 1;
		
		if (k > v[meio]){
			inicio = meio; meio = (fim - inicio)/2;
		}
		if (k <  v[meio]){
			fim = meio; meio = fim/2;
		}
		
	}
	return -1;
	
}
