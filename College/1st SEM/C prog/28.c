#include <stdio.h>
#include <string.h>

union Employee
{
    int age;
    char Name[50];
    char Department[20];
    float Salary;
};

int main()
{
    union Employee emp1;
    union Employee emp2;

    emp1.age = 28;
    strcpy(emp1.Name, "Chris");
    strcpy(emp1.Department, "Science");
    emp1.Salary = 32000.70;

    printf("\nDetails of the First Employee \n");

    printf("  Employee Age = %d \n", emp1.age);
    printf("  Employee Name = %s \n", emp1.Name);
    printf("  Employee Department = %s \n", emp1.Department);
    printf("  Employee Salary = %.2f \n\n", emp1.Salary);

    printf("Details of the Second Employee \n");

    emp2.age = 30;
    printf("  Employee Age = %d \n", emp2.age);

    strcpy(emp2.Name, "David");
    printf("  Employee Name = %s \n", emp2.Name);

    strcpy(emp2.Department, "Technology");
    printf("  Employee Department = %s \n ", emp2.Department);

    emp2.Salary = 35000.20;
    printf("  Employee Salary = %.2f \n ", emp2.Salary);

    return 0;
}
