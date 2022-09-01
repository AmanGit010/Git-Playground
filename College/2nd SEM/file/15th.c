#include <stdio.h>
int main()
{
    int i, j, a[15], size;
    printf("Enter Size of Array : ");
    scanf("%d", &size);

    // Inserting Values in Array
    printf("Enter Elements : \n");
    for (i = 0; i < size; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    // Sorting
    for (i = 0; i < size; i++)
    {
        int min = i;
        for (j = i + 1; j < size; j++)
        {
            if (a[min] > a[j])
            {
                min = j;
            }
        }
        if (min != i)
        {
            int swap = a[i];
            a[i] = a[min];
            a[min] = swap;
        }
    }

    printf("\nSorted Array : \n");
    for (i = 0; i < size; i++)
    {
        printf("%d \t ", a[i]);
    }
    return 0;
}