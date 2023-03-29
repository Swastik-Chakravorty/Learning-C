#include<stdio.h>

int main()
{
    int n, sum = 0;
    int i = 0;
    printf("Enter the number upto which you want the sum of natural number :");
    scanf("%d", &n);

    // for(int i=0; i<=n; i++)
    // {
    //     sum += i;
    // }
    // do
    // {
    // sum += i;
    // i++;
    // } while (i<=n);
    while (i<=n)
    {
        sum += i;
        i++;
    }
    printf("The sum of the natural numbers is :%d", sum);
    
    return 0;
}
