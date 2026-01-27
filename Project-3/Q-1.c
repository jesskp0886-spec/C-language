#include <stdio.h>
#include<conio.h>


    // Question : 1
int main() {
    char letter = 'a';
    
    printf("Output: ");
    do {
        printf("%c, ", letter);
        letter = letter + 4;  
    } while (letter <= 'z');
    
    printf("\n");
    return 0;
}