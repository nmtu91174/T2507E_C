#include <stdio.h>
#include <math.h>

int main(){
	
	int n, temp, c;
	
	do{
		printf("\nNhap vao so nguyen duong n: ");
		scanf("%d", &n);
		
		if(n<=0){
			printf("\nHay nhap vao so nguyen duong (n>0)!\n");
		}	
	} while (n<=0);
	
	
	c = 0;
	temp = n;
	
//	while(n!=0){
//		int dv = n%10;
//		c+=1;
//		n/=10;
//	}
	
	for(; n!=0; n/=10){
		int dv = n%10;
		c+=1;
	}
			
	int soDau = temp/pow(10,c-1);
	
	printf("\nChu so dau tien cua n: %d", soDau);
	
	return 0;
	
}
