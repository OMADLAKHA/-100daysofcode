/*
Q94: Find the longest word in a sentence.

Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/
#include <stdio.h>
#include <string.h>
int main() {
    char sentence[1000];
    char longestWord[100] = "";
    char currentWord[100];
    int maxLength = 0;

    // Read input sentence
    fgets(sentence, sizeof(sentence), stdin);

    // Tokenize the sentence into words
    char *token = strtok(sentence, " \n");
    while(token != NULL) {
        int length = strlen(token);
        if(length > maxLength) {
            maxLength = length;
            strcpy(longestWord, token);
        }
        token = strtok(NULL, " \n");
    }

    // Print the longest word
    printf("%s\n", longestWord);
    return 0;
}