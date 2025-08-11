#include <stdio.h>

int main(){
	
	int n, s, i;
	
	printf("Hay nhap vao mot so n bat ky: ");
	scanf("%d", &n);
	
	s = 0;
	
	while(i<n){
		
		if (n%i == 0){
			
			s = s + i;
		}
		
		i++;
	}	
		if (s==n){
			printf("n %d la hoan hao!", s);
			}
			else {
			
			printf("n khong la hoan hao!");
			}
			
		return 0;	
}
