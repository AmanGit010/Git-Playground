#include <stdio.h>

int main(){
    char str[52];
    printf("Enter a string: ");
    gets(str);
    printf("%s\n", str);
    puts(str);

    return 0;
}