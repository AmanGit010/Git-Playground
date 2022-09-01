#include <stdio.h>
int main()
{
    int n, rev = 0, temp, remainder;
    printf("Enter an integer: ");
    scanf("%d", &n);
    temp = n;
    while (n != 0)
    {
        remainder = n % 10;
        rev = rev * 10 + remainder;
        n /= 10;
    }
    printf("Reversed number = %d\n", rev);
    printf("%d", temp);
    return 0;
}
