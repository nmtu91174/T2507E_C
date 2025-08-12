#include <stdio.h>

int main(){
	
	int n, temp, s;
	printf("Nhap n: ");
	scanf("%d", &n);
	
	s = 0;
	temp = n;
	
//	while(n!=0){
//		int dv = n%10;
//		s+=dv;
//		n/=10;
//	}
	
	for(; n!=0; n=n/10){
		int dv = n%10;
		s += dv;
	}
		
	printf("Tong cua cac chu so cua n (%d) la: %d", temp, s);
	
	return 0;
	
}
