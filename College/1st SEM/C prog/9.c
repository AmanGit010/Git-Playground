#include <stdio.h>
int main()
{
    int i = 0, n, square;
    printf("Please Enter any integer Value : \n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        square = i * i;
        printf("%d\n", square);
    }
    return 0;
}
