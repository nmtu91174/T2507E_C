#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int n, i, count;
	
	printf("Nhap vao 1 so: ");
	scanf("%d", &n);
	
	i=1;
	count = 0;
	
	while(i<=n){
		
		if(n%i==0){
			count+=1;
		}
		i++;
	}
	
	printf("So cuoi cua vong lap la: %d!\n", i);
	printf("\n");
	
	if(count == 2){
		printf("So %d la so nguyen to!", n);
	} else {
		printf("So %d khong la so nguyen to!", n);
	}
	
	return 0;
	
}
