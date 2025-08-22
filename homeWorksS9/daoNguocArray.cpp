#include <stdio.h>

//Nhap vao so phan tu cho mang

int nhapSoPhanTu(int n){
	do{
		printf("\nNhap so phan tu cho mang a[n]: ");
		scanf("%d", &n);
			
			if(n<=0){
			
			printf("\nBan phai nhap vao so nguyen va lon hon 0!");
			printf("\n-------------\n");
			while (getchar() != '\n');
			}
			
	} while(n<=0);
	
	return n;
}

//Nhap mang
void nhapMang(int a[], int n){
	for(int i=0; i<n; i++){
			
		printf("\nNhap phan tu thu [%d]: ", i+1);
		scanf("%d", &a[i]);
	}
	printf("\n-------------\n");	
}

//Xuat mang
void xuatMang(int a[], int n){
	
	printf("\nCac phan tu da nhap la: ");
	
	for(int i=0; i<n; i++){	
		printf("%d ", a[i]);
	}
	printf("\n-------------\n");
}

//Viet ham sap xep mang theo thu tu tang dan

void daoNguocMang(int a[], int n){
	
	for(int i=0; i<n/2; i++){
		int temp = a[i];
		a[i] = a[n-i-1];
		a[n-i-1] = temp;
	}
}


int main(){
	
	int n;
				
		n = nhapSoPhanTu(n);
		int a[n];
		nhapMang(a,n);
		xuatMang(a,n);		
		
		daoNguocMang(a,n);
				
		printf("\nMang sau khi dao nguoc: ");
			for(int i=0; i<n; i++){
			printf("%2d ", a[i]);
			}
		printf("\n\n-------------------------\n");
	
	return 0;
}


	

