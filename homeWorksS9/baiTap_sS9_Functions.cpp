#include <stdio.h>
#include <conio.h>

//tinh tong cac chu so cua mot so nguyen n

int tongChuSo_n(int n, int s){
	
	for(; n!=0; n=n/10){
			int dv = n%10;
			s += dv;
		}
		
		return s;
}

//tim USCLN cua hai so

int USCLN(int x, int y){
	
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

//tim boi so chung nho nhat

int BSCNN(int x, int y){
	
//	xtemp = x;
//	ytemp = y;
//	
//	if(x==0 && y==0){
//		return false;
//	}
//	if(x==0 || y==0){
//		int uscMax = x+y;
//	}
//	for(;y!=0;){
//	
//		int z = x%y;
//		x = y;
//		y = z;
//	}	int uscMax = x;
	
	int uscMax = USCLN(x,y);
	
	int bscMin = (x*y)/uscMax;
	
	return bscMin;
}

//viet ham tinh S=x^y

int S_x_mu_y(int x, int y){
	
	int S;
	
	for(int i=0; i<=y; i++){
		 S = x*x;
	}
	
	return S;
}



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


	

