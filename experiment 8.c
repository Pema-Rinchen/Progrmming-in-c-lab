#include <stdio.h>

#define MAX_SIZE 100

int main()
{
    int matrixA[MAX_SIZE][MAX_SIZE], matrixB[MAX_SIZE][MAX_SIZE], result[MAX_SIZE][MAX_SIZE];
    int row, col, i, j;
    char op;

    printf("Enter operation (+, -, T): ");
    scanf("%c", &op);

    printf("Enter number of rows and columns for matrices: ");
    scanf("%d%d", &row, &col);

    printf("Enter elements of matrix A:\n");
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            scanf("%d", &matrixA[i][j]);
        }
    }

    printf("Enter elements of matrix B:\n");
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            scanf("%d", &matrixB[i][j]);
        }
    }

    switch(op) {
        case '+':
            printf("Matrix A + B:\n");
            for(i = 0; i < row; i++) {
                for(j = 0; j < col; j++) {
                    result[i][j] = matrixA[i][j] + matrixB[i][j];
                    printf("%d ", result[i][j]);
                }
                printf("\n");
            }
            break;
        case '-':
            printf("Matrix A - B:\n");
            for(i = 0; i < row; i++) {
                for(j = 0; j < col; j++) {
                    result[i][j] = matrixA[i][j] - matrixB[i][j];
                    printf("%d ", result[i][j]);
                }
                printf("\n");
            }
            break;
        case 'T':
        case 't':
            printf("Transpose of matrix A:\n");
            for(i = 0; i < col; i++) {
                for(j = 0; j < row; j++) {
                    printf("%d ", matrixA[j][i]);
                }
                printf("\n");
            }
            break;
        default:
            printf("Invalid operation.\n");
    }

    return 0;
}
