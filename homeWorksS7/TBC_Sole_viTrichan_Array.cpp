
#include <stdio.h>

//TBC so le o vi tri chan trong mang

int main(){
	
	int n;
	float TBC_Sole;

	printf("\nNhap so phan tu cho mang: ");
	scanf("%d", &n);
	
	int a[n];
	
	for(int i=0; i<n; i++){
		
		printf("\nNhap phan tu thu [%d]: ", i+1);
		scanf("%d", &a[i]);
	}
	
	printf("\n\n-------------\n");
	printf("\nCac phan tu da nhap la: "); 
	for(int i=0; i<n; i++){	
		printf("%d ", a[i]);
	}		
	printf("\n\n-------------\n");
	
	int demSole = 0;
	int tong = 0;
	
	for(int i=0; i<n; i++){
		
		if(a[i] % 2 != 0 && i % 2 == 0){
			
			demSole++;
			tong = tong + a[i];
			
			printf("\nVi tri xuat hien so le la: ");
			printf("%d\n", i);
		}
		
	}
	
	TBC_Sole = (float)tong/demSole;
	
	printf("\n-------------\n");
	printf("\nTBC cac so le o vi tri chan la: %.2f = tong so le: %d / so so le: %d\n", TBC_Sole, tong, demSole);
		
	return 0;
}	
