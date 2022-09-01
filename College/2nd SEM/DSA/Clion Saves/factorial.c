#include <stdio.h>

int fact(int num){
    if(num == 0 || num == 1){
        return 1;
    }
    else{
        return(num, num*fact(num-1));
    }
}

int main(){
    int num;
    printf("Enter a number whose factorial you want: ");
    scanf("%d", &num);
    printf("Factorial of the given number % is %d.", num, fact(num));
    return 0;
}