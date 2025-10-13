#include <stdio.h>
#define MAX 10000
int memo[MAX];

int fib(int n){
    if (n==1 || n==2){
        return 1;
    }
    if (memo[n] != 0) {
        return memo[n];
    }
    memo[n] = fib(n-1) + fib(n-2);
    return memo[n];
}

int main(){
    int n;
    scanf("%d",&n);
    for (int i = 0; i < MAX; i++) memo[i] = 0;
    printf("%d\n", fib(n));
    return 0;
}
