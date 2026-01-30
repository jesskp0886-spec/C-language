#include<stdio.h>

int main(){

    char a;

    printf("Enter a Character :");
    scanf("%c", &a);

    printf("Entered Character : %c\n",a);
    printf("ASCII Value of character : %d\n", a);

    if(a >= 65 && a <= 90){
        printf("It is a UPPERCASE..!");
    }
    else if(a >= 97 && a <= 122){
        printf("It is a LOWERCASE..!");
    }
    else{
        printf("It's not character..!!!");
    }

    return 0;
}