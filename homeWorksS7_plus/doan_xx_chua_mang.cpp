#include <stdio.h>
#include <math.h>

int main(){
	
	int n;
	int x;
	
	do{
		printf("\nHay nhap so phan tu cua mang a[n]: ");
		scanf("%d", &n);
		
		if(n<1){
			printf("\nLoi du lieu, n phai n >= 1!\n");
		}
		
	} while(n<1);
	
	printf("\n------------------------------------\n");
	
	int a[n];
	
	for(int i=0; i<n; i++){
		
		printf("\nHay nhap vao phan tu thu [%d]: ", i+1);
		scanf("%d", &a[i]);
	}
	
	printf("\n------------------------------------\n");
	
	int min = a[0];
	int max = a[0];
	
	for(int i=0; i<n; i++){
		if(a[i] < min){
			min = a[i];
		}
		
		if(a[i] > max){
			max = a[i];
		}
	}
	
	for(int i=0; i <n; i++){
	
		if(abs(min) > abs(max)){
			x = abs(min);
		} else if (abs(min) < abs(max)){
			x = abs(max);
			} else {
				x = abs(min);
			}
	}
	
	printf("\nGia tri cua x la: %d", x);
	printf("\nDoan [-x,x]: [-%d,%d]", x,x);
	printf("\n");
	
	return 0;
}
