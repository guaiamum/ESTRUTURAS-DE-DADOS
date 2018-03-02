/*
 *  InsertSort.cpp
 *  Metodos de Ordenação
 *
 *  Created by Antonio Lopes Apolinario Jr. on 1/17/11.
 *  Copyright 2011 Federal University of Bahia. All rights reserved.
 *
 */

void insertSort(int *v, int n) {

int i;
	
	for (i = 1 ; i < n ; i++) {
		
		int k = v[i];
		int j = i - 1;
		
		while ( (j >= 0) && (k < v[j]) ) {
			v[j+1] = v[j];
			j--;
			}
		v[j+1] = k;			
		}
}

