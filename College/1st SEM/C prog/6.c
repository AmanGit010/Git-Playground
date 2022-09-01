#include <stdio.h>
// basic concept function
void convert(int n, int b)
{
    int r = n % b;
    if (n == 0)
        return;
    convert(n / b, b);
    if (r < 10)
        printf("%d", r);
    else
        printf("%c", ('A' + (r - 10)));
}
// main
int main()
{
    int num;
    printf("\nEnter a Decimal number = ");
    scanf("%d", &num);
    printf("\nOctal number = ");
    convert(num, 8);
    printf("\n");
    printf("\nHexadecimal number = ");
    convert(num, 16);
    printf("\n");
    return 0;
}
