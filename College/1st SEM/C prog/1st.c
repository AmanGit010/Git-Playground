#include <stdio.h>

int main(){
    float a, b, c, d, e;
    float percs, total, avg;

    printf("Enter your marks in five subjects:");
    scanf("%f%f%f%f%f", &a, &b, &c, &d, &e);

    total = a+b+c+d+e;
    avg = total / 5.0;
    percs = (total / 500.0) * 100;

    printf("Total of 5: %.1f\n", total);
    printf("Average of 5: %.1f\n", avg);
    printf("Percentage of 5: %.1f\n", percs);
    return 0;
}