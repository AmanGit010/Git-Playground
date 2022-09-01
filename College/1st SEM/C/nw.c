#include <stdio.h>

int main() {
    // a = rows s= space d= stars
    printf("Hello world");
    int a,b,s,d,e;
    printf("Enter numer of rows:\n");
    scanf("%d",&a);
    for(b=1;b<=a;b++)
    {
        for(s=1;s<=(a-b);s++)
        {
        printf("  ");
        }
        for(d=1;d<=(2*b-1);d++)
        {
        printf("* ");
        }
    printf("\n");}
     for(b=a;b>=1;b--)
    {
        for(s=1;s<=a-b;s++)
        {
        printf("");
        }
        for(d=1;d<=(2*b-1);d++)
        {
        printf(" *");
        }
     
    printf("\n");
    }       
    return 0;
}