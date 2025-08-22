#include <stdio.h>

//viet ham tinh S=x^y

int powerxy(int x, int y){
	
	int S = 1;
	for(int i=1; i<=y; i++){
		 S *= x;
	}
	
	return S;
}


int main(){
	
	int a, b;
	
		printf("\nNhap vao a: ");
		scanf("%d", &a);
		printf("\nNhap vao b: ");
		scanf("%d", &b);
		printf("\n");
		
		printf("\nKet qua S=x^y la: %d", powerxy(a,b));
		
	return 0;
}


	

