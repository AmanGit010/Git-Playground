#include <stdio.h>
struct address
{
    char city[20];
    int pin;
    char phone[14];
};
struct employee
{
    char name[20];
    struct address add;
};
void main()
{
    struct employee emp;
    printf("Enter employee information: \n");
    printf("Enter name: ");
    scanf("%s", &emp.name);
    printf("Enter City: ");
    scanf("%s", &emp.add.city);
    printf("Enter PIN: ");
    scanf("%d", &emp.add.pin);
    printf("Enter Phone no.: ");
    scanf("%s", &emp.add.phone);

    printf("Printing the employee information....\n");
    printf("name: %s\nCity: %s\nPincode: %d\nPhone: %s", emp.name, emp.add.city, emp.add.pin, emp.add.phone);
}
