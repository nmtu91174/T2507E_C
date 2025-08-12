#include <stdio.h>
#include <math.h>

int main(){
	
	int n, temp, countdv, countSole;
	
	do{
		printf("\nNhap vao so nguyen duong n: ");
		scanf("%d", &n);
		
		if(n<=0){
			printf("\n--------\n");
			printf("\nHay nhap vao so nguyen duong (n>0)!\n");
			printf("\n--------\n");
		}	
		
	} while (n<=0);
	
	temp = n;
	countdv = 0;
	countSole = 0;
	
//	while(n!=0){
//		int dv = n%10;
//		c+=1;
//		n/=10;
//	}
	
	for(; n!=0; n/=10){
		
		int dv = n%10;
		countdv+=1;
		
		if(dv%2!=0){
			countSole += 1;
		}
	}

	if(countSole == countdv){
		printf("\nSo nguyen duong n(%d) co toan so le!", temp);
	} else {
			printf("\nSo nguyen duong n(%d) chi co %d so le: ", temp, countSole);
		}
	return 0;
	
}
