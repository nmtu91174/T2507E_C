#include <stdio.h>
#include <math.h>

int main(){
	
	int n;
	int a, b;
	
	do{
		printf("\nHay nhap so phan tu cua mang a[n]: ");
		scanf("%d", &n);
		
		if(n<1){
			printf("\nLoi du lieu, n phai n >= 1!\n");
			
		}
		
	} while(n<1);
	
	printf("\n------------------------------------\n");
	
	int mang[n];
	
	for(int i=0; i<n; i++){
		
		printf("\nHay nhap vao phan tu thu a[%d]: ", i);
		scanf("%d", &mang[i]);
	}
	
	printf("\n------------------------------------\n");
	
	int min = mang[0];
	int max = mang[0];
	
	for(int i = 1; i < n; i++){
			
			if(mang[i] < min){
				min = mang[i];
			}
			
			if(mang[i] > max){
				max = mang[i];
			}
	}
	
	a = min;
	b = max;
	
	printf("\nDoan [a,b] la: [tu %d den %d]", a, b);
	printf("\n");
		
	return 0;
}
