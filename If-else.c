#include <stdio.h>

int main() {
    int a, b;

    printf("Enter value of first number:\t");
    scanf("%d", &a);

    printf("Enter value of second number:\t");
    scanf("%d", &b);

    if (a < b) {
        printf("Minimum value is: %d", a);
    } else {
        printf("Minimum value is: %d", b);
    }

    return 0;
}
