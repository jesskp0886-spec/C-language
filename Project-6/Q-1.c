#include <stdio.h>

int main() {
    char str[100];
    int length = 0;
    int isPalindrome = 1;
    
    printf("Input: Enter any string: ");
    scanf("%s", str);
    
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;  
        }
    }

    while(str[length] != '\0') {
        length++;
    }
    for(int i = 0; i < length; i++) {
        if(str[i] != str[length - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }

    if(isPalindrome) {
        printf("Output: The given string is a Palindrome.\n");
    } else {
        printf("Output: The given string is not a Palindrome.\n");
    }
    
    return 0;
}