#include <stdio.h>

int main()
{
    float temp;
    printf("Enter the temperature in fahrenheit:");
    scanf("%f", &temp);
    float cel = (temp - 32) * 5 / 9;
    printf("Temperature in celsius is %.3f", cel);
    return 0;
}