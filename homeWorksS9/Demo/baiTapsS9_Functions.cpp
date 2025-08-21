#include <stdio.h>
#include "Demo.h"



int main(){
	
	
	
	
	int n;
	
	printf("\nNhap vao n: ");
	scanf("%d", &n);
	
	int s = 0;
	int dv = 0;
	
	s = tongChuSo_n(n, s);
	
	printf("S: %d", s);
	
	printf("\n.............................\n");
	
	int a, b;
	
	printf("\nNhap vao a: ");
	scanf("%d", &a);
	printf("\nNhap vao b: ");
	scanf("%d", &b);
	
	int uscMax = USCLN(a,b);
	//int bscMin = (a*b)/uscMax;
	
	int bscMin = BSCNN(a,b);
	
	printf("\nUSCLN %d", uscMax);
	printf("\nBSCNN %d", bscMin);
	
	printf("\n.............................\n");
	
	int x, y;
	
	printf("\nNhap vao a: ");
	scanf("%d", &x);
	printf("\nNhap vao b: ");
	scanf("%d", &b);
	
	int S = S_x_mu_y(x,y);
	
	printf("\nS: %d", S);
	
	
	getch();
	return 0;
}


	

