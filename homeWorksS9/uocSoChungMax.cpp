#include <stdio.h>

//tim USCLN cua hai so

int uocSoChungMax(int x, int y){
	
	if(x==0 && y==0){
		return false;
	}
	if(x==0 || y==0){
		int uscMax = x+y;
	}
	for(;y!=0;){
	
		int z = x%y;
		x = y;
		y = z;
	}	int uscMax = x;
	
	return uscMax;
}


int main(){
	
	int a, b;
	
		printf("\nNhap vao a: ");
		scanf("%d", &a);
		printf("\nNhap vao b: ");
		scanf("%d", &b);
		printf("\n");
		
		int uscMax = uocSoChungMax(a,b);
		
		printf("\nUSCLN la: %d", uscMax);
		
	return 0;
}


	

