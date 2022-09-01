#include <stdio.h>
int main()
{
    FILE *f;
    char s;
    f = fopen("new.txt", "w");
    fputc('A', f);
    fclose(f);
    f = fopen("new.txt", "r");
    while ((s = fgetc(f)) != EOF)
    {
        printf("%c", s);
    }
    fclose(f);
    return 0;
}