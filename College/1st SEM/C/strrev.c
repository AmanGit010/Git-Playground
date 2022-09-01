#include <stdio.h>
#include <string.h>

int main(){
    char ac[40];
    printf("Enter string:");
    scanf("%s", ac);
    printf("Reverse of string is: %s", strrev(ac));
}