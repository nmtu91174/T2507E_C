 
#include <stdio.h>

//nhap x, tim x có trong mang khong

int main(){
	
	
	int n;
	int x;
	int max = 0;
	int dist = 0;
	
	printf("\nNhap so phan tu cho mang: ");
	scanf("%d", &n);
	
	int a[n];
	
	for(int i=0; i<n; i++){
		
		printf("\nNhap phan tu thu [%d]: ", i+1);
		scanf("%d", &a[i]);
	}
	
	printf("\nNhap vao mot so bat ky: ");
	scanf("%d", &x);
		
	printf("\n\n-------------\n");
	
	for(int i=0; i<n; i++){
		
		if(a[i] == x){
			if(i == n/2){
				
				printf("\nx Xuat hien o vi tri a[i]: %d", i);
				printf("\nphan tu dau: %d - phan tu cuoi: %d", a[0], a[n-1]);
				printf("\nVi tri dau - cuoi la index: 0 - %d", n-1 );
				printf("\nkhong co phan tu xa x nhat!");
			}
		
			else if(i > n/2){
				dist = i;
				printf("\nKhoang cach xa x nhat la: %d", i);
				printf("\nVi tri xa x nhat (i) la: 0");
				printf("\nGia tri xa x nhat a[0] la: %d", a[0]);
				printf("\n\n-------------\n");
				printf("\nx xuat hien o vi tri: %d", i);
				
			} else {
				dist = ((n-1) - i);
					if(dist>max){
						max = dist;
					}
				printf("\nVi tri xa x nhat la: %d", n-1);
				printf("\nGia tri xa x nhat la: %d", a[n-1]);
				printf("\n\n-------------\n");
				
				printf("\nx xuat hien o vi tri: %d", i);
			}
		}
	}	
	
			
			
				
	printf("\n\n-------------\n");
	printf("\nCac phan tu da nhap la: "); 
	for(int i=0; i<n; i++){	
		printf("%d ", a[i]);
	}
	
	return 0;
}		
	
	
	
