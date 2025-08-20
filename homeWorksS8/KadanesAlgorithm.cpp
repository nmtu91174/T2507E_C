#include <stdio.h>

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
	
	printf("\n-------------\n");
	for(int i=0; i<n; i++){
		printf("\nNhap phan tu thu [%d]: ", i+1);
		scanf("%d", &a[i]);
	}
	
	printf("\n-------------------------\n");
	printf("\nCac phan tu da nhap la: ");
	
	for(int i=0; i<n; i++){	
		printf("%d ", a[i]);
	}
	
	printf("\n-------------------------\n");

	int maxTong = a[0];
	int tong = a[0];
	int start1 =0;
	int start2 = 0;
	int end = 0;
	
	for(int i=0; i<n; i++){
		
		if(tong + a[1] < a[i]){
		tong = a[i];
		start2 = i;
		} else {
			tong+=a[i];
		}
		
		if(tong>maxTong){
			maxTong = tong;
			start1 = start2;
			end = i;
		}
	}
	
	printf("\nTong cua day con lien tuc Max: %d", maxTong);
	printf("\n...");
	printf("\nTu vi tri a[%d] den vi tri a[%d]", start1, end);
	printf("\n...");
	
	printf("\nDay con: ");
	for(int i=start1; i<= end; i++){
		printf("%d  " , a[i]);
	}
	printf("\n");
	
	return 0;
}
