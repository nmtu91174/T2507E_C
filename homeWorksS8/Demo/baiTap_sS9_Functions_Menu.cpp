#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

//tinh tong cac chu so cua mot so nguyen n

int tongChuSo_n(int n){
	
	int s = 0;
	int dv = 0;
	
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

int powerxy(int x, int y){
	
	int S = 1;
	for(int i=1; i<=y; i++){
		 S *= x;
	}
	
	return S;
}

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
	
	int chon;
	
	do{
		printf("\n");
		printf("1. tinh tong cac chu so cua mot so nguyen n\n");
		printf("2. tim USCLN cua hai so\n");
		printf("3. tim boi so chung nho nhat\n");
		printf("4. viet ham tinh S=x^y\n");
		printf("5. viet ham dao nguoc so nguyen\n");
		printf("6. \n");
		printf("7. \n");
		printf("0. Exit\n");
		
		printf("\n-------------\n");
		printf("\nHay chon menu: ");
		scanf("%d", &chon);
		printf("\n-------------\n");
		
		system("cls");
		
		switch(chon){
			
			case 1:{
				int n;
				printf("\nNhap vao n: ");
				scanf("%d", &n);
	
				int s = tongChuSo_n(n);
	
				printf("S: %d", s);
				printf("\n-------------\n");
				break;
			}
			case 2:{
				int a, b;
	
				printf("\nNhap vao a: ");
				scanf("%d", &a);
				printf("\nNhap vao b: ");
				scanf("%d", &b);
				
				int uscMax = USCLN(a,b);
				
				printf("\nUSCLN %d", uscMax);
				printf("\n-------------\n");
				break;
			}
				
			case 3:{
				int a, b;
	
				printf("\nNhap vao a: ");
				scanf("%d", &a);
				printf("\nNhap vao b: ");
				scanf("%d", &b);
				
				int bscMin = BSCNN(a,b);
	
				printf("\nBSCNN %d", bscMin);
				printf("\n-------------\n");
				break;
			}
				
			case 4:{
				int x, y;
	
				printf("\nNhap vao x: ");
				scanf("%d", &x);
				printf("\nNhap vao y: ");
				scanf("%d", &y);
		
				printf("\nS: %d", powerxy(x,y));
				printf("\n-------------\n");
				break;
			}
			
			case 5:{
				int n;
				printf("\nNhap vao n: ");
				scanf("%d", &n);
				int temp = n;
				int dn = daoNguoc_n(n);
				printf("So dao nguoc cua n (%d) la: %d", temp, dn);
				printf("\n-------------\n");
				break;
			}
			
			case 6:{
				
				break;
			}
			
			case 7:{
				
				break;
			}
			
			case 0:{
				exit(0);
				break;
			}
				
			default:
			printf("\nHay chon dung case!");
			printf("\n-------------\n");
		}
		
		
							
	}while(chon!=0);
	
	
//	int n;
//	
//	printf("\nNhap vao n: ");
//	scanf("%d", &n);
//	
//	int s = 0;
//	int dv = 0;
//	
//	s = tongChuSo_n(n, s);
//	
//	printf("S: %d", s);
//	
//	printf("\n.............................\n");
//	
//	int a, b;
//	
//	printf("\nNhap vao a: ");
//	scanf("%d", &a);
//	printf("\nNhap vao b: ");
//	scanf("%d", &b);
//	
//	int uscMax = USCLN(a,b);
//	//int bscMin = (a*b)/uscMax;
//	
//	int bscMin = BSCNN(a,b);
//	
//	printf("\nUSCLN %d", uscMax);
//	printf("\nBSCNN %d", bscMin);
//	
//	printf("\n.............................\n");
//	
//	int x, y;
//	
//	printf("\nNhap vao x: ");
//	scanf("%d", &x);
//	printf("\nNhap vao y: ");
//	scanf("%d", &y);
//		
////	int S = S_x_mu_y(x,y);
//	
//	printf("\nS: %d", powerxy(x,y));
	
	
	getch();
	return 0;
}


	

