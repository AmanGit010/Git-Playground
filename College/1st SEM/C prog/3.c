#include <Stdio.h>

int main(){
    float c, f;
    printf("Enter temp in F:");
    scanf("%f",  &f);

    c = (f - 32)*5/9;
    printf("Temp in C is: %.2f", c);
    return 0;
}