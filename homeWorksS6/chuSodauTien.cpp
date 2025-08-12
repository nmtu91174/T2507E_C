#include <stdio.h>
#include <math.h>

int main(){
	
	int n, temp, c;
	printf("Nhap n: ");
	scanf("%d", &n);
	
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
	
	printf("Chu so dau tien cua n: %d", soDau);
	
	return 0;
	
}
