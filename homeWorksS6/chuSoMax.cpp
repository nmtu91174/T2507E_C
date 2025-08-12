#include <stdio.h>
#include <math.h>

int main(){
	
	int n, temp, soMax;
	printf("Nhap n: ");
	scanf("%d", &n);
	
	temp = n;
	soMax = 0;
	
	for(; n!=0; n/=10){
		int dv = n%10;
		
		if (dv>soMax){
			soMax = dv;
		}
	}
		
	printf("Chu so Max cua n: %d", soMax);
	
	return 0;
	
}
