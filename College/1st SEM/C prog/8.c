#include <stdio.h>
int main()
{
    int num;
    printf("SHIFT OPERATOR\n");
    printf("Input a num =");
    scanf("%d", &num);
    printf("num << 1 = %d\n", num << 1);
    printf("num >> 1 = %d\n", num >> 1);
    return 0;
}