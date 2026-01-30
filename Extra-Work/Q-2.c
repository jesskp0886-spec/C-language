#include <stdio.h>

int main() {
    char str[100];
    int i, count = 0;
    
    printf("Enter a string: ");
    scanf("%s", str);
    
    printf("Original string: %s\n", str);
    printf("Vowels found: ");
    
    i = 0;
    while (str[i] != '\0') {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || 
            str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || 
            str[i] == 'O' || str[i] == 'U') {
            
            printf("%c ", str[i]);  
            count++;                 
        }
        i++;
    }
    
    printf("\nTotal vowels: %d\n", count);
    
    return 0;
}
