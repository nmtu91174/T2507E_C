#include <stdio.h>

int main(){
	
	int number;
	
		do {
			printf("Nhap vao mot so: ");
			scanf("%d", &number);
			printf("\n");
			
			if (number > 9 || number < 0 ){
			printf("So chi tu 0 den 9!\n");
			printf("Hay Nhap Lai: \n");
			printf("\n");
			}
		} while (number > 9 || number < 0 );
	
	switch (number){
		
		case 0:
			printf("------\n");
			printf("KHONG\n");
			printf("------\n");
			break;
		case 1:
			printf("------\n");
			printf("MOT\n");
			printf("------\n");
			break;
		case 2:
			printf("------\n");
			printf("HAI\n");
			printf("------\n");
			break;
		case 3:
			printf("------\n");
			printf("BA\n");
			printf("------\n");
			break;
		case 4:
			printf("------\n");
			printf("BON\n");
			printf("------\n");
			break;
		case 5:
			printf("------\n");
			printf("NAM\n");
			printf("------\n");
			break;
		case 6:
			printf("------\n");
            printf("SAU\n");
            printf("------\n");
            break;
        case 7:
        	printf("------\n");
            printf("BAY\n");
            printf("------\n");
            break;
        case 8:
        	printf("------\n");
            printf("TAM\n");
            printf("------\n");
            break;
        case 9:
        	printf("------\n");
            printf("CHIN\n");
            printf("------\n");
            break;
              
	}
		
	return 0;
}
