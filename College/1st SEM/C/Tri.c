#include <stdio.h>
int main()
{
    int rows;
    printf("Enter the Value of rows: ");
    scanf("%d", &rows);
    for (int i = 1; i <= rows; i++)
    {
        int space;
        for (space = 1; space <= (rows - i); space++)
        {
            printf(" ");
        }
        for (int star = 0; star <= (5 - space); star++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0; 
}