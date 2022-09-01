#include <stdio.h>

int main(){
    int z = 90;
    int* ptrz = &z;
    printf("The address of z is %p\n", *ptrz);
    printf("The value of z is %d\n", *ptrz);

    return 0;
}