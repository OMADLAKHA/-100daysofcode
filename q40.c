/*
Q40: Write a program to find the 1’s complement of a binary number and print it.
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/
*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a binary number: ");
    scanf("%d",&n);
    int result=0, place=1;
    while(n!=0)
    {
        int digit=n%10;
        if(digit==0)
            result+=place; // Change 0 to 1
        // If digit is 1, do nothing (it becomes 0)
        n=n/10;
        place=place*10;
    }
    printf("1's complement: %d",result);
    return 0;
}