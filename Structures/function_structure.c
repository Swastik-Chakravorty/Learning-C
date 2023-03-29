#include<stdio.h>
#include<string.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};

void show(struct employee emp)
{
    printf("         Employee Name is: %s\n", emp.name);
    printf("         Employee Code is: %d\n", emp.code);
    printf("Salary of the employee is: $%f\n", emp.salary);
    emp.salary = 56.2;
}

int main()
{
    struct employee e1;
    struct employee *ptr;

    ptr = &e1;
    ptr->code = 101;
    ptr->salary = 11.01;
    strcpy(ptr->name, "Swastik");
    
    show(e1);
    printf("Salary of the employee is: $%f\n", e1.salary); //salary will not change because function will be updated call by value, not call by reference
    
    return 0;
}
