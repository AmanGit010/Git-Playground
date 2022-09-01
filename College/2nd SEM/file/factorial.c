#include <stdio.h>

int factorial(int num){
    if (num==1 || num==0)
    {
        return 1;
    }
    else
    {
        return(num, num*factorial(num-1));
    }
    
    
}

int main(){
    int num;
    printf("Enter a number whose factorial you want: ");
    scanf("%d", &num);
    printf("Factorial of the given number % d is %d.", num, factorial(num));
    return 0;
}