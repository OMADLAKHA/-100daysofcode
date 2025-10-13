/*
Q36: Write a program to find the GCD of two numbers.
Sample Test Cases:
Input 1:
12 18
Output 1:
GCD is 6

Input 2:
7 9
Output 2:
GCD is 1
*/
#include<stdio.h>
int main()
{
    int a, b, gcd;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    for(int i=1;i<=a && i<=b;i++)
    {
        if(a%i==0 && b%i==0)
            gcd=i;
    }
    printf("GCD is %d",gcd);
    return 0
}