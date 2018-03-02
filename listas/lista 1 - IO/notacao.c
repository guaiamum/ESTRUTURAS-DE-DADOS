#include<stdio.h>

int main () {
	char s, se; //sinal, sinal expoente
	double a, m; //numero, mantissa
	int exp=0; //expoente
	
	scanf("%lf", &a);
	
	if (a<0){
		s = '-';
		a = a * -1;
	}
	else{
		s = '+';
	}
	
	se = '+';
	while (a<1 || a>10){ //
		if (a>10){
			se = '+';
			a = a / 10;
			exp = exp + 1;
		}
		if (a<1){
			a = a * 10;
			se = '-';
			exp = exp + 1;
		}
	}
	if (exp<10)
		printf("%c%.4fE%c0%d\n", s, a, se, exp);
	else
		printf("%c%.4fE%c%d\n", s, a, se, exp);

	return 0;
}