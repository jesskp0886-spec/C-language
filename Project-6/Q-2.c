#include <stdio.h>

int main() {
    char str[100];
    int freq[256] = {0};  
    int length = 0;

    printf("Input: Enter any string: ");
    scanf("%s", str);
    
    while(str[length] != '\0') {
        length++;
    }

    for(int i = 0; i < length; i++) {
        freq[str[i]]++;  
    }

    printf("\nOutput:\n");
    printf("Frequency of each letter:\n");
    
    for(int i = 0; i < length; i++) {
        int alreadyPrinted = 0;
        for(int j = 0; j < i; j++) {
            if(str[j] == str[i]) {
                alreadyPrinted = 1;
                break;
            }
        }
        
        if(!alreadyPrinted) {
            printf("%c => %d\n", str[i], freq[str[i]]);
        }
    }
    
    return 0;
}