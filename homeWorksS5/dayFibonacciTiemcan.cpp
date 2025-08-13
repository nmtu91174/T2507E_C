#include <stdio.h>

int main(){

	int n, i;
	
	printf("Hay nhap vao mot so n (n >= 0): ");
	scanf("%d", &n);
	printf("\n");
	
	int f0 =0;   // F0
    int f1 = 1;   // F1
    //int i = 2;
    int fn = f0 + f1;
    

    while (n>=0) {
       
        f0 = f1;
        f1 = fn;
        
        fn = f0 + f1;
        
		
//        printf("F%d la %d\n", i, f1);
//        
//        i = i + 1;
        
        if(fn>n){
    	printf("\n");
    	printf("\n------------------------\n");
    	printf("Tiem can = %d\n", f1);
    	break;
		}
    }

    
    
    
    return 0;
}
