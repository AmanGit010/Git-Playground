#include <stdio.h>
#include <conio.h>

int main()
{
    int a[20], i, n, loc, item;
    int lsearch(int a[], int n, int item);
    printf("Enter number of Elements (<=20) -> ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter element a[%d] ->", i);
        scanf("%d", &a[i]);
    }
    printf("Enter item to search= ");
    scanf("%d", &item);
    loc = lsearch(a, n, item);
    if (loc == -1)
    {
        printf("Item does not exist in array. Rerun the program and enter the correct digits. ");
    }   
    else{
        printf("Item %d\t exist at location = %d", item, loc + 1);
    }
    getch();
}

 int lsearch(int a[], int n, int item)
    {
        int loc = -1, i = 0;
        while (i < n && a[i] != item)
        {
            i = i + 1;
        }
        if (a[i] == item)
        {
            loc = i;
        }
        return (loc);
    }