/*
Q90: Toggle case of each character in a string.

Sample Test Cases:
Input 1:
Hello
Output 1:
hELLO

*/
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int i, len;

    // Read input string
    fgets(str, sizeof(str), stdin);

    len = strlen(str);

    // Toggle case of each character
    for(i = 0; i < len; i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 'a' + 'A';
        } else if(str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] - 'A' + 'a';
        }
    }

    // Output result
    printf("%s", str);

    return 0;
}