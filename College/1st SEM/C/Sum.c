#include <stdio.h>

int sum(int a, int b, int c)
{
    return a+b+c;
}
int main()
{
    int a, b, c, d;
    a=10;
    b=20;
    c=30;
    d=sum(a,b,c);

    printf("The sum of a, b and c is %d\n", d);

    return 0;
}