#include <stdio.h>
void func()
{
    auto i = 1;
    static int j = 1;
    i = i + 1;
    j = j + 1;
    printf("i\t=\t%d\n", i);
    printf("j\t=\t%d\n", j);
}
int main()
{
    register int k;
    func();
    func();
    func();
    for (k = 1; k <= 5; k++)
    {
        printf("%d\t", k);
    }
    return 0;
}