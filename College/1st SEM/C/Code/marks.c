#include <stdio.h>

void main()
{
    int maths, chem, cs, eng, phy;
    float perc;
    printf("Enter marks in maths:");
    scanf("%d", &maths);
    printf("Enter marks in chemistry:");
    scanf("%d", &chem);
    printf("Enter marks in computer science:");
    scanf("%d", &cs);
    printf("Enter marks in english:");
    scanf("%d", &eng);
    printf("Enter marks in physics:");
    scanf("%d", &phy);
    perc = (maths + chem + cs + eng + phy) / 5;
    printf("Total percentage is %.2f", perc);
}