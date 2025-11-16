/*
Q89: Count frequency of a given character in a string.

Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    char ch;
    int count = 0;

    // Read the input string
    scanf("%s", str);
    // Read the character to be counted
    scanf(" %c", &ch);

    // Calculate the frequency of the character in the string
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    // Print the frequency
    printf("%d\n", count);

    return 0;
}