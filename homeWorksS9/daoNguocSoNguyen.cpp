#include <stdio.h>

//viet ham dao nguoc so nguyen
int daoNguoc_n(int n){
	
	int dn = 0;
	
	for(; n!=0; n=n/10){
			int dv = n%10;
			dn = dn*10 + dv;
			n/10;
		}
		
		return dn;
}


int main(){
	
	int n;
		printf("\nNhap vao n: ");
		scanf("%d", &n);
		printf("\n");
		
		int temp = n;
		int dn = daoNguoc_n(n);
		
		printf("So dao nguoc cua n (%d) la: %d", temp, dn);
	
	return 0;
}


	

