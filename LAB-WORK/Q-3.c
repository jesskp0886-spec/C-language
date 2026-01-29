#include <stdio.h>

int main() {
    char str1[100] = "HELLO";
    char str2[100];
    int i;
    
    i = 0;
    while (str1[i] != '\0') {
        str2[i] = str1[i];
        i++;
    }
    str2[i] = '\0'; 
    
    printf("Source string: %s\n", str1);
    printf("Destination string: %s\n", str2);
    
    return 0;
}