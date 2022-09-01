#include <stdio.h>
int main()
{
    FILE *fp;
    char A;
    fp = fopen("file.txt", "r");
    while ((A = fgetc(fp)) != EOF)
    {
        printf(" %c", A);
    }
    rewind(fp);
    while ((A = fgetc(fp)) != EOF)
    {
        printf(" %c", A);
    }
    fclose(fp);
    return 0;
}