/*
Q79: Perform diagonal traversal of a matrix.

Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/
#include <stdio.h>
#define MAX_SIZE 100
int main() {
    int matrix[MAX_SIZE][MAX_SIZE];
    int rows, cols;

    // Read the number of rows and columns
    scanf("%d %d", &rows, &cols);

    // Read the matrix elements
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Perform diagonal traversal
    for (int d = 0; d < rows + cols - 1; d++) {
        int r, c;
        if (d < cols) {
            r = 0;
            c = d;
        } else {
            r = d - cols + 1;
            c = cols - 1;
        }

        while (r < rows && c >= 0) {
            printf("%d ", matrix[r][c]);
            r++;
            c--;
        }
    }
    printf("\n");

    return 0;
}