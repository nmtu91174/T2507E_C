
#include <stdio.h>

//nhap x, tim x có trong mang khong

int main(){
	
	
	int n;
	int x;
	int dem = 0;
	
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
	printf("\nx Xuat hien o vi tri a[i]: ");
	for(int i=0; i<n; i++){
		
		if(a[i] == x){
			dem++;
			printf("%d ", i);
		}
	} 
	
	if(dem>0){
		
		
		printf("\nx co trong mang va xuat hien %d lan!", dem);
		printf("\n\n-------------\n");
		
	} else {
		
		printf("\nx khong co trong mang!");
		printf("\n\n-------------\n");
		}		
	
	printf("\n\n-------------\n");
	printf("\nCac phan tu da nhap la: "); 
	for(int i=0; i<n; i++){	
		printf("%d ", a[i]);
	}
	
	return 0;
}		
	
	
	
