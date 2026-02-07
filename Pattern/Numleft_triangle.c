#include <stdio.h>

int main() {

    int n, num = 1;

    printf("Enter the Number :");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            printf("%d ", num++);
        }
        printf("\n");
    }
}

1                                                1
2 3                                            3 2
4 5 6                                        6 5 4
7 8 9 10                                  10 9 8 7
11 12 13 14 15                      15 14 13 12 11



1                                                1
            1
          3 2
        6 5 4
     10 9 8 7
15 14 13 12 11