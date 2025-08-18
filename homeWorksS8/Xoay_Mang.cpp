#include <stdio.h>

int main(){
	
	int n;
	
	printf("\nNhap so phan tu: ");
	scanf("%d", &n);
	
	int a[n];
	
	
	for(int i=0; i<n; i++){
		printf("\nNhap phan tu thu [%d]: ", i+1);
		scanf("%d", &a[i]);
	}
	printf("\n-------------------------\n");
	printf("\nCac phan tu da nhap la: ");
	
	for(int i=0; i<n; i++){	
		printf("%d ", a[i]);
	}
	
	int k;
	int temp;
	
	printf("\nNhap vao so k: ");
	scanf("%d", &k);
	
	for(int i=0; i<k; i++){
		
		 temp = a[0];
			for(int j=0; j<n-1; j++){
				a[j] = a[j+1];
			} 
			a[n-1] = temp;
	}
	
	printf("\n-------------------------\n");
	printf("\nMang da xoay la: ");
	
	for(int i=0; i<n; i++){	
		printf("%d ", a[i]);
	}
	
	return 0;
}
