#include <stdio.h>

int main()
{
    int num;
    while (1)
    {

        printf("Enter any number between 1 - 7:");
        scanf("%d", &num);
        if (num == 1)
        {
            printf("Day1 is Monday!");
        }
        else if (num == 2)
        {
            printf("Day2 is Tuesday!");
        }
        else if (num = 3)
        {
            printf("Day3 is Wednesday!");
        }
        else if (num == 4)
        {
            printf("Day4 is Thursday!");
        }
        else if (num == 5)
        {
            printf("Day5 is Friday!");
        }
        else if (num == 6)
        {
            printf("Day6 is Saturday!");
        }
        else if (num == 7)
        {
            printf("Day7 is Sunday!");
        }
        else
        {
            printf("Enter a valid value!");
            break;
        }
    }

    return 0;
}
