#include <stdio.h>

//	Bac thue	TNTT/thang (trieu dong)	Thue suat (%)	Tinh so thue phai nop Cach 1		Cach 2
//	1			den 5					5				0 trd + 5% TNTT						5% TNTT
//	2			Tren 5 den 10			10				0,25 trd + 10% TNTT tren 5 trd		10% TNTT - 0,25 trd
//	3			Tren 10 den 18			15				0,75 trd + 15% TNTT tren 10 trd		15% TNTT - 0,75 trd
//	4			Tren 18 den 32			20				1,95 trd + 20% TNTT 18 trd			20% TNTT - 1,65 trd
//	5			Tren 32 den 52			25				4,75 trd + 25% TNTT tren 32 trd		25% TNTT - 3,25 trd
//	6			Tren 52 den 80			30				9,75 trd + 30% TNTT tren 52 trd		30% TNTT - 5,85 trd
//	7			Tren 80					35				18,15 trd + 35% TNTT tren 80 trd	35% TNTT - 9,85 trd

int main(){
	
	float m;
	float t;
	float tax;
	
	printf("Hay nhap so tien thu nhap ca nhan (trieu dong): ");
	scanf("%f", &m);
	
	printf("\n");
	printf("Thu nhap ca nhan la: %.3f trieu dong\n", m);
	
	printf("\n");
	
	t = m-11;
	
	printf("Thu nhap phai nop thue la: %.3f trieu dong\n", t);

	
	if (m<=11){
		
		printf("Ban chua phai dong thue!");
	}	
		else 
			if (t<=5){
				tax = t*0.05;
				printf("So thue phai nop la: %.3f trieu dong", tax);
			}
		else 
			if (t<=10){
				tax = (t-5)*0.1 + 0.25;
				printf("So thue phai nop la: %.3f trieu dong", tax);
			}
		else
			if (t<=18){
				tax = (t-10)*0.15 + 5*0.1 + 0.25;
				// tax = (TNTT - muc cao nhat cua bac truoc) * % thue suat + (muc cao nhat trong bac truoc - muc thap nhat trong bac truoc)* % thue suat bac truoc + so tien phai nop cua cac bac truoc nua
				printf("So thue phai nop la: %.3f trieu dong", tax);
			}				
		else
			if (t<=32){
				tax = (t-18)*0.2 + 8*0.15 + 0.75;
				printf("So thue phai nop la: %.3f trieu dong", tax);
			}
		else
			if (t<=52){
				tax = (t-32)*0.25 + 14*0.2 + 1.95;
				printf("So thue phai nop la: %.3f trieu dong", tax);
			}
		else
			if (t<=80){
				tax = (t-52)*0.3 + 20*0.25 + 4.75;
				printf("So thue phai nop la: %.3f trieu dong", tax);
			}
		else {
			tax = (t-80)*0.35 + 28*0.3 + 9.75;
			printf("So thue phai nop la: %.3f trieu dong", tax);
		}
			 
		return 0;

}
	
