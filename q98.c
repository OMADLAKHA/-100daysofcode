/*
Q98: Print initials of a name with the surname displayed in full.

Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
#include <stdio.h>
#include <string.h>
int main() {
    char name[100];
    fgets(name, sizeof(name), stdin);

    int len = strlen(name);
    int i;
    // Print initials for all but the last word
    for (i = 0; i < len; i++) {
        if (i == 0 || (name[i - 1] == ' ' && name[i] != ' ')) {
            // Check if it's the start of the last word
            int j = i;
            while (j < len && name[j] != ' ') {
                j++;
            }
            if (j < len) { // Not the last word
                printf("%c.", name[i]);
            } else {
                break; // Reached the last word
            }
        }
    }
    // Print the last word (surname)
    while (i < len && name[i] == ' ') i++; // Skip spaces
    while (i < len) {
        putchar(name[i]);
        i++;
    }
    printf("\n");
    return 0;
}