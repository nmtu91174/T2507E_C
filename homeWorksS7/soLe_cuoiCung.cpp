
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
	
	printf("\n-------------------------\n");
	printf("\nVi tri So le cuoi cung la: ");
	for(int i=n-1; i>=0; i--){
		if(a[i]%2!=0){
			
			printf("%d",i);
			
			printf("\n-------------------------\n");
			printf("\nSo le cuoi cung la: %d\n", a[i]);
			
			break;
		}
	    
	}
	
	printf("\n\n-------------\n");
	printf("\nCac phan tu da nhap la: "); 
	for(int i=0; i<n; i++){	
		printf("%d ", a[i]);
	}		
	printf("\n\n-------------\n");
	
}
