#include<stdio.h>
#include<string.h>

struct employee
{
    int code;
    float salary;
    char name[20];
};

int main()
{
    struct employee swastik = {100, 564.25, "Swsatik"};
    // struct employee swastik = {0}; ---> to initialize all the elements to zero

    printf(" Employee code: %d\n Employee Salary: %f\n Employee Name: %s\n", swastik.code, swastik.salary, swastik.name);


    return 0;
}
