
/*
Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 3.3

Input 2:
5
Output 2:
Approximate sum: 4.4

*/
#include <stdio.h>
int main(void) {
    int n, i;
    double sum = 0.0;

    printf("Enter the number of terms: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        fprintf(stderr, "Invalid input\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        int numerator = 2 * i + 1;
        int denominator = 2 * i + 2;
        sum += (double)numerator / denominator;
    }

    printf("Approximate sum: %.1f\n", sum);
    return 0;
}