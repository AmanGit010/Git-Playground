#include <stdio.h>
int main()
{
    int i, j, size, temp, a[25];
    printf("Enter size of Array : ");
    scanf("%d", &size);

    // Inserting Values
    printf("Enter Elements : \n");
    for (i = 0; i < size; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    // Sorting
    for (i = 0; i < size; i++)
    {
        temp = a[i];
        j = i - 1;
        while ((j >= 0) && (a[j] > temp))
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = temp;
    }

    // Printing
    printf("Sorted Array : ");
    for (i = 0; i < size; i++)
    {
        printf("%d \t", a[i]);
    }
    return 0;
}