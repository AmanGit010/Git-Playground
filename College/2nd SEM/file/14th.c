#include <stdio.h>
int main()
{
    int num, sum = 0, digit, temp;
    printf("Enter a Number : ");
    scanf("%d", &num);
    temp = num;

    while (num > 0)
    {
        digit = num % 10;
        sum = sum * 10 + digit;
        num = num / 10;
    }

    if (temp == sum)
    {
        printf("Number is Palindrome. \n");
    }
    else
    {
        printf("Number is Not Palindrome. \n");
    }
    return 0;
}