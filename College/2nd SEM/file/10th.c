#include <stdio.h>
int main()
{
    int i, j, n, a[25], num;
    printf("Enter number of Elements : ");
    scanf("%d", &n);
 printf("Enter Elements for Array : \n");

 for(i = 0; i < n; i++)
 {
        printf("a[%d]=", i);
        scanf("%d", &a[i]);
 }
 printf("Enter number to Search : ");
 scanf("%d", &num);

 //Searching
 for (i = 0; i < n; i++)
 {
        if (a[i] == num)
        {
            printf("Element found at %d Index. \n", i);
            break;
        }
 }
 if(i == n)
 {
        printf("Element is not Present");
 }
 return 0;
}