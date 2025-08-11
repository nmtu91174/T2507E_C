#include <stdio.h>

int main(){
	
	int n, i;
	
	printf("Nhap vao mot so nguyen bat ky: ");
	scanf("%d",&n);
	
	while (i<n){
		
		if (i % 2 != 0){
			
			printf("Cac so le nho hon n = %d  la: %d\n",n,i);	
		}
		
		i++;
	}
	
	return 0;

}
