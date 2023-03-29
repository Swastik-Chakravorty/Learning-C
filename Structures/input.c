#include<stdio.h>
#include<string.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};

int main()
{
    struct employee e1, e2, e3;
    printf("Enter the code of employee1: ");
    scanf("%d", &e1.code);
    printf("Enter the salary of employee1: ");
    scanf("%f", &e1.salary);
    printf("Enter the name of employee1: ");
    scanf("%s", e1.name);

    printf("Enter the code of employee2: ");
    scanf("%d", &e2.code);
    printf("Enter the salary of employee2: ");
    scanf("%f", &e2.salary);
    printf("Enter the name of employee2: ");
    scanf("%s", e2.name);

    printf("Enter the code of employee3: ");
    scanf("%d", &e3.code);
    printf("Enter the salary of employee3: ");
    scanf("%f", &e3.salary);
    printf("Enter the name of employee3: ");
    scanf("%s", e3.name);
    return 0;
}
