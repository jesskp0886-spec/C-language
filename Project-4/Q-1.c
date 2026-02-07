#include<stdio.h>

int main() {

    for(int i = 0; i <= 4; i++) {
        for(int j = 1; j <= i+1; j++) {
            printf("4%d ", j);
        }
        printf("\n");
    }

    return 0;
}