#include <stdio.h>

int main(){
	
	int d, m, y;
	
	printf("Hay nhap vao ngay thang nam: \n");
	printf("\n");
	
	printf("Hay nhap vao ngay: ");
	scanf("%d",&d);
	
	printf("\n");
	printf("Hay nhap vao thang: ");
	scanf("%d",&m);
	
	printf("\n");
	printf("Hay nhap vao nam: ");
	scanf("%d",&y);	
	
	printf("\n");
	printf("-----------------------------------------\n");
	printf("ngay thang nam da nhap la: %d/%d/%d\n",d,m,y);
	printf("-----------------------------------------\n");
	printf("\n");
	
	int dOy = d; //day Of year
	
	for (int i = 1; i < m; i++){
		
		if (i==2){
			if ((y % 4 ==0 && y % 100 != 0) || y % 400 == 0){
			
				dOy += 29;
			}
		
				else {
			
					dOy += 28;
				}
		}
	
		else if (i==4 || i==6 || i==9 || i==11){
				dOy += 30;
				}
				else {
					dOy += 31;
				}
	}
	
	//dOy += d;
	
	printf("Day la ngay thu %d trong nam!\n", dOy);
	
	
	return 0;

}	
	
	
//int isDay = 0;
//	
//	if (m==2){
//		if ((y % 4 ==0 && y % 100 != 0) || y % 400 == 0){
//			
//			isDay = 29;
//		}
//		
//		else isDay = 28;
//	}
//	
//	else if (m==4 || m==6 || m==9 || m==11){
//		isDay = 30;
//	}
//	else isDay = 31;

//	do {
//		
//		if (m==2){
//			if ((y % 4 ==0 && y % 100 != 0) || y % 400 == 0){
//			
//			isDay > 29;
//		}
//		
//		else isDay > 28;
//	}
//	
//	else if (m==4 || m==6 || m==9 || m==11){
//		isDay > 30;
//	}
//	else isDay > 31;)
//	Printf("nga thang ko hop le")
//	} while

