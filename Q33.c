/*
Q33: Write a program to check if a number is an Armstrong number.
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong
*/
#include<stdio.h>
#include<math.h>
int main()
{
    int n, sum=0, temp, digits=0;
    printf("Enter a number:");
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
        temp/=10;
        digits++;
    }
    temp=n;
    while(temp!=0)
    {
        int digit=temp%10;
        sum+=pow(digit,digits);
        temp/=10;
    }
    if(sum==n)
        printf("Armstrong");
    else
        printf("Not Armstrong");
    return 0;
}