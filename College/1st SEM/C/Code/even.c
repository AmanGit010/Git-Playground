#include <stdio.h>

int main()
{

    int x;
    printf("Enter no.");
    scanf("%d", &x);
    if (x % 2 == 0)
    {
        printf("%d is an even number", x);
    }
    return 0;
}
