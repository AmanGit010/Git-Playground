#include <stdio.h>

int main(){
    int number, n;
    int count=0;
    printf("Enter number: ");
    scanf("%d", &number);

    for (int i = 1; i<number; i++)
    {
        if (number % 1 == 0)
        {
            count++;
        }
    }

    if (count == 2)
    {
        printf("Prime");
    }
    else{
        printf("Non prime.");
    }
    return 0;
    
    
}