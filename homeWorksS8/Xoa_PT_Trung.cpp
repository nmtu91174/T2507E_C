#include <stdio.h>
#include <conio.h>

int main(){
	
	int n;
	
	do{
		printf("\nNhap so phan tu: ");
		scanf("%d", &n);
		
		if(n<1){
			printf("\nDu lieu khong hop le. n>=1!\n");
			printf("\n-------------------------\n");
			while (getchar() != '\n');
		}
	} while(n<1);
	
	int a[n];
	
	
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
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(a[i] == a[j]){
				for(int k=j; k<n-1; k++){
					a[k] = a[k+1];
				}
				n--;
				j--;		
			}
		}
	}
	
	printf("\nMang sau khi xoa cac phan tu trung nhau: ");
    for(int i = 0; i < n; i++) {
        printf("%4d", a[i]);
    }

    getch();
    return 0;
}
	
