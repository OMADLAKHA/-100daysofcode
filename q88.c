/*
Q88: Replace spaces with hyphens in a string.

Sample Test Cases:
Input 1:
hello world
Output 1:
hello-world

*/
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int i, len;

    // Read input string
    fgets(str, sizeof(str), stdin);

    len = strlen(str);

    // Replace spaces with hyphens
    for(i = 0; i < len; i++) {
        if(str[i] == ' ') {
            str[i] = '-';
        }
    }

    // Output result
    printf("%s", str);

    return 0;
}