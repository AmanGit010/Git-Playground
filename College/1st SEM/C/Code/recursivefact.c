#include <stdio.h>
int factorial(int x);

int main()
{
    int x = 5;
    printf("Factorial of %d is %d", x, factorial(x));
    return 0;
}

int factorial(int x)
{
    if (x == 0 || x == 1)
    {
        return 1;
    }
    else
    {
        return x * fact(x - 1);
    }
}