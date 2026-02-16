#include <stdio.h>

int main() {
    int i, j;

    for (i = 10; i >= 6; i--) {
        int value = i * i;

        for (j = 10; j >= i; j--) {
            printf("%d", value);
            if (j > i) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
