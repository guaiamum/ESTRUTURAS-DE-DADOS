void createHeapFromVector(int* vetor, int tamanho){
  int i=0;

  while(i<tamanho){
    insertHeap(vetor[i]);
    i++;
  }
  return;
}

int* heapSort(tHeap* h){
  int v[h->numElem];
  int j,i=0;

  while(i < h->numElem){ //passo os elementos de heap para o vetor
    v[i] = h->heap[i];
    i++;
  }

  for (i=1;i < h->numElem;i++){ //ordeno :)
    for(j=i;j < h->numElem;j++){
      if (v[j] > v[i]){
        int aux;

        aux = v[i];
        v[i] = v[j];
        v[j] = aux;
      }
    }
  }

  return v;
}
