#include <stdio.h>

int main()
{
    int a, b, c, d, e;
    float avg;
    printf("Enter nos.:\n");
    printf("\t");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    avg = (float)(a + b + c + d + e) / 5;
    printf("Average of above nos. is %1f", avg);
    return 0;
}
