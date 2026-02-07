#include<stdio.h>
#include<conio.h>

int main()
{
    int a, b, c;

    printf("Enter the First Value :");
    scanf("%d",&a);
    printf("Enter the Second Value :");
    scanf("%d",&b);
    printf("Enter the Third Value :");
    scanf("%d",&c);

        if(a < b ) {
            if (a < c){
                printf("Minimum value is :%d",a);
            } else{
                printf("Minimum value is :%d",c);
            }
        } else{
                if (b < c){
                printf("Minnimum value is :%d",b);
            } else{
                printf("Minimum value is :%d",c);
            }
        }
    return 0;
}