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
    int a = 34;
    char b = 'd';
    float c = 234.355;
    // employee e1;
    // e1.salary = 34.454;  ----> won't work without employee structure

    struct employee e1;
    e1.code = 10506;
    e1.salary = 155862.5556;
    // e1.name = "Swastik"; ---> won't work
    strcpy(e1.name, "Swastik");

    printf("         Employee Name is: %s\n", e1.name);
    printf("         Employee Code is: %d\n", e1.code);
    printf("Salary of the employee is: $%.3f\n", e1.salary);
    
    return 0;
}
