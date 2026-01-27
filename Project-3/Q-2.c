#include <stdio.h>
#include<conio.h>

        // Question : 2
int main() {
    int number, count = 0;
    
    printf("Input: Enter any number: ");
    scanf("%d", &number);
    
    // Handle negative numbers
    if (number < 0) {
        number = -number;
    }
    
    // Handle zero case
    if (number == 0) {
        count = 1;
    }
    
    // Count digits
    while (number > 0) {
        number = number / 10;  // Remove last digit
        count++;               // Increase count
    }
    
    printf("Output: Total number of digits: %d\n", count);
    return 0;
}