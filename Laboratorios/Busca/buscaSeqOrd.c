/*
 *  buscaSequencial.cpp
 *  Metodos de Busca
 *
 *  Created by Antonio Lopes Apolinario Jr. on 1/19/11.
 *  Copyright 2011 Federal University of Bahia. All rights reserved.
 *
 */

#include "buscaSeqOrd.h"

/// ***********************************************************************
/// ** 
/// ***********************************************************************

int buscaSeqOrd(int *v, int n, int k) {
	
int i=0;
	
	while ( (i < n) && (v[i] < k) )
		i++;
	
	if ( (i < n) && (v[i] == k) ) 
			return i;
		
	return -1;
}

