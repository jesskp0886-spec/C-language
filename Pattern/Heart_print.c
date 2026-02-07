// #include<stdio.h>

// *                 *
//  *       *       * 
//   *     * *     *
//    *   *   *   *
//     * *     * *
//      *       *

#include <stdio.h>

int main() {
    int size = 6; // controls heart size
    
    // Upper part (two curves)
    for(int i = size/2; i <= size; i += 2) {
        // Left spaces
        for(int j = 1; j < size - i; j += 2) {
            printf(" ");
        }
        
        // Left curve stars
        for(int j = 1; j <= i; j++) {
            printf("*");
        }
        
        // Middle spaces
        for(int j = 1; j <= size - i; j++) {
            printf(" ");
        }
        
        // Right curve stars
        for(int j = 1; j <= i; j++) {
            printf("*");
        }
        
        printf("\n");
    }
    
    // Lower part (inverted triangle)
    for(int i = size; i >= 1; i--) {
        // Leading spaces
        for(int j = i; j < size; j++) {
            printf(" ");
        }
        
        // Stars
        for(int j = 1; j <= (i * 2) - 1; j++) {
            printf("*");
        }
        
        printf("\n");
    }
    
    return 0;
}