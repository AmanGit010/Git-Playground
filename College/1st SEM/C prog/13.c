#include <stdio.h>
int main()
{
    int num, i;
    printf("\nPROGRAM TO CALCULATE THE RECIPROCAL OF ANY 'N' NUMBERS.");
    printf("\nEnter N = ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        float a, b;
        printf("\nEnter your number =");
        scanf("%f", &a);
        b = 1 / a;
        printf("reciprocal = %f", b);
    }
    return 0;
}