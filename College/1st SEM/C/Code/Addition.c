// Write a program to accept four numbers from the user and perform following operations:
// i) Addition
// ii) Product

#include <stdio.h>

int main()
{
    int a, b, c, d, e, sum;
    printf("Enter nos.:\n");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    sum = a + b + c + d + e;
    printf("Total sum is %d\n", sum);

    return 0;
}

// #include <stdio.h>

// int main() {
//     int a, b, c, d, e, prod;
//     printf("Enter nos.:\n");
//     scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
//     prod = (a * b * c * d * e);
//     printf("Product of the numbers is %d", prod);

//     return 0;
// }