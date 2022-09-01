#include <stdio.h>
#include <math.h>

int main()
{
    // Wap to find the Area of a circle
    float radius;
    float pi = 3.14;
    printf("Enter radius of circle:");
    scanf("%f", &radius);
    float area = pi * pow(radius, 2);
    printf("Area of circle is %.2f", area);

    return 0;
}