#include <stdio.h>

int main(){

	float a;
	float b;
	float x;
	
	printf("Nhap vao hai so a,b de giai phuong trinh ax+b=0:\n");
	
	printf("nhap a: ");
	scanf("%f",&a);
	printf("nhap b: ");
	scanf("%f",&b);
		
	if (a!=0){
		x = -b/a;
		printf("Nghiem cua he phuong trinh ax+b=0 la: %.2f",x);
	}
			else {
					if (b==0) {
						printf("He phuong trinh ax+b=0 co vo so nghiem");
					}
					else{
						printf("He phuong trinh ax+b=0 vo nghiem");
					}
					
			}
			
	return 0;
}
