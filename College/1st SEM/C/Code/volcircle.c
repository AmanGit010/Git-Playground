#include <stdio.h>

int main()
{
    float radius, height;
    float pi = 3.14;
    printf("Enter radius of circle:");
    scanf("%f", &radius);
    printf("Enter height of circle:");
    scanf("%f", &height);
    float vol = pi * (radius * radius) * height;
    printf("Volume of circle is %.2f", vol);
    return 0;
}