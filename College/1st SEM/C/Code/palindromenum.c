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
    if (temp == rev)
    {
        printf("%d is a palindrome", temp);
    }
    else
    {
        printf("%d is not a palindrome", temp);
    }
    return 0;
}

// calculate the distance in metre, centimetre, inches....taking the input in kilometer.
// Convert the temperature in celsius.....taking input in fahrenheit.