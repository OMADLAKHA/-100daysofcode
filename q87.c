/*
Q87: Count spaces, digits, and special characters in a string.

Sample Test Cases:
Input 1:
a b1&2
Output 1:
Spaces=1, Digits=2, Special=1

*/
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int spaces = 0, digits = 0, special = 0;
    int i, len;

    // Read input string
    scanf("%s", str);

    len = strlen(str);

    // Count spaces, digits, and special characters
    for(i = 0; i < len; i++) {
        if(str[i] == ' ') {
            spaces++;
        } else if(str[i] >= '0' && str[i] <= '9') {
            digits++;
        } else if((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z')) {
            special++;
        }
    }

    // Output result
    printf("Spaces=%d, Digits=%d, Special=%d\n", spaces, digits, special);

    return 0;
}