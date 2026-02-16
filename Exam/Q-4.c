#include <stdio.h>

void squareElements(int *ptr, int size) {
    for (int i = 0; i < size; i++) {
        *(ptr + i) = (*(ptr + i)) * (*(ptr + i));
    }
}

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid size.\n");
        return 1;
    }

    int arr[n];

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    squareElements(arr, n);

    printf("Array after squaring each element: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
