/*
Q77: Check if the elements on the diagonal of a matrix are distinct.

Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/
#include <stdio.h>
#define MAX_SIZE 100
int main() {
    int matrix[MAX_SIZE][MAX_SIZE];
    int rows, cols;
    int diagonalElements[MAX_SIZE] = {0};
    int isDistinct = 1; // Assume diagonal elements are distinct

    // Read the number of rows and columns
    scanf("%d %d", &rows, &cols);

    // Read the matrix elements
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check for distinct diagonal elements
    for (int i = 0; i < rows && i < cols; i++) {
        int diagElem = matrix[i][i];
        if (diagonalElements[diagElem] == 1) {
            isDistinct = 0; // Found a duplicate diagonal element
            break;
        }
        diagonalElements[diagElem] = 1; // Mark this element as seen
    }

    // Print the result
    if (isDistinct) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}