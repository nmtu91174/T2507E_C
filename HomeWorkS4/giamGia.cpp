#include <stdio.h>

int main(){
	
	float bill;
	float pay;
	float discount;
	
	printf("Nhap so tien trong hoa don: ");
	scanf("%f",&bill);
	
	if (bill >= 500){
		discount = bill * 0.1;
		
	} else if (bill >= 200){
		discount = bill * 0.05;
		
		} else {
			discount = 0;
		}	 
	
	pay = bill - discount;
	
	
    printf("\n");
	printf("Tong tien hoa don mua hang: %.2f VND\n", bill);
    printf("Giam gia: %.2f VND\n", discount);
    printf("\n");
    printf("--------------------------------------\n");
	printf("So tien can phai tra: %.2f VND\n", pay);


    return 0;
}
