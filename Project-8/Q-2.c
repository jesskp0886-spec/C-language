#include <stdio.h>

void cubeElements(int (*ptr)[10], int n) {
    int i = 0, j;
    printf("Cubes of all elements:\n");

    while (i < n) {
        j = 0;
        while (j < n) {
            int val = *(*(ptr + i) + j);
            printf("%d ", val * val * val);
            j++;
        }
        printf("\n");
        i++;
    }
}

int main() {
    int n, i = 0, j;
    int a[10][10];

    printf("Enter array's size: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    while (i < n) {
        j = 0;
        while (j < n) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
            j++;
        }
        i++;
    }

    cubeElements(a, n);
    return 0;
}
