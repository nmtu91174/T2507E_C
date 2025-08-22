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

int phanTuMin(int a[], int n, int min){
	
	for(int i=0; i<n; i++){
		if(a[i] < min){
			min = a[i];
		}
		
	}
	return min;
}


int main(){
	
	int n;
				
		n = nhapSoPhanTu(n);
		int a[n];
		nhapMang(a,n);
		//xuatMang(a,n);		
		
			int min = a[0];
			min = phanTuMin(a,n, min);
				
			printf("\nPhan tu nho nhat la: %d", min);
			printf("\n-------------------------\n");
				
			printf("\nVi tri xuat hien cua Min [i]: ");
			for(int i=0; i<n; i++){
				if(a[i] == min){
					printf("%3d", i);
				}
			}
			printf("\n-------------------------\n");
	
	return 0;
}


	

