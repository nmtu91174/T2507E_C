#include <stdio.h>

int main(){
	int n;
	
	do{
		printf("\nNhap so phan tu cho mang a[n]: ");
		scanf("%d", &n);
		
		if(n<=0){
			
			printf("\nBan phai nhap vao so nguyen va lon hon 0!");
			printf("\n-------------\n");
			while (getchar() != '\n');
		}
		
	} while(n<=0);
	
	int a[n];
	
	for(int i=0; i<n; i++){
			
			printf("\nNhap phan tu thu [%d]: ", i+1);
			scanf("%d", &a[i]);
		}	

	
	int dem = 0;
	int Min = a[0];
	
	for(int i=0; i<n; i++){
		if(a[i]>0){
	
		dem++;
		break;
		} 
	}
			
	if(dem != 0){
		
		
			
		for(int i=0; i<n; i++){
			
			if(a[i] > 0 && a[i] < Min){
				Min = a[i];
			}
		}	
		
			printf("\n-------------------------\n");
			printf("\nSo duong nho nhat la: %d", Min);
			printf("\n-------------------------\n");
				
			
	}	else {
			printf("\n-------------------------\n");
			printf("\nMang khong co so duong!");
			printf("\n-------------------------\n");
		}
	
	
	printf("\nVi tri xuat hien cua so duong nho nhat la a[i]: ");
	
	for(int i=0; i<n; i++){
		if(a[i]==Min){
			printf("%d ", i);
		}
	}	
	
	printf("\n-------------------------\n");
	printf("\nCac phan tu da nhap la: ");
	
	for(int i=0; i<n; i++){	
		printf("%d ", a[i]);
	}
	
}




	
