#include<stdio.h>
#include<string.h>

struct bank
{
    long Ac, cusId;
    int opyr, age;
    char name[10], add[10];
};

void display(struct bank dtl)
{
    printf("The Acount holder first name is: %s\n", dtl.name);
    printf("The Acount holder one word Address is: %s\n", dtl.add);
    printf("The Acount holder Age is: %d\n", dtl.age);
    printf("The Acount holder Acount Number is: %ld\n", dtl.Ac);
    printf("The Acount holder Customer ID is: %ld\n", dtl.cusId);
    printf("The Acount Opening year is: %d\n", dtl.opyr);
}

int main()
{
    struct bank details[2];

    for(int i = 0; i < 2; i++)
    {
        printf("%d: Enter the Acount holder First name: ", i+1);
        scanf("%s", &details[i].name);
        printf("%d: Enter the Acount holder one word Address: ", i+1);
        scanf("%s", &details[i].add);
        printf("%d: Enter the Acount holder Age: ", i+1);
        scanf("%d", &details[i].age);
        printf("%d: Enter the Acount holder Acount Number: ", i+1);
        scanf("%ld", &details[i].Ac);
        printf("%d: Enter the Acount holder Customer ID: ", i+1);
        scanf("%ld", &details[i].cusId);
        printf("%d: Enter the Acount Opening year: ", i+1);
        scanf("%d", &details[i].opyr);
    }

    for(int i = 0; i<2; i++)
    {
        printf("\n\n");
        display(details[i]);
        printf("\n\n");
    }

    return 0;
}
