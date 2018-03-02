#include<stdio.h>
int main() {
	int a,v[3],i=0;	
	scanf("%d", &a);
	
	//separar digitos
	if (a<10){
		v[0]=0;v[1]=0;v[2]=a;
		
	}
	else if (a<100){
		v[0]=0;
		v[1]=a/10;
		v[2]=a -(v[1] * 10);
	}
	else if (a<1000){
		v[0]= a/100;
		v[1]=(a/10)-(v[0] * 10);
		v[2]=a -(v[1] * 10)-(v[0] * 100);
	}

	
	//converter em romano
	//CENTENAS
	if (v[0]==0)
		i=0;
	else{
	switch (v[0]){
		case 1:
			printf("C");
			break;
		case 2:
		printf("CC");
			break;
		case 3:
		printf("CCC");
			break;
		case 4:
		printf("CD");
			break;
		case 5:
		printf("D");
			break;
		case 6:
		printf("DC");
			break;
		case 7:
		printf("DCC");
			break;
		case 8:
		printf("DCCC");
			break;
		case 9:
		printf("CM");
			break;
	}}
	
	//DEZENAS
	if (v[1]==0)
		i=0;
	else{
	switch (v[1]){
		case 1:
			printf("X");
			break;
		case 2:
		printf("XX");
			break;
		case 3:
		printf("XXX");
			break;
		case 4:
		printf("XL");
			break;
		case 5:
		printf("L");
			break;
		case 6:
		printf("LX");
			break;
		case 7:
		printf("LXX");
			break;
		case 8:
		printf("LXXX");
			break;
		case 9:
		printf("XC");
			break;
	}}
	
	//UNIDADES
	if (v[2]==0)
		i=0;
	else{
	switch (v[2]){
		case 1:
			printf("I");
			break;
		case 2:
		printf("II");
			break;
		case 3:
		printf("III");
			break;
		case 4:
		printf("IV");
			break;
		case 5:
		printf("V");
			break;
		case 6:
		printf("VI");
			break;
		case 7:
		printf("VII");
			break;
		case 8:
		printf("VIII");
			break;
		case 9:
		printf("IX");
			break;
	}}
	printf("\n");

	return 0;
}