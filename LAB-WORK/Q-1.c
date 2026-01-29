#include <stdio.h>

int main() {
    char str[100] = "HELLO";
    int i, length;
    char temp;  

    length = 0;
    while (str[length] != '\0') {
        length++;
    }
    
    printf("Before: %s\n", str);
    

    for (i = 0; i < length/2; i++) {
        temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
    
    printf("After: %s\n", str);
    
    return 0;
}