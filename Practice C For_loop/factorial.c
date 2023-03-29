#include<stdio.h>

int main()
{
    int num, fac=1;
    printf("Enter the number: ");
    scanf("%d", &num);
    for(int i=1; i<=num; i++)
    {
    fac *=i;
    }
    printf("Factorial of %d is: %d", num, fac);
    return 0;
}
