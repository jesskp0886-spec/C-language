#include<stdio.h>

int main(){

    int n;
    int case_check;

    printf("Enter the number :");
    scanf("%d", &n);

    case_check = (n > 0) - (n < 0);

    switch (case_check) {
        case 1 :
            printf("%d is number is positive.\n",n);
            break;
        case -1 :
            printf("%d is number is negative.\n",n);
            break;
        case 0 :
            printf("%d is number is zero.\n",n);
            break;
    }
    return 0;
}