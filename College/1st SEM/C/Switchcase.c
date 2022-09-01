#include <stdio.h>

int main()
{
    int age, marks;
    printf("Your Age: ");
    scanf("%d", &age);
    printf("Your marks: ");
    scanf("%d", &marks);

    switch (age)
    {
    case 18:
        printf("Your age is 18.");
        switch (marks)
        {
        case 33:
            printf("You have scored 33 marks.");
            break;
        case 32:
            printf("You have scored 32 marks.");
            break;
        
        default:
            break;
        }
        break;
    case 17:
        printf("Your age is 17. So you're not qualified.");
        break;
    
    default:
        printf("You're not eligible.");
        break;
    }
}