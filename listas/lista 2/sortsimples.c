#include<stdio.h>
int main () {
	int v[3], vn[3], i, j, AUX;
	scanf("%d %d %d", &v[0], &v[1], &v[2]);
	
	for (i=0;i<3;i++)
		vn[i] = v[i];
	
	/*if (v[0]>v[1])
		aux
	if (v[0]>v[2])*/
		
	for (i=0;i<2;i++)
		for (j=i+1;j<3;j++){
			if (v[i]>v[j 	]){
				printf("trocou %d por %d(i=%d)\n",v[i],v[j],i);
				AUX = v[j];
				v[j] = v[i];
				v[i] = AUX;
			}
		}
	
	for (i=0;i<3;i++)
		printf("%d\n", v[i]);
	
	printf("\n");
	
	for (i=0;i<3;i++)
		printf("%d\n", vn[i]);	
	
	return 0;
}