#include <stdio.h>
int main()
{
    int num, digit, sum = 0;
    printf("Enter a Number : ");
    scanf("%d", &num);

    while (num > 0)
    {
        digit = num % 10;
        sum = sum + digit;
        num = num / 10;
    }
    printf("Sum of Digit : %d \n", sum);
    return 0;
}