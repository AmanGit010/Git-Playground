#include <stdio.h>

int main()
{
    int x, y;
    printf("Enter two numbers:\n");
    scanf("%d%d", &x, &y);
    if (x > y)
    {
        printf("%d is greater than %d", x, y);
    }
    if (y > x)
    {
        printf("%d is greater than %d", y, x);
    }
    if (x == y)
    {
        printf("%d is equal to %d", x, y);
    }
    return 0;
}