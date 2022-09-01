#include <stdio.h>
int func_add(int num_1, int num_2)
{
    return (num_1 + num_2);
}
int main()
{
    int number1, number2, sum;
    printf("Program to add 2 number ");
    printf("\ninput number 1 =");
    scanf("%d", &number1);
    printf("input number 2 =");
    scanf("%d", &number2);
    sum = func_add(number1, number2);
    printf("Sum = %d", sum);
    return 0;
}