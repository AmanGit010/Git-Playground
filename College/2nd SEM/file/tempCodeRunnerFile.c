#include <stdio.h>
void bsort(int a[10], int n)
{
    int i, j, temp;
    for (i = 0; i < n; i++)
    {
        int flag = 0;
        for (j = 0; j < n - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                flag = flag + 1;
            }
        }
        if (flag == 0)
        {
            break;
        }
    }
}
int main()
{
    int i, n, a[25];
    printf("Enter Size of Array : ");
    scanf("%d", &n);
    printf("Enter Elements : \n");
    for (i = 0; i < n; i++)
    {
        printf("\na[%d]=", i);
        scanf("%d", &a[i]);
    }
    bsort(a, n); // Function Call

    // Printing
    printf("\nSorted Array : ");
    for (i = 0; i < n; i++)
    {
        printf("%d \t", a[i]);
    }
    return 0;
}