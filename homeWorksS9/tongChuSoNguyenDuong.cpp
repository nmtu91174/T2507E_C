#include <stdio.h>

//viet ham tinh tong cac chu so cua mot so nguyen duong

int tongCacChuSo(int n, int s){
	
	for(;n>0; n=n/10){
		int dv = n%10;
		s+=dv;
	}
	
	return s;
}


int main(){
	
			int n;
				
				do{
					printf("\nNhap vao n: ");
					scanf("%d", &n);
					if(n<1){
						printf("\nHay nhap vao so nguyen duong!");
					}
				}while(n<1);
				
				printf("\n");
				
				int s = 0;
				int temp = n;
				s = tongCacChuSo(n, s);
				printf("Tong cua cac chu so cua n (%d) la: %d", temp, s);
	
	return 0;
}


	

