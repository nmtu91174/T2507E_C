#include <stdio.h>

int main(){
	
	int n, i;
	
	printf("Nhap vao mot so nguyen bat ky: ");
	scanf("%d",&n);
	
	int max;
	
	while (i<n){
		
		if (i % 6 == 0){
			
			max = i;	
		}
		i++;
	}
	
	printf("Cac so chia het cho 2 va 3 nho hon n = %d  la: %d\n",n,max);
	
	return 0;
	
	
}
