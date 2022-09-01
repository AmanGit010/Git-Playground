#include <stdio.h>
#define MAX_DATA 5
struct DATABASE
{
       char name[100];
       int roll;
};
int main()
{
       struct DATABASE data[MAX_DATA];
       int i;
       int clrscr();
       printf("Enter %d Student details\n", MAX_DATA);
       for (i = 0; i < MAX_DATA; i++)
       {
              printf("Student %d name = ", (i + 1));
              gets(data[i].name);
              printf("Student %d roll no: ", (i + 1));
              scanf("%d", &data[i].roll);
              getchar();
              printf("\n");
       }
       printf("Student details\n");
       for (i = 0; i < MAX_DATA; i++)
       {
              printf("Name => %s\n", data[i].name);
              printf("Roll => %d\n", data[i].roll);
       }
       return 0;
}