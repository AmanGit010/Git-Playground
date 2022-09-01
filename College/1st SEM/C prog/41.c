#include <stdio.h>
#include <conio.h>
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    int a, b;
    printf("\nEnter first number: ");
    scanf("%d", &a);
    printf("\nEnter second number: ");
    scanf("%d", &b);
    printf("\nBefore swapping, value of a: %d and value of b: %d", a, b);
    swap(&a, &b);
    printf("\nAfter swapping, value of a: %d and value of b: %d", a, b);
    getch();
    return 0;
}
