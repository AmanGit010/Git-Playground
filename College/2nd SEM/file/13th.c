#include <stdio.h>

int main()
{
    int i = 0, c = 0;
    char sentence[255], b;

    printf("Enter Sentence : ");
    scanf("%[^\n]%*c", sentence);
 printf("Enter letter you want to Search : ");
 scanf("%c", &b);

 while(sentence[i] != NULL)
 {
        if (sentence[i] == b)
        {
            c++;
        }
        i++;
 }
 printf("\n Occurence of Letter : %d \n", c);
 return 0;
}