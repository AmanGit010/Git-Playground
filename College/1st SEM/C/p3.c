#include <stdio.h>
int main()
{
    int rows;
    printf("Enter the Value of rows: ");
    scanf("%d", &rows);
    for (int i = 1; i <= rows; i++)
    {
        for (int star = 1; star <= i; star++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}