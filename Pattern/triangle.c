#include<stdio.h>


int main(){

        int i, j, k;

        // printf("Enter Your Choice for Rows :");
        // scanf("%d",rows);

        for(int i=1; i<=5; i++){                                                            //Outerloop runs for rows //

            for(int k=1; k<=5-i; k++){                                                      //this loop runs for space in triangle//
                printf(" ");
            }
            for(int j=1; j<=i;j++){                                                         //this loop runs for inner loop to print'*'// 
                printf("* ");
            }
            printf("\n");
        }
        return 0;
}