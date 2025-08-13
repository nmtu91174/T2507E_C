
#include <stdio.h>

//nhap x, tim x có trong mang khong

int main(){
	
	
	int n;
	int x;
	
	printf("\nNhap so phan tu cho mang: ");
	scanf("%d", &n);
	
	int a[n];
	
	for(int i=0; i<n; i++){
		
		printf("\nNhap phan tu thu [%d]: ", i+1);
		scanf("%d", &a[i]);
	}
	
	printf("\nNhap vao mot so bat ky: ");
	scanf("%d", &x);
	
	int dem = 0;
	
	printf("\n\n-------------\n");
	printf("\nx Xuat hien o vi tri: ");
	
	for(int i=0; i<n; i++){
		if(a[i] == x){
			dem++;
			 printf("%d ", i);
		}
	}
		
		printf("\n\n-------------\n");
		printf("x co trong mang va xua hien %d lan!", dem);
			
	
	printf("\n\n-------------\n");
	printf("\nCac phan tu da nhap la: "); 
	for(int i=0; i<n; i++){	
		printf("%d ", a[i]);
	}
	
	return 0;
}		
	
	
	
