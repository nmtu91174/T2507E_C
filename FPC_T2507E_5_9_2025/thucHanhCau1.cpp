#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100];
    int len1, len2;
    int i, j, found = 0;

    
    printf("Nhap s1: ");
    scanf("%s", s1);

    printf("Nhap s2: ");
    scanf("%s", s2);

    len1 = strlen(s1);
    len2 = strlen(s2);

    
    if (len1 <= len2) {
        for (i = 0; i <= len2 - len1; i++) {
            for (j = 0; j < len1; j++) {
                if (s2[i + j] != s1[j]) break;
            }
            if (j == len1) {
                found = 1;
                break;
            }
        }
    }
    
    else {
        for (i = 0; i <= len1 - len2; i++) {
            for (j = 0; j < len2; j++) {
                if (s1[i + j] != s2[j]) break;
            }
            if (j == len2) {
                found = 1;
                break;
            }
        }
    }

    if (found)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}

