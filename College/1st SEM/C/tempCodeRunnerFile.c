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

        if (a > c > b)
        {
            printf("Number: %d", a);
        }

        if (b > a > c)
        {
            printf("Number: %d", b);
        }
        if (b > c > a)
        {
            printf("Number: %d", b);
        }

        if (c > a > b)
        {
            printf("Number: %d", c);
        }
        if (c > b > a)
        {
            printf("Number: %d", c);
        }
    }
    return 0;
}