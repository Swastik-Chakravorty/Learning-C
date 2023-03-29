#include<stdio.h>

int main()
{
    int n, m, sum = 0;
    printf("Enter the number for multiplication table :");
    scanf("%d", &n);
    for (int i = 0; i <= 10; i++)
    {
        m = n*i;
        printf("%d x %d = %d \n", n, i, m);
        sum += m;
    }
    printf("Sum of the multiplication numbers is :%d", sum);
    
    return 0;
}
