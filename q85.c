/*
Q85: Reverse a string.

Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/
#include <stdio.h>
#include <string.h>
int main() {
    char str[1000];
    int length = 0;
    int i;

    // Read input string
    fgets(str, sizeof(str), stdin);

    // Calculate length of the string manually
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    // Reverse the string
    for (i = length - 1; i >= 0; i--) {
        putchar(str[i]);
    }
    putchar('\n');

    return 0;
}