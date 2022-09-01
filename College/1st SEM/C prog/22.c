#include <stdio.h>
#include <string.h>
void main()
{
    int arr[3][3];
    int i;
    int j;
    printf("enter the 1st matric\n");
    printf("enter the elements of matric\n");
    for (i = 0; i < 3; i++)
    {
        int num1, num2, num3;
        scanf("%d %d %d", &num1, &num2, &num3);
        arr[i][0] = num1;
        arr[i][1] = num2;
        arr[i][2] = num3;
    }

    int arr_2[3][3];
    printf("enter the 2nd matric\n");
    printf("enter the elements of matric\n");
    for (i = 0; i < 3; i++)
    {
        int num1, num2, num3;
        scanf("%d %d %d", &num1, &num2, &num3);
        arr_2[i][0] = num1;
        arr_2[i][1] = num2;
        arr_2[i][2] = num3;
    }

    int sum_arr[3][3];
    int sub_arr[3][3];
    int mult_arr[3][3];
    for (i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum_arr[i][j] = arr[i][j] + arr_2[i][j];
            sub_arr[i][j] = arr[i][j] - arr_2[i][j];
            mult_arr[i][j] = arr[i][j] * arr_2[i][j];
        }
    }

    printf("after the sum of elements\n");
    for (i = 0; i < 3; i++)
    {

        printf("%d\t %d\t %d\n ", sum_arr[i][0], sum_arr[i][1], sum_arr[i][2]);
    }

    printf("after the sum of elements\n");
    for (i = 0; i < 3; i++)
    {
        printf("%d\t %d\t %d\n ", sub_arr[i][0], sub_arr[i][1], sub_arr[i][2]);
    }

    printf("after the multiplication of elements\n");
    for (i = 0; i < 3; i++)
    {
        printf("%d\t %d\t %d\n", mult_arr[i][0], mult_arr[i][1], mult_arr[i][2]);
    }
}
