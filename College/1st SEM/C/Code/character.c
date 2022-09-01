#include <stdio.h>

int main()
{
    char ch;
    char c;
    char Z;
    ch = 'A';
    while (ch <= 'Z')
    {
        printf("%c\n", ch);
        ch = ch + 1;
    }
    return 0;
}