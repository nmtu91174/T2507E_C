#include <stdio.h>

int main(){
	
	int n;
	do{
		printf("\nHay nhap vao mot so n(n>0): ");
		scanf("%d", &n);
		
		if(n<0){
			printf("\nNhap sai du lieu!");
		}
	}while(n<0);
	
	if(n==0){
		printf("\nSo can tim f0 = 0");
	}else if(n==1){
		printf("\nSo can tim f1 = 1");
		}else {
		 
				int f0 = 0;
				int f1 = 1;
				
								
				printf("cac so f0 la 0\n");
				printf("cac so f1 la 1\n");
										
				for(int i=2; i<n; i++){
					
					int fn = f0 + f1;
						f0 = f1;
						f1 = fn;
										
					printf("cac so f%d la %d\n", i, f1);
				}
				printf("fn = %d\n", f1);
			}
			
			
}

//int main(){
//
//	int n, i;
//	
//	printf("Hay nhap vao mot so n (n >= 0): ");
//	scanf("%d", &n)	;
//	
//	int f0 = 0;   // F0
//    int f1 = 1;   // F1
//    //int i = 2;
//    int fn;
//    
//
//    while (i <= n-2) {
//       
//        f0 = f1;
//        f1 = fn;
//        
//        fn = f0 + f1;
//        
//        printf("cac so f%d la %d\n", i, f1);
//        
//        i = i + 1;
//    }

//		printf("cac so f0 la 0\n");
//		printf("cac so f1 la 1\n");
//			
//			for(int i=3; i<n; i++){
//				f0 = f1;
//				f1 = fn;
//				
//				fn = f0 + f1;
			//printf("cac so f%d la %d\n", i, f1);
	   	//}
//
//    printf("Fn = %d\n", fn);
//    
//    
//    return 0;
//}
