#include <stdio.h>

int main(){
	
	int n, i;
	
	printf("\nNhap vao mot so nguyen bat ky: ");
	scanf("%d",&n);
	
	printf("\n---------------------------------");
	printf("\n\nCac so le nho hon n = %d  la: ",n);
		
	while (i<n){
		
		if (i % 2 != 0){
			
			printf("%d ",i);	
		}
		
		i++;
	}
	
	return 0;

}
