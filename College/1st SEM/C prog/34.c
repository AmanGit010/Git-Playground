#include <stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("test.txt", "r");
    fseek(fp, 0, SEEK_END);
    printf("%ld", ftell(fp));
    return 0;
}