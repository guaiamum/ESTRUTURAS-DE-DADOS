/*
 *  buscaSequencial.cpp
 *  Metodos de Busca
 *
 *  Created by Antonio Lopes Apolinario Jr. on 1/19/11.
 *  Copyright 2011 Federal University of Bahia. All rights reserved.
 *
 */

/// ***********************************************************************
/// ** 
/// ***********************************************************************

int buscaSeq(int *v, int n, int k) {
	int i;
	
	for (i = 0 ; i < n ; i++) {
		if (v[i] == k)
			return i;
		}
	return -1;
}

