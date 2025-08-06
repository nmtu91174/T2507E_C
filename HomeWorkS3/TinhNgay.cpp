#include <stdio.h>

int main(){
	
	int d, m ,y;
	
	printf("Hay nhap vao ngay thang nam: \n");
	printf("\n");
	
	printf("Hay nhap vao ngay: ");
	scanf("%d",&d);
	
//	if (d>31){
//		printf("\n");
//		printf("Ngay khong duoc qua 31!\n");
//		printf("\n");
//		
//		printf("Hay nhap lai: ");
//		
//		scanf("%d",&d);
//	}
	
	printf("\n");
	printf("Hay nhap vao thang: ");
	scanf("%d",&m);
	
//	if (m>12){
//		printf("\n");
//		printf("Thang khong duoc qua 12!\n");
//		printf("\n");
//		
//		printf("Hay nhap lai: ");
//		
//		scanf("%d",&m);
//	}
	
//	if (d>29 && m==2){
//		printf("\n");
//		printf("Ngay khong duoc qua 29!\n");
//		printf("\n");
//		
//		printf("Hay nhap lai ngay: ");
//		scanf("%d",&d);
//		printf("Hay nhap lai thang: ");
//		scanf("%d",&m);
//	}
	
	printf("\n");
	printf("Hay nhap vao nam: ");
	scanf("%d",&y);	
	
	printf("\n");
	
	printf("ngay thang nam da nhap la: %d/%d/%d\n",d,m,y);
	printf("\n");
	
	d = d+1;
	
	if (m==2){
		if (y % 400 == 0 || (y % 4 ==0 && y % 100 != 0)){
			if (d>29){
				d = d-29;
				m = m + 1;
				printf("ngay thang nam tiep theo la: %d/%d/%d",d,m,y);
			} 					
		}
		
		else 
			if (d>28){
				d = d-28;
				m = m + 1;
				printf("ngay thang nam tiep theo la: %d/%d/%d",d,m,y);
			}
				
		else {
				printf("ngay thang nam tiep theo la: %d/%d/%d",d,m,y);
		}
	}
	
	else
		if (m==4 || m==6 || m==9 || m==11){
			if (d>30){
				d = d - 30;
				m = m + 1;
				printf("ngay thang nam tiep theo la: %d/%d/%d",d,m,y);
			}
			else {
				printf("ngay thang nam tiep theo la: %d/%d/%d",d,m,y);
			}
		}
	else {
		if (d>31){
			d = d - 31;
			m = m + 1;
			if (m>12){
				m = m - 12;
				y = y + 1;
				printf("ngay thang nam tiep theo la: %d/%d/%d",d,m,y);
			} 
			else {
				printf("ngay thang nam tiep theo la: %d/%d/%d",d,m,y);
			}
		}
		else {
			printf("ngay thang nam tiep theo la: %d/%d/%d",d,m,y);
		}
	}
}
