#include <stdio.h>
#include <math.h>

int main(){
	
	float kwh;
	float VND;
	
	printf("Hay nhap so kwh tieu thu: ");
	scanf("%f",&kwh);
	
	if (kwh <= 50) {
		VND = kwh * 1.678;
		printf("Tien dien cua 50 so dau tien la: %.2f vnd",VND);
	}
		
		else 
			if (kwh <= 100) {
				VND = kwh * 1.734;
				printf("Tien dien cua 100 so tiep theo la: %.2f vnd",VND);							
			}
			
			else 
				if (kwh <= 200) {
					VND = kwh * 2.014;
					printf("Tien dien cua 200 so tiep theo la: %.2f vnd",VND);							
				}
				
				else {
					VND = kwh * 2.536;
					printf("Tien dien cua kwh lon hon 200 so la: %.2f vnd",VND);
				}
			
	return 0;
}
