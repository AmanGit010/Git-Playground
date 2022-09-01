#include <stdio.h>
int BSearch(int a[], int n, int num)
{
    int l = 0, r = n - 1, mid = 0, loc = -1;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (num == a[mid])
        {
            loc = mid;
            break;
        }
        else if (num > a[mid])
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    return loc;
}
int main()
{
    int i, n, num, a[25], loc;
    printf("Enter size of Array : ");
    scanf("%d", &n);

    // Inserting Values
    printf("Enter Values in Array : \n");
    for (i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    printf("Enter number to Search : ");
    scanf("%d", &num);
    loc = BSearch(a, n, num); // Function Calling
    if (loc == -1)
    {
        printf("Number is not present");
    }
    else
    {
        printf("Item is present at %d index \n", loc);
    }
    return 0;
}