#include <stdio.h>

int main()
{
    char x;
    printf("Enter something:");
    scanf("%c", &x);
    if (x >= 97 && x <= 122)
    {
        printf("%c is lowercase character", x);
    }
    else if (x >= 65 && x <= 90)
    {
        printf("%c is uppercase character", x);
    }
    else if (x >= 48 && x <= 57)
    {
        printf("%c is numeric character", x);
    }
    else
    {
        printf("%c is alphanumeric character", x);
    }

    return 0;
}