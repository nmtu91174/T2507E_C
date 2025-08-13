#include <stdio.h>

int main(){
	
	int n;
	
	printf("\nNhap so phan tu cho mang: ");
	scanf("%d", &n);
	
	int a[n];
	
	for(int i=0; i<n; i++){
		
		printf("\nNhap phan tu thu [%d]: ", i+1);
		scanf("%d", &a[i]);
	}
	
	for(int i=0; i<n; i++){
		if(a[i]%2!=0 && i==n-1){
			
			printf("\n-------------------------\n");
			printf("\nSo le cuoi cung la: %d\n", a[i]);
		}
	}
	
}
