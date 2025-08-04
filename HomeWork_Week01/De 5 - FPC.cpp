#include <stdio.h>
#include <math.h>

int main(){
	
	float a;
	float b;
	float c;
	float delta;
	float x;
	float x1;
	float x2;
	
	printf("Hay nhap cac so hang cua phuong trinh bac 2:\n");
	
	printf("Hay nhap so hang a: ");
	scanf("%f", &a);
	
	printf("Hay nhap so hang b: ");
	scanf("%f", &b);
	
	printf("Hay nhap so hang c: ");
	scanf("%f", &c);
	
	if (a == 0) {
		printf("Phuong trinh khong phai la trinh bac 2!");
	} 
		else {
			delta = (b*b) - (4*a*c);
			if (delta < 0){
				printf("Phuong trinh vo nghiem!");
			}
				else 
				    if (delta == 0){
				    	x = -b/(2*a);	
				    	printf("Phuong trinh co mot nghiem kep: %.2f", x);
				}
				
			else
				{ 	x1 = (-b + sqrt(delta))/(2*a);
					x2 = (-b - sqrt(delta))/(2*a);
					
					printf("Phuong trinh co hai nghiem!\n");
					printf("Phuong trinh co nghiem x1 la: %.2f\n", x1);
					printf("Phuong trinh co nghiem x2 la: %.2f", x2);
			}
		}
	return 0;
			
}
