#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

//tinh tong cac chu so cua mot so nguyen n
//

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

//tim boi so chung nho nhat

int boiSoChungMin(int x, int y){
	
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
	
	int uscMax = uocSoChungMax(x,y);
	
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

//viet ham tinh tong cac chu so cua mot so nguyen duong

int tongCacChuSo(int n, int s){
	
	for(;n>0; n=n/10){
		int dv = n%10;
		s+=dv;
	}
	
	return s;
}

//Viet ham tim phan tu lon nhat trong mang

int phanTuMax(int a[], int n, int max){
	
	for(int i=0; i<n; i++){
		if(a[i] > max){
			max = a[i];
		}
		
	}
	return max;
}

//Viet ham tim phan tu nho nhat trong mang

int phanTuMin(int a[], int n, int min){
	
	for(int i=0; i<n; i++){
		if(a[i] < min){
			min = a[i];
		}
		
	}
	return min;
}

//Nhap vao so phan tu cho mang

int nhapSoPhanTu(int n){
	do{
		printf("\nNhap so phan tu cho mang a[n]: ");
		scanf("%d", &n);
			
			if(n<=0){
			
			printf("\nBan phai nhap vao so nguyen va lon hon 0!");
			printf("\n-------------\n");
			while (getchar() != '\n');
			}
			
	} while(n<=0);
	
	return n;
}

//Nhap mang
void nhapMang(int a[], int n){
	for(int i=0; i<n; i++){
			
		printf("\nNhap phan tu thu [%d]: ", i+1);
		scanf("%d", &a[i]);
	}
	printf("\n-------------\n");	
}

//Xuat mang
void xuatMang(int a[], int n){
	
	printf("\nCac phan tu da nhap la: ");
	
	for(int i=0; i<n; i++){	
		printf("%d ", a[i]);
	}
	printf("\n-------------\n");
}

//Viet ham sap xep mang theo thu tu tang dan

void sapXepTangBubble(int a[], int n){
	
	for(int i=0; i<n-1; i++){
		for(int j=0; j<n-i-1; j++){
			if(a[j]>a[j+1]){
				int tg = a[j];
				a[j] = a[j+1];
				a[j+1] = tg;
			}
		}
	}
}

//Viet ham dao nguoc mang

void daoNguocMang(int a[], int n){
	
	for(int i=0; i<n/2; i++){
		
		int temp = a[i];
		a[i] = a[n-i-1];
		a[n-i-1] = temp;
	}
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
		printf("6. viet ham tinh tong cac chu so cua mot so nguyen duong\n");
		printf("7. Viet ham tim phan tu lon nhat trong mang\n");
		printf("8. Viet ham tim phan tu nho nhat trong mang\n");
		printf("9. Viet ham sap xep mang theo thu tu tang dan\n");
		printf("10. Viet ham dao nguoc mang\n");
		
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
				printf("\n");
	
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
				
				int uscMax = uocSoChungMax(a,b);
				
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
				
				int bscMin = boiSoChungMin(a,b);
	
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
				int n;
				int s = 0;
				do{
					printf("\nNhap vao n: ");
					scanf("%d", &n);
					if(n<1){
						printf("\nHay nhap vao so nguyen duong!");
					}
				}while(n<1);
				
				s = 0;
				int temp = n;
				s = tongCacChuSo(n, s);
				printf("Tong cua cac chu so cua n (%d) la: %d", temp, s);
				printf("\n-------------\n");	
				break;
			}
			
			case 7:{
				int n;
	
				do{
					printf("\nNhap so phan tu cho mang a[n]: ");
					scanf("%d", &n);
					
					if(n<=0){
						
						printf("\nBan phai nhap vao so nguyen va lon hon 0!");
						printf("\n-------------\n");
						while (getchar() != '\n');
					}
					
				} while(n<=0);
				
				int a[n];
				
				for(int i=0; i<n; i++){
						
						printf("\nNhap phan tu thu [%d]: ", i+1);
						scanf("%d", &a[i]);
					}
				printf("\n-------------------------\n");
				
				int max = a[0];
				
				max = phanTuMax(a,n, max);
				
				printf("\nPhan tu lon nhat la: %d", max);
				printf("\n-------------------------\n");
				
				printf("\nVi tri xuat hien cua Max [i]: ");
				for(int i=0; i<n; i++){
					if(a[i] == max){
						printf("%d \t", i);
					}
				}
				printf("\n-------------------------\n");	
				break;
			}
			
			case 8:{
				int n;
	
				do{
					printf("\nNhap so phan tu cho mang a[n]: ");
					scanf("%d", &n);
					
					if(n<=0){
						
						printf("\nBan phai nhap vao so nguyen va lon hon 0!");
						printf("\n-------------\n");
						while (getchar() != '\n');
					}
					
				} while(n<=0);
				
				int a[n];
				
				for(int i=0; i<n; i++){
						
						printf("\nNhap phan tu thu [%d]: ", i+1);
						scanf("%d", &a[i]);
					}
				printf("\n-------------------------\n");
				
				int min = a[0];
				
				min = phanTuMin(a,n, min);
				
				printf("\nPhan tu nho nhat la: %d", min);
				printf("\n-------------------------\n");
				
				printf("\nVi tri xuat hien cua Max [i]: ");
				for(int i=0; i<n; i++){
					if(a[i] == min){
						printf("%d \t", i);
					}
				}
				printf("\n-------------------------\n");	
				break;
			}
			
			case 9:{
				int n;
	
				do{
					printf("\nNhap so phan tu cho mang a[n]: ");
					scanf("%d", &n);
					
					if(n<=0){
						
						printf("\nBan phai nhap vao so nguyen va lon hon 0!");
						printf("\n-------------\n");
						while (getchar() != '\n');
					}
					
				} while(n<=0);

				int a[n];
				
				for(int i=0; i<n; i++){
						
					printf("\nNhap phan tu thu [%d]: ", i+1);
					scanf("%d", &a[i]);
				}
									
				printf("\n-------------------------\n");
				
				sapXepTangBubble(a,n);
				
				printf("\nMang sau khi sap xep tang dan: ");
				for(int i=0; i<n; i++){
					printf("%2d ", a[i]);
				}
				printf("\n\n-------------------------\n");
				
				break;
			}
			
			case 10:{
				int n;
				
				n = nhapSoPhanTu(n);
				int a[n];
				nhapMang(a,n);
				xuatMang(a,n);
				daoNguocMang(a,n);
				printf("\nMang sau khi dao nguoc: ");
				for(int i=0; i<n; i++){
					printf("%2d ", a[i]);
				}
				printf("\n\n-------------------------\n");
				
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


	

