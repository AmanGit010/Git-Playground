// #include <stdio.h>
// int prime(int x);

// int main()
// {
//     int x;
//     printf("Enter no.:");
//     scanf("%d", &x);
//     int result = prime(x);
//     if (result == 0)
//     {
//         printf("No. is prime");
//     }
//     else
//     {
//         printf("No. is not prime");
//     }
//     return 0;
// }

// int prime(int x)
// {
//     if (x == 0 || x == 1)
//     {
//         return 0;
//     }
//     int i;
//     for (i = 1; i <= x; i++)
//     {
//         if (x % i == 0)
//         {
//             return 0;
//             break;
//         }
//         else
//         {
//             return 1;
//         }
//     }
// }

#include <stdio.h>
int prime(int num);
void main()
{
    int number = 0;
    printf("Enter the Number to check");
    scanf("%d", &number);
    int check = prime(number);
    if (check == 0)
    {
        printf("Not a Prime Number");
    }
    else
    {
        printf("Prime Number");
    }
}
int prime(int num)
{
    int c = 0;
    if (num == 0 || num == 1)
        return 0;
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
            c++;
    }
    if (c == 2)
    {
        return 1;
    }
    else
        return 0;
}