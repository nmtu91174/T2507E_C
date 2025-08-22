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

void sapXepTangBubble(int a[], int n){
	
	for(int i=0; i<n-1; i++){
		for(int j=0; j<n-i-1; j++){
			if(a[j]>a[j+1]){
				int tg = a[j];
				a[j] = a[j+1];
				a[j+1] = tg;
			}
		}
	}
}


int main(){
	
	int n;
				
		n = nhapSoPhanTu(n);
		int a[n];
		nhapMang(a,n);
		//xuatMang(a,n);		
		
		sapXepTangBubble(a,n);
				
		printf("\nMang sau khi sap xep tang dan: ");
			for(int i=0; i<n; i++){
			printf("%2d ", a[i]);
			}
		printf("\n\n-------------------------\n");
	
	return 0;
}


	

