#include <stdio.h>

int main() {
    char str[100];
    int i = 0, length = 0;

    printf("Enter a string: ");
    scanf("%c", str);  

    while (str[i] != '\0') {
        length++;
        i++;
    }

    printf("The length of the string is: %d\n", length);

    return 0;
}
