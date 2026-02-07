#include <stdio.h>

int main() {
    int n, i;
    
    // Input array size
    printf("Enter the array's size: ");
    scanf("%d", &n);
    
    int a[n];
    
    // Input array elements
    printf("\nEnter array's elements:\n");
    for(i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    
    // Find and display negative elements
    printf("\nOutput:\n");
    printf("Negative elements from an Array: ");
    
    int first = 1;  // Flag to handle comma spacing
    for(i = 0; i < n; i++) {
        if(a[i] < 0) {
            if(!first) {
                printf(", ");
            }
            printf("%d", a[i]);
            first = 0;
        }
    }
    
    printf("\n");
    
    return 0;
}