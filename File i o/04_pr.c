#include<stdio.h>

struct employee
{
    int code;
    char name[10];
    int salary;
};

int main()
{
    FILE *fptr;
    struct employee emp[10];

    for(int i = 0; i<10; i++)
    {
        printf("Enter the %dth employee Code: ", i+1);
        scanf("%d", &emp[i].code);
        printf("Enter the %dth employee Name: ", i+1);
        scanf("%s", &emp[i].name);
        printf("Enter the %dth employee Salary: ", i+1);
        scanf("%d", &emp[i].salary);
    }

    fptr = fopen("employee.csv", "w");

    for(int i = 0; i<10; i++)
    {
        fprintf(fptr, "%dth employee Code: %d\n", (i+1), emp[i].code);
        fprintf(fptr, "%dth employee Name: %s\n", (i+1), emp[i].name);
        fprintf(fptr, "%dth employee Salary: %d\n", (i+1), emp[i].salary);
    }
    fclose(fptr);
    return 0;
}
