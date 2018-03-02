#include<stdio.h>
int main(){
	int i,a,b,sum=0;
	
	while (a>0 || b>0){
		
		scanf("%d %d",&a,&b);
		printf("Li\na=%d b=%d\n",a,b);
		
		if (b=a){
			printf("%d Sum=%d\n",a,a);
		}
		
			while (a<b){
				printf("entrou\n");
				a = a + 1;
				printf("%d ",a);
				sum = sum + a;
			}
			
			printf("Sum=%d\n",sum);
		
		/*else if (b<a){
			
			printf("%d ",b);
			sum = sum + b;
			while (b<a){
				b = b+1;
				printf("%d ",b);
				sum = sum + b;
			}
			
			printf("%d Sum=%d\n",a,sum+a);
			
		}*/
		printf("DPS\na=%d b=%d\n",a,b);
	}
	return 0;
}