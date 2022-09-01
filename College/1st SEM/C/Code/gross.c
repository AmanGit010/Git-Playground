#include <stdio.h>

int main()
{
    int sal;
    float hra, da, grossSal;
    printf("Enter your salary in rupees:");
    scanf("%d", &sal);
    hra = sal * 20 / 100;
    da = sal * 40 / 100;
    grossSal = (float)(sal + hra + da);
    printf("Gross salary is Rs%.2f ", grossSal);
    return 0;
}
