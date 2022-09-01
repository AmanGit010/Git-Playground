#include <stdio.h>

int main(){
    double a, b;
    printf("Enter no one:");
    scanf("%lf", &a);
    printf("Enter no two:");
    scanf("%lf", &b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("Swap: %.0lf\n", a);
    printf("Swap: %.0lf", b);

    return 0;
}