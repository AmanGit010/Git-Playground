#include <stdio.h>
int main()
{
    float km, m, feet, inch, cm;
    printf("Enter the distance between two cities(in km) - ");
    scanf("%f", &km);
    m = km * 1000;       // since 1km = 1000m
    inch = km * 39370.1; // since 1 km=39370.1inches
    cm = km * 100000;    // since 1km = 100000cm
    printf("\nDistance in metres = %f ", m);
    printf("\nDistance in inches = %f ", inch);
    printf("\nDistance in centimetres = %f ", cm);
    return 0;
}
