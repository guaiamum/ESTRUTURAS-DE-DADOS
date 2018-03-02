#include<stdio.h>
#include<math.h>
int main (){
	float a, b, c, delta, rp, rn;
	
	scanf("%f %f %f", &a, &b, &c);
	
	if (a == 0){
		printf("Impossivel calcular\n");
		return 0;
	}
	
	delta = (b * b) -4 * a * c;
	
	if (delta < 0){
		printf("Impossivel calcular\n");
		return 0;
	}
	
	rp = (-b + sqrt(delta))/(2 * a);
	rn = (-b - sqrt(delta))/(2 * a);
	
	printf("R1 = %.5f\nR2 = %.5f\n", rp, rn);

	
	return 0;
}