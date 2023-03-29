#include<stdio.h>
#include<string.h>

typedef struct employee
{
    int code;
    float salary;
    char name[10];
} emp;

void show(emp emp2)
{
    printf("         Employee Name is: %s\n", emp2.name);
    printf("         Employee Code is: %d\n", emp2.code);
    printf("Salary of the employee is: $%f\n", emp2.salary);
}

int main()
{
    //declaring e1 and ptr
    emp e1;
    emp *ptr;

    //pointing ptr to e1
    ptr = &e1;

    //set the number values for e1
    ptr->code = 101;
    ptr->salary = 11.01;
    strcpy(ptr->name, "Swastik");

    show(e1);
    
    return 0;
}
