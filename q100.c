/*
Q100: Print all sub-strings of a string.

Sample Test Cases:
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c

*/
#include <stdio.h>
#include <string.h>
void printSubstrings(char str[]) {
    int n = strlen(str);
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            for (int k = i; k <= j; k++) {
                putchar(str[k]);
            }
            putchar(',');
        }
    }
    putchar('\n');
}
int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);
    // Remove trailing newline if present
    str[strcspn(str, "\n")] = '\0';
    printSubstrings(str);
    return 0;
}