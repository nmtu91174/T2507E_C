#include <stdio.h>

void nhapMang(int a[], int n){
	for(int i=0; i<n; i++){
			
			printf("\nNhap phan tu thu [%d]: ", i+1);
			scanf("%d", &a[i]);
		}	
}

void xuatMang(int a[], int n){
	
	printf("\n-------------\n");
	printf("\nCac phan tu da nhap la: ");
	
	for(int i=0; i<n; i++){	
		printf("%d ", a[i]);
	}
}

int tinhTong(int a[], int start, int end){
	
	int tong = 0;
	
	for(int k=start; k<=end; k++){
		tong+=a[k];
		}
	
	return tong;
}

int main(){
	
	int n;
	
	do{
		printf("\nNhap so phan tu cho mang: ");
		scanf("%d", &n);
		
		if(n<=0){
			
			printf("\nBan phai nhap vao so nguyen va lon hon 0!");
			printf("\n-------------\n");
			while (getchar() != '\n');
				
		}
	} while(n<=0);
	
	int a[n];

	nhapMang(a, n);
	xuatMang(a, n);
	
	printf("\n\n-------------\n");
	int maxTong = a[0];
	int start = 0;
	int end = 0;
	
	for(int i=0; i<n; i++){
		for(int j=i; j<n; j++){
			
			int tong = tinhTong(a, i, j);
			
			if(tong>maxTong){
				maxTong = tong;
				start = i;
				end = j;
			}
		}
	}
	
	printf("\nTong cua day con lien tuc Max: %d", maxTong);
	printf("\n...");
	
	printf("\nTu vi tri a[%d] den vi tri a[%d]", start, end);
	printf("\n...");
	
	printf("\nDay con: ");
	for(int i=start; i<= end; i++){
		printf("%d  " , a[i]);
	}
	printf("\n");
	
	return 0;
}
