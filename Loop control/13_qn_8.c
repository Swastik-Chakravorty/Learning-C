#include<stdio.h>

int main()
{
    int n, fac = 1;
    printf("Enter the factorial number :");
    scanf("%d", &n);
    int i = n;
    // for(int i=n; i; i--)
    // {
    //     fac *= i;
    // }
    while(i>=1)
    {
        fac *= i;
        i--;
    }
    printf("Factorial of the number %d is %d", n, fac);
    return 0;
}
