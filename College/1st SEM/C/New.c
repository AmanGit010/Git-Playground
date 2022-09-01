#include <stdio.h>

int main()
{
     int i=1;
     int n;
     printf("Enter a number: ");
     scanf("%d", &n);
     while (i<=15)
     {
         printf("%d X %d = %d\n", n, i, n*i);
         i++;
     }
    return 0;
}