#include <stdio.h>
int main()
{
    int a[25][25], i, j, sum = 0, r, c;
    printf("Enter number of Rows : ");
    scanf("%d", &r);
    printf("Enter number of Columns : ");
    scanf("%d", &c);

    // Values of Matrix
    printf("\nEnter Elements for Matrix : \n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("Enter Elements %d%d : ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    // Sum of Rows
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            sum = sum + a[i][j];
        }
        printf("\nSum of %d Row : %d \n", i, sum);
        sum = 0;
    }

    // Sum of Columns
    sum = 0;
    for (j = 0; j < c; j++)
    {
        for (i = 0; i < r; i++)
        {
            sum = sum + a[i][j];
        }
        printf("Sum of %d Columns : %d \n", j, sum);
        sum = 0;
    }
    return 0;
}