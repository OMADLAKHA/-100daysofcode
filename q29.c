#include<stdio.h>
#include<string.h>

int main() {
    char str[]="Hello world !";
  
    fgets(str,100,stdin);
    printf("%s", str);
    return 0;
  
}