

#include <stdio.h>

int main(void)
{
    printf("enter any number\n");
    int a;
    scanf("%d", &a);
    for (int i = 0; i <= a; i++)
    {
        for (int j = 0; j < (a - i); j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= (2 * i - 1); j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}