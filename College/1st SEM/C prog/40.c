#include <stdio.h>
#include <conio.h>
void swap(int *, int *);
int main()
{
    int a, b;
    int clrscr();
    printf("\nEnter value of a and b:");
    scanf("%d%d", &a, &b);
    printf("\nBefore Swapping a=%d and b=%d", a, b);
    swap(&a, &b);
    printf("\n\nAfter swapping a=%d and b=%d", a, b);
    getch();
    return 0;
}
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}