#include <stdio.h>
#include<conio.h>

        //Question : 3
int main() {
    int number, original, lastDigit, firstDigit, sum;
    
    printf("Input: Enter any number: ");
    scanf("%d", &number);
    
    original = number;
    
    // Get last digit
    lastDigit = number % 10;
    
    // Get first digit
    while (number >= 10) {
        number = number / 10;
    }
    firstDigit = number;
    
    // Calculate sum
    sum = firstDigit + lastDigit;
    
    printf("Output: The sum of the first and the last digit: %d\n", sum);
    return 0;
}