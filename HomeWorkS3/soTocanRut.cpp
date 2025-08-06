#include <stdio.h>

int main(){
	
	int soTien;
	int soTo;
	
	int phanDu500;
	int phanDu200;
	int phanDu100;
	int phanDu50;
	int phanDu20;
	int phanDu10;
	
	printf("Nhap so tien can rut (boi so cua 10): ");
    scanf("%d", &soTien);
    
    phanDu500 = soTien % 500;
	phanDu200 = phanDu500 % 200;
	phanDu100 = phanDu200 % 100;
	phanDu50 = phanDu100 % 50;
	phanDu20 = phanDu50 % 20;
	phanDu10 = phanDu20 % 10;

    if (soTien % 10 != 0 || soTien <= 0) {
        printf("So tien phai la boi so cua 10 va lon hon 0.\n");
        printf("\n");
        
		printf("Hay nhap lai!");
        printf("\n");
        
        return 1;
	}
	
	if (soTien/500 > 0){
		
		soTo = soTien/500;
		
		printf("soTo 500 la: %d\n", soTo);	
	}
		
	
			
	if (phanDu500/200 > 0){
		
		soTo = phanDu500/200;
		
		printf("soTo 200 la: %d\n", soTo);
	}
	
	
	
	if (phanDu200/100 > 0){
						
		soTo = phanDu200/100;
		
		printf("soTo 100 la: %d\n", soTo);
		
	}
	
	
	if (phanDu100/50 > 0){
						
		soTo = phanDu100/50;
			
		printf("soTo 50 la: %d\n", soTo);
		
	}
	
	if (phanDu50/20 > 0){
		
		soTo = phanDu50/20;
		
		printf("soTo 20 la: %d\n", soTo);
	}
		
	if (phanDu20/10 > 0){
		
		soTo = phanDu20/10;
		printf("soTo 10 la: %d\n", soTo);
	}
	
//	int money;
//	int amount;
//	int type;
//	
//	printf("Nhap so tien can rut (boi so cua 10): ");
//    scanf("%d", &money);
//    
//    if (money % 10 !)
		
		return 0;
	}
	
    
    

