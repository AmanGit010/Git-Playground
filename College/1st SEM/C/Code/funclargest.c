#include <stdio.h>
int largest(int x, int y, int z);

int main()
{
    int x, y, z;
    printf("Enter x:");
    scanf("%d", &x);
    printf("Enter y:");
    scanf("%d", &y);
    printf("Enter z:");
    scanf("%d", &z);
    printf("Largest number is %d", largest(x, y, z));
    return 0;
}

int largest(int x, int y, int z)
{
    if (x >= y && x >= z)
    {
        return x;
    }
    else if (y >= x && y >= z)
    {

        return y;
    }
    else
    {
        return z;
    }
}