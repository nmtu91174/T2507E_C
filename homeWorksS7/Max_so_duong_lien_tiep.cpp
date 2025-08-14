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
	int max = 0;
	
	for(int i=0; i<n; i++){
		if(a[i]>0){
		dem++;
		//break;
			if(dem>max){
				max = dem;
			}
			
		} else {
			dem = 0;
		} 
	}
			
//	if(dem != 0){
//		
//		
//		for(int i=0; i<n; i++){
//			
//			if(a[i] > 0 && a[i] == (a[i+1] - 1)){
//				
//				dem++;
//				
//				if(dem>max){
//					max = dem;
//				} else dem = 0;
//				 
//			} 
//		}	
//	}	
//	
//	
//	
////	for(int i=0; i<n; i++){
////		
////		if(dem>max){
////			max = dem;
////		}
////	}
		printf("\nSo luong so duong lien tiep nhieu nhat: %d", max);
	
	
	printf("\n-------------------------\n");
	printf("\nCac phan tu da nhap la: ");
	
	for(int i=0; i<n; i++){	
		printf("%d ", a[i]);
	}
}




	
