#include <stdio.h>

int main(){
	
	int a, b;
	
	
	do {
		
		printf("\nHay nhap vao hai so a va b (a<b):\n");
		
		printf("\nNhap so a: ");
		scanf("%d", &a);
		
		printf("\nNhap so b: ");
		scanf("%d", &b);
		
			if(a>=b){
				printf("\n>>>> a phai <= b! <<<\n\n==> Hay nhap lai! <==\n");
			} 
			
	} while(a>=b);
	
	printf("\nCac so nguyen to (i) la: ");
	
	for(int i = a; i <= b; i++){
		
		int c = 0;
				
		for(int u = 1; u <= i; u++){
			
			if(i % u == 0){
				c++;
			}
		}
						
		if(c==2){
			printf("%d ", i);
		}
			
	}
	
	return 0;		
}
	
	


		

	
	
	
	
