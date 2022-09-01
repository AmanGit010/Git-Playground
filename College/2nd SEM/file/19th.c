#include <stdio.h>
int main()
{
    int a[30][30], i, j, r, c;
    int row, col, isUpper;
    printf("Enter Number of Rows : ");
    scanf("%d", &r);
    printf("Enter Number of Columns : ");
 scanf("%d", &c);
 printf("\nEnter Elements : \n");
 for (i = 0; i < r; i++)
 {
        for (j = 0; j < c; j++)
        {
 printf("a[%d][%d] : ", i, j);
 scanf("%d", &a[i][j]);
        }
 }

 isUpper = 1;
 for(row = 0; row < r; row++)
 {
        for (col = 0; col < c; col++)
        {
            if (col < row && a[row][col] != 0)
            {
                isUpper = 0;
            }
        }
 }
 
 if(isUpper == 1)
 {
 printf("\nThis is a Upper triangular.\n");
 for(row = 0; row < r; row++)
 {
            for (col = 0; col < c; col++)
            {
                if (a[row][col] != 0)
                {
                    printf("\t%d ", a[row][col]);
                }
                else
                {
                    printf("\t");
                }
            }
            printf("\n\n");
 }
 }
 else
 {
        printf("\nThis is Not a Upper triangular.");
 }
 return 0;
}