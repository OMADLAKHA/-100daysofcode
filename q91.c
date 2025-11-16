/*
Q91: Remove all vowels from a string.

Sample Test Cases:
Input 1:
education
Output 1:
dctn

*/
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int i, j = 0, len;

    // Read input string
    fgets(str, sizeof(str), stdin);

    len = strlen(str);

    // Remove vowels from the string
    for(i = 0; i < len; i++) {
        if(str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' &&
           str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U') {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';

    // Output result
    printf("%s", str);

    return 0;
}