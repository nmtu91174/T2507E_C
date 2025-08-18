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
	
	printf("\nHay nhap vao mot so x: ");
	scanf("%d", &x);
	
	int maxDistValue = a[0];
	int maxDist = abs(a[0] - x);
	
	for(int i=1; i<n; i++){
		int dist = abs(a[i] - x);
		if(abs(a[i] - x) > maxDist){
			maxDist = dist;
			maxDistValue = a[i];
		}
		
	}
	
	printf("\n------------------------------------\n");
	
	printf("\nGia tri trong mang so xa gia tri x nhat: ");
				
	for(int i=0; i<n; i++){
		if(abs(a[i] - x) == maxDist){
			printf("%d ", a[i]);
		}
	}
	printf("\n");
	
	printf("\n------------------------------------\n");
	
	printf("\nVi tri Gia tri trong mang so xa gia tri x nhat: ");
	
			
	for(int i=0; i<n; i++){
		if(abs(a[i] - x) == maxDist){
			printf("%d ", i);
		}
	}
	printf("\n");
	
	printf("\n------------------------------------\n");
	printf("\nKhoang cach tu so trong mang xa x nhat la: %d", maxDist);
	printf("\n");
		
	return 0;
	
}
