#include <stdio.h>
#include <string.h>
int main()
{
    FILE *fp;
    char c[] = "hi this is how we write c programs.";
    char A[100];
    fp = fopen("file.txt", "w+");
    fwrite(c, strlen(c) + 1, 1, fp);
    fseek(fp, 0, SEEK_SET);
    fread(A, strlen(c) + 1, 1, fp);
    printf("%s\n", A);
    fclose(fp);
    return (0);
}