#include <stdio.h>

int main(){

	int n, i;
	
	printf("Hay nhap vao mot so n (n >= 0): ");
	scanf("%d", &n)	;
	
	int f0;   // F0
    int f1;   // F1
    //int i = 2;
    int fn;
    

    while (i <= n-2) {
       
        f0 = f1;
        f1 = fn;
        
        fn = f0 + f1;
        
        printf("cac so f%d la %d\n", i, f1);
        
        i = i + 1;
    }

    printf("Fn = %d\n", fn);
    
    
    return 0;
}
