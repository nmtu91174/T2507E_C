#include <stdio.h>

//tinh tong cac chu so cua mot so nguyen n

int tongChuSo(int n, int s){
	
	for(; n!=0; n=n/10){
			int dv = n%10;
			s += dv;
		}
		
		return s;
}


int main(){
	
	
	int n;
	
	printf("\nNhap vao n: ");
	scanf("%d", &n);
	printf("\n");
	
	int s = 0;
	int dv = 0;
	
	s = tongChuSo(n, s);
	
	printf("Tong cac chu so cua n: %d", s);
			
	return 0;
}


	

