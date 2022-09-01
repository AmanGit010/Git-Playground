#include <stdio.h>

int sub(int a, int b, int c, int d)
{
    int subtract=(a-b-c-d);
}
int main() 
{
    int a, b, c, d;
    printf("Enter a number: ", a);
    scanf("%d", &a);

    printf("Enter a number: ", b);
    scanf("%d", &b);
    
    printf("Enter a number: ", c);
    scanf("%d", &c);
    
    printf("Enter a number: ", d);
    scanf("%d", &d);
    
    printf("Result: %d", sub(a,b,c,d));
    return 0;

}