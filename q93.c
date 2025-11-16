/*
Q93: Check if two strings are anagrams of each other.

Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/
#include <stdio.h>
#include <string.h>
int main() {
    char str1[100], str2[100];
    int freq[26] = {0};
    int i, len1, len2;

    // Read input strings
    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    // Remove newline characters if present
    len1 = strlen(str1);
    if(str1[len1 - 1] == '\n') {
        str1[len1 - 1] = '\0';
        len1--;
    }
    len2 = strlen(str2);
    if(str2[len2 - 1] == '\n') {
        str2[len2 - 1] = '\0';
        len2--;
    }

    // If lengths are different, they cannot be anagrams
    if(len1 != len2) {
        printf("Not anagrams\n");
        return 0;
    }

    // Count frequency of each character in str1
    for(i = 0; i < len1; i++) {
        freq[str1[i] - 'a']++;
    }

    // Decrease frequency based on str2
    for(i = 0; i < len2; i++) {
        freq[str2[i] - 'a']--;
    }

    // Check if all frequencies are zero
    for(i = 0; i < 26; i++) {
        if(freq[i] != 0) {
            printf("Not anagrams\n");
            return 0;
        }
    }

    printf("Anagrams\n");
    return 0;
}