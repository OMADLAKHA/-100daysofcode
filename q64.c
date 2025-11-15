/*
Q64: Find the digit that occurs the most times in an integer number.

Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/
#include <stdio.h>
int main() {
    long long num;
    printf("Enter an integer number: ");
    scanf("%lld", &num);
    
    int count[10] = {0};
    
    // Counting occurrences of each digit
    while (num > 0) {
        int digit = num % 10;
        count[digit]++;
        num /= 10;
    }
    
    int max_count = 0;
    int result_digit = 0;
    
    // Finding the digit with the maximum occurrences
    for (int i = 0; i < 10; i++) {
        if (count[i] > max_count) {
            max_count = count[i];
            result_digit = i;
        }
    }
    
    printf("The digit that occurs the most is: %d\n", result_digit);
    
    return 0;
}