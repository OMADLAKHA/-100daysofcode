/*
Q92: Find the first repeating lowercase alphabet in a string.

Sample Test Cases:
Input 1:
stress
Output 1:
s

*/
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int freq[26] = {0};
    int i, len;

    // Read input string
    fgets(str, sizeof(str), stdin);

    len = strlen(str);

    // Find the first repeating lowercase alphabet
    for(i = 0; i < len; i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            freq[str[i] - 'a']++;
            if(freq[str[i] - 'a'] == 2) {
                printf("%c\n", str[i]);
                return 0;
            }
        }
    }

    // If no repeating character found
    printf("No repeating lowercase alphabet found\n");
    return 0;
}