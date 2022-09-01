// #include <stdio.h>

// int main()
// {
//     int n1, n2, n3;
//     int largest;
//     printf("Enter three nos.:\n");
//     scanf("%d%d%d", &n1, &n2, &n3);
//     largest = n1 > n2 ? (n1 > n3 ? n1 : n3) : (n2 > n3 ? n2 : n3);
//     printf("Largest number is %d", largest);
//     return 0;
// }
// #include <stdio.h>

// int main()
// {
//     int x = 6, y;
//     printf("%d", x);
//     y = (x > 5 ? 3 : 4);
//     return 0;
// }

#include <stdio.h>

int main()
{
    int n;
    printf("Enter no.:");
    scanf("%d", &n);
    float reci = 1 / (float)n;
    printf("Reciprocal is %.3f", reci);
    return 0;
}