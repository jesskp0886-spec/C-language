#include<stdio.h>

int main(){

    int i;
    
    printf("ASCII TABLE (0-127)\n");
    printf("===================\n\n");
    printf("ASCII  Character\n");
    printf("-----  ---------\n");
    
    for (i = 0; i <= 127; i++) {
        if (i >= 32 && i <= 126) {  // Printable characters
            printf("%d    %c\n", i, i);
        }
        else {  // Non-printable characters
            printf("%d    [Non-printable]\n", i);
        }
    }

    return 0;
}