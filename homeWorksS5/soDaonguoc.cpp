#include <stdio.h>

int main(){
	
	int n, temp;
	printf("Nhap n: ");
	scanf("%d", &n);
	
	int dn = 0;
	temp = n;
	
	while(n!=0){
		int dv = n%10;
		dn = dn*10 + dv;
		n/=10;
		
	}
	
	printf("So dao nguoc cua n (%d) la: %d", temp, dn);
	
	return 0;
	
}
