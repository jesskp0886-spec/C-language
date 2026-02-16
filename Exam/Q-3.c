#include<stdio.h>



    int reversenumber(int n){
    int num1 = n / 100;
    int num2 = (n / 10) % 10;
    int num3 = n % 10;

    int rev = (num3 * 100) + (num2 * 10) + num1;
    return rev;
    }
    
    int main(){

        int number;

        printf("Enter Three Digit Number :");

        scanf("%d",&number);

        if(number < 100 || number > 999){
            printf("Invalid Input..! Enter valid three digit number.\n");
            return 1;
        }

        int reversed = reversenumber(number);

        printf("Reversed Three Digit Number :%d",reversed);
    
    return 0;
}