#include <stdio.h>

int factorial(int num)
{
    if (num == 0 || num == 1)
    {
        return 1;
    }

    else
    {
        return (num, num * factorial(num - 1));
    }
}

int main()
{
    int num;
    printf("Enter a no. whose Factorial you want: ");
    scanf("%d", &num);
    printf("Factorial of the given no. %d is %d.", num, factorial(num));
    return 0;
}