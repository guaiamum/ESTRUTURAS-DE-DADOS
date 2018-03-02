#include <stdio.h>
 
int main() {
    int i,p=0;
	int n,mod=0;
    
	
    for (i=1;i<6;i++){
		
		scanf("%d",&n);
		
		mod = n % 2;
		if (mod == 0){
			p++;
			//media = media + n;
		}
    }
    
	printf("%d valores pares\n",p);
	
    return 0;
}