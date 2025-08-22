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

//Viet ham tim phan tu lon nhat trong mang

int phanTuMax(int a[], int n, int max){
	
	for(int i=0; i<n; i++){
		if(a[i] > max){
			max = a[i];
		}
		
	}
	return max;
}


int main(){
	
	int n;
				
		n = nhapSoPhanTu(n);
		int a[n];
		nhapMang(a,n);
		//xuatMang(a,n);		
		
			int max = a[0];
			max = phanTuMax(a,n, max);
				
			printf("\nPhan tu lon nhat la: %d", max);
			printf("\n-------------------------\n");
				
			printf("\nVi tri xuat hien cua Max [i]: ");
			for(int i=0; i<n; i++){
				if(a[i] == max){
					printf("%3d", i);
				}
			}
			printf("\n-------------------------\n");
	
	return 0;
}


	

