#include <stdio.h>

int main(){
	
	int a, b, USCLN, BSCNN;
	int a0, b0; // luu lai gia tri ban dau cua a va b
	
	printf("Hay nhap vao hai so a va b:\n");
	printf("a: ");
	scanf("%d", &a);
	printf("b: ");
	scanf("%d", &b);
	
	a0 = a;
	b0 = b;	
	
	if(a==0 && b==0){
		printf("Khong co BSC!");
	}
	
	if(a==0 || b==0){
		USCLN = a + b;
	}
	
//	for(;a!=b;){
//		
//		if(a>b){
//			a = a - b;
//		} else {
//			b = b - a;
//		}

	for(;b!=0;){
		
		int x;
		x = a%b;
		a = b;
		b = x;
	}
		
	USCLN = a;
	
	BSCNN = (a0*b0)/USCLN;
	
	printf("\nUSCLN cua a(%d) va b(%d) la: %d", a0, b0, USCLN);
	printf("\nBSCNN cua a(%d) va b(%d) la: %d", a0, b0, BSCNN);
	
}

//Thuat Toan Euclid 
//Thuat toan Euclid phat bieu nhu sau:
//UCLN cua hai so nguyen khong thay doi khi thay so lon hon bang hieu cua no voi so nho hon.
//Qua trinh thay the nay duoc lap di lap lai cho toi khi 2 so bang nhau, khi do UCLN chinh la 1 trong 2 so.

//Khi a va b cach xa nhau thi thuat toan Euclid hoat dong khong hieu qua.
//Ta cai tien thuat toan Euclid bang nhan xet sau:
//UCLN cua hai so nguyen khong thay doi khi thay 1 trong 2 so thanh so du cua no voi so con lai.
//Co nghia la UCLN(a, b) = UCLN(b, a % b).
//Qua trinh thay the nay duoc lap di lap lai cho toi khi 1 trong 2 so bang 0, khi do UCLN chinh la so con lai

