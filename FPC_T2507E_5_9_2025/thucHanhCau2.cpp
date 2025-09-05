#include <stdio.h>

int main() {
    
	int n;

    
    do {
        printf("\nNhap so phan tu cho mang a[n]: ");
        scanf("%d", &n);

        if (n <= 0) {
            printf("\nBan phai nhap vao so nguyen va lon hon 0!");
            printf("\n-------------\n");
            while (getchar() != '\n');
        }
    } while (n <= 0);

    int a[n];

    
    for (int i = 0; i < n; i++) {
        printf("\nNhap phan tu thu [%d]: ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("\n-------------\n");

    printf("\nCac so nguyen to trong mang la: ");

    int hasPrime = 0; 

    
    for (int i = 0; i < n; i++) {
        if (a[i] < 2) continue;

        int isPrime = 1; 
        for (int u = 2; u * u <= a[i]; u++) {
            if (a[i] % u == 0) {
                isPrime = 0; 
                break;
            }
        }

        if (isPrime) {
            printf("%d ", a[i]);
            hasPrime = 1;
        }
    }

    
    if (hasPrime) {
        printf("\nNo prime number");
    }

   
    return 0;
}

