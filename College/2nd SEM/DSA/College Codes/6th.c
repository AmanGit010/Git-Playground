#include <stdio.h>

int main(){
    int i, a[30];
    void sort(int n, int a[]);
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", a[i]);
    }
    
    printf("Elements before sorting them in Ascending order:");
    for (i = 0; i < n; i++)
    {   
        printf("%d\t", a[i]);
    }
    
    sort(n, a);
    printf("Elements after sorting them in Ascending Order:");
    for (i = 0; i < n; i++)
    {
        printf("%d", a[i]);
        get ch();
    }
    
    void sort(int n, int a[], int i, j, temp)

    {
        for (i=0, i<n, i++)
        {
            for (j=i+1; j,n; j++)
            {
                if (a[i]>; a[j])
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
                
            }
            
        }
         
    }
}