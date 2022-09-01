#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter number a: ", a);
    scanf("%d", &a);

    printf("Enter number b: ", b);
    scanf("%d", &b);

    printf("Enter number c: ", c);
    scanf("%d", &c);

    if (a > b > c)
    {
        printf("Number: %d", a);
    }
    else
    {
        printf("Number: %d", a);
    }

    if (b > a > c)
    {
        printf("Number: %d", b);
    }
    else
    {
        printf("Number: %d", b);
    }

    if (c > a > b)
    {
        printf("Number: %d", c);
    }
    else(c > b > a)
    {
        printf("Number: %d", c);
    }
    
    {
        printf("Number: %d", c);
    }

    return 0;
}
