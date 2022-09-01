#include <stdio.h>
int main()
{
    float p, r, t, SI;
    printf("PROGRAM TO CALCUATE SIMPLE INTEREST\n");
    printf("\nEnter your principal amount = ");
    scanf("%f", &p);
    printf("\nEnter your rate of interest (ROI) = ");
    scanf("%f", &r);
    printf("\nEnter your time period = ");
    scanf("%f", &t);
    SI = (p * r * t) / 100;
    printf("\nSimple interest = %.2f", SI);
    return 0;
}