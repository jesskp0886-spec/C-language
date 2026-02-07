#include <stdio.h>

int main() {
    int rows, cols;

    printf("Enter the array's row size: ");
    scanf("%d", &rows);
    
    printf("Enter the array's column size: ");
    scanf("%d", &cols);

    int arr[rows][cols];

    printf("\nEnter array's elements:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    int rowNum;
    printf("\nEnter row number: ");
    scanf("%d", &rowNum);

    int rowSum = 0;
    printf("Elements of row %d: ", rowNum);
    for(int j = 0; j < cols; j++) {
        printf("%d", arr[rowNum][j]);
        if(j < cols - 1) printf(", ");
        rowSum += arr[rowNum][j];
    }
    printf("\nThe sum of a row is: %d\n", rowSum);

    int colNum;
    printf("\nEnter column number: ");
    scanf("%d", &colNum);

    int colSum = 0;
    printf("Elements of column %d: ", colNum);
    for(int i = 0; i < rows; i++) {
        printf("%d", arr[i][colNum]);
        if(i < rows - 1) printf(", ");
        colSum += arr[i][colNum];
    }
    printf("\nThe sum of column is: %d\n", colSum);
    
    return 0;
}