#include <stdio.h>

int main() {
    int choice;
    float num1, num2, result;
    
    while(1) {  

        printf("\nSelect your choice:\n");
        printf("Press 1 for +\n");
        printf("Press 2 for -\n");
        printf("Press 3 for *\n");
        printf("Press 4 for /\n");
        printf("Press 5 for %%\n");
        printf("Press 0 for the exit\n");
        
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        if(choice == 0) {
            printf("Exiting the calculator. Goodbye!\n");
            break;
        }

        if(choice < 1 || choice > 5) {
            printf("Invalid choice! Please try again.\n");
            continue;
        }

        printf("Enter the first number: ");
        scanf("%f", &num1);
        
        printf("Enter the second number: ");
        scanf("%f", &num2);

        switch(choice) {
            case 1:
                result = num1 + num2;
                printf("Addition of %.0f and %.0f is %.0f\n", num1, num2, result);
                break;
                
            case 2:
                result = num1 - num2;
                printf("Subtraction of %.0f and %.0f is %.0f\n", num1, num2, result);
                break;
                
            case 3:
                result = num1 * num2;
                printf("Multiplication of %.0f and %.0f is %.0f\n", num1, num2, result);
                break;
                
            case 4:
                if(num2 == 0) {
                    printf("Error! Division by zero is not allowed.\n");
                } else {
                    result = num1 / num2;
                    printf("Division of %.0f and %.0f is %.2f\n", num1, num2, result);
                }
                break;
                
            case 5:
                if((int)num2 == 0) {
                    printf("Error! Modulus by zero is not allowed.\n");
                } else {
                    result = (int)num1 % (int)num2;
                    printf("Modulus of %.0f and %.0f is %.0f\n", num1, num2, result);
                }
                break;
        }
    }
    
    return 0;
}