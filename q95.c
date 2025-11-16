/*
Q95: Check if one string is a rotation of another.

Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/
#include <stdio.h>
#include <string.h>
int isRotation(char str1[], char str2[]) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    // Check if lengths are equal
    if (len1 != len2) {
        return 0; // Not rotation
    }

    // Create a new string by concatenating str1 with itself
    char temp[2 * len1 + 1];
    strcpy(temp, str1);
    strcat(temp, str1);

    // Check if str2 is a substring of the concatenated string
    return strstr(temp, str2) != NULL;
}