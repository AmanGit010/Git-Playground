// #include <stdio.h>

// int main()
// {

//     while (1)
//     {
//         int c;
//         printf("\n1. To convert distance in METRE!\n");
//         printf("2. To convert distance in CENTIMETRE!\n");

//         printf("3. To convert distance in INCHES!\n");
//         printf("4. To terminate the program\n");
//         scanf("%d", &c);

//         if (c == 1)
//         {
//             int n;
//             printf("Enter the distance in KMS: ");
//             scanf("%d", &n);
//             int m;
//             m = n * 1000;
//             printf("Distance in m is: ");
//             printf("%d", m);
//         }
//         else if (c == 2)
//         {
//             int n;
//             printf("Enter the distance in KMS: ");
//             scanf("%d", &n);

//             int cm;
//             cm = n * 100000;
//             printf("\nDistance in cm is: ");
//             printf("%d", cm);
//         }
//         else if (c == 3)
//         {
//             int n;
//             printf("Enter the distance in KMS: ");
//             scanf("%d", &n);

//             int inch;
//             inch = n * 39370.1;
//             printf("\nDistance in inches is: ");
//             printf("%d", inch);
//         }
//         else if (c == 4)
//         {
//             printf("Program terminated successfully........!");
//             break;
//         }
//     }
//     return 0;
// }

// int main()
// {
//     int ans;
//     printf("Do u want to run the program? 1 or else? ");
//     scanf("%d", &ans);
//     int opt = 0;
//     while (ans == 1)
//     {
//         printf("\nSelect an option: \n");
//         printf("1. Distance in m ");
//         printf("\n2. Distance in cm  ");
//         printf("\n3. Distance in inches  ");
//         printf("\n4. Exit the program\n");
//         scanf("%d", &opt);
//         int n;
//         if (opt == 1)
//         {
//             int m;
//             printf("\nEnter the distance in KMS: ");
//             scanf("%d", &n);
//             m = n * 1000;
//             printf("\nDistance in m is: ");
//             printf("%d\n", m);
//         }
//         else if (opt == 2)
//         {
//             int cm;
//             printf("\nEnter the distance in KMS: ");
//             scanf("%d", &n);
//             cm = n * 100000;
//             printf("\nDistance in cm is: ");
//             printf("%d", cm);
//         }
//         else if (opt == 3)
//         {
//             int inch;
//             printf("\nEnter the distance in KMS: ");
//             scanf("%d", &n);
//             inch = n * 39370.1;
//             printf("\nDistance in inches is: ");
//             printf("%d", inch);
//         }
//         else if (opt == 4)
//         {
//             ans = 0;
//             printf("\n Program terminated succesfully");
//         }
//     }

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int a, b, c;
//     printf("Enter no.:");
//     scanf("%d%d%d", &a, &b, &c);
//     int e = calsum(a, b, c);
//     printf("Sum is %d", e);
//     return 0;
// }

// int calsum(int x, int y, int z)
// {
//     int d = x + y + z;
//     return d;
// }
// #include <stdio.h>

// int main()
// {
//     int i = 20;
//     int k = 40;
//     printf("%d", k);
//     printf("%d", display(j));

//     return 0;
// }

// display(int j)
// {
//     int k = 35;
//     printf("%d", j);
//     printf("%d", k);
// }

// #include <stdio.h>

// int main()
// {
//     int i = 30;
//     display(i);
//     return 0;
// }

// int display(int j)
// {
//     int k = 45;
//     printf("%d\n", j);
//     printf("%d", k);
// }

#include <stdio.h>

int main()
{
    int a = 30;
    fun(a);
    printf("%d\n", a);
    return 0;
}

fun(int b)
{
    b = 60;
    printf("%d\n", b);
}