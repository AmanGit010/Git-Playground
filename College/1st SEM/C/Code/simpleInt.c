#include <stdio.h>

int main()
{
    // Maine hi likha hai
    int p;
    float r, t, interest;
    printf("Enter the principle amount:");
    scanf("%d", &p);
    printf("Enter the rate of interest:");
    scanf("%f", &r);
    printf("Enter the time period:");
    scanf("%f", &t);
    interest = (p * r * t) / 100;
    printf("The simple interest is Rs.%.2f\n", interest);
    float famt = interest + p;
    printf("The final amout to be paid with interest is Rs.%.2f", famt);

    return 0;
}