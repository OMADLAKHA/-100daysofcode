/*
Q80: Multiply two matrices.

Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12
Output 1:
58 64
139 154

*/
#include <stdio.h>
#define MAX_SIZE 100
int main() {
    int matrixA[MAX_SIZE][MAX_SIZE];
    int matrixB[MAX_SIZE][MAX_SIZE];
    int result[MAX_SIZE][MAX_SIZE] = {0};
    int rowsA, colsA, rowsB, colsB;

    // Read dimensions of first matrix
    scanf("%d %d", &rowsA, &colsA);
    // Read elements of first matrix
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsA; j++) {
            scanf("%d", &matrixA[i][j]);
        }
    }

    // Read dimensions of second matrix
    scanf("%d %d", &rowsB, &colsB);
    // Read elements of second matrix
    for (int i = 0; i < rowsB; i++) {
        for (int j = 0; j < colsB; j++) {
            scanf("%d", &matrixB[i][j]);
        }
    }

    // Check if multiplication is possible
    if (colsA != rowsB) {
        printf("Matrix multiplication not possible\n");
        return 0;
    }

    // Perform matrix multiplication
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            for (int k = 0; k < colsA; k++) {
                result[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }

    // Print the resulting matrix
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}