#include <stdio.h>
int hcf(int n1, int n2);

int main()
{
    int n1, n2;
    printf("Enter first no.:");
    scanf("%d", &n1);
    printf("Enter second no.:");
    scanf("%d", &n2);

    printf("HCF of %d and %d is %d", n1, n2, hcf(n1, n2));

    return 0;
}

int hcf(int n1, int n2)
{
    int hcf = 1;
    int j = (n1 > n2) ? n1 : n2;
    for (int i = 1; i <= j; i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            hcf = i;
        }
    }
    return hcf;
}