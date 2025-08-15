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

	
	int tong = 0;
	int max = 0;
	
	for(int i=0; i<n; i++){
		
		if(a[i]>0){
			
			tong+=a[i];
		
				if(tong>max){
					max = tong;
				}
			
		} else {
			tong = 0;
		} 
	}
	
			

		printf("\nTong lon nhat cua chuoi so duong: %d", max);
	
	
	printf("\n-------------------------\n");
	printf("\nCac phan tu da nhap la: ");
	
	for(int i=0; i<n; i++){	
		printf("%d ", a[i]);
	}
}




	
