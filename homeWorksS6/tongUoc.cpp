#include <stdio.h>

int main(){

	int n, s;
	
	printf("Nhap vao n: ");
	scanf("%d", &n);
	
	s = 0;
	
	for(int i = 1; i<=n; i++){
		
		if(n%i==0){
			s+=i;
		}
		
	}	
		
	printf("Tong cua cac uoc la: %d", s);
	
	return 0;
}
