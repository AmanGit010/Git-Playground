#include <stdio.h>

int main()
{
    int n, i;
    int t1 = 0, t2 = 1;
    int nextTerm = t1 + t2;
    printf("Enter the range:");
    scanf("%d", &n);

    // printf("Fibonacci series %d,%d,", t1, t2);

    for (i = 1; i <= n; i++)
    {
        printf("%d,", t1);
        t1 = t2;
        t2 = nextTerm;
        // printf("%d,\n", nextTerm);
        nextTerm = t1 + t2;
    }

    return 0;
}