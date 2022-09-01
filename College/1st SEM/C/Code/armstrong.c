// #include <stdio.h>
// #include <math.h>

// int main()
// {
//     int num, temp, d, count = 0;
//     int r, c = 0, sum = 0;
//     printf("Enter the number:");
//     scanf("%d", &num);
//     temp = num;
//     while (temp != 0)
//     {
//         c = c / 10;
//         count++;
//     }
//     printf("Length is %d\n", c);
//     num = temp;
//     printf("%d\n", count);

//     printf("Num is %d\n", num);
//     while (num > 0)
//     {
//         r = num % 10;
//         sum = sum + pow(r, num);
//         num = num / 10;
//     }
//     num = temp;
//     printf("After while Num is %d\n", num);
//     printf("Sum is %d\n", sum);
//     if (num == sum)
//     {
//         printf("%d is an armstrong number", num);
//     }
//     else
//     {
//         printf("%d is not an armstrong number", num);
//     }

//     return 0;
// }

#include <stdio.h>
#include <math.h>

int main()
{
    int num, b = 0, c = 0, r, f, sum;
    printf("Enter number:");
    scanf("%d", &num);
    while (num != 0)
    {
        num /= 10;
        b++;
    }
    // printf("%d", b);
    while (num > 0)
    {
        r = num % 10;
        sum = sum + pow(num, b);
        num = num / 10;
    }
    printf("%d", sum);

    return 0;
}
