#include <stdio.h>

int main() {
    char str[100];
    int i, length = 0;
    char temp[100];  

    printf("Before:");
    scanf("%s",str);


    while (str[length] != '\0') {
        length++;
    }
    
    for (i = 0; i < length; i++) {
        temp[i] = str[length - i - 1];
    }

    temp[length] = '\0';

    printf("After: %s\n", temp);
    
    return 0;
}