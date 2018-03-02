#include<stdio.h>
int main() {
	float a,b,c,ab,ac,bc;
	
	scanf("%f %f %f", &a, &b, &c);
	
	//diferencas
	ab = a - b; ac = a - c; bc = b-c;
	//modulo ou abs()
	if (ab<0)
		ab = ab * -1;
	if (ac<0)
		ac = ac * -1;
	if (bc<0)
		bc = bc * -1;
	
	//checando condicoes
	if (a<b+c && b<a+c && c<a+b){
		if (a>bc && b>ac && c>ab)
			printf("Perimetro = %.1f\n", a+b+c);
	}
	else
		printf("Area = %.1f\n", ((a+b)*c)/2);
	
	return 0;
}