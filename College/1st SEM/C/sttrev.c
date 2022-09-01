// // C program to demonstrate
// // example of strrev() function

// #include<stdio.h>
// #include<string.h>

// int main()
// {
// char str[50] = "geeksforgeeks";

// printf("The given string is =%s\n",str);

// printf("After reversing string is =%s",strrev(str));

// return 0;
// }

#include <stdio.h>

int main()
{
    char str[40] = "Reversethis";
    printf("before reversing string =%s\n", str);
    printf("After reversing string =%s\n", strrev(str));
    return 0;
}