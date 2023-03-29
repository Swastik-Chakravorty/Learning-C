#include<stdio.h>

int main()
{
    int n, m;
    printf("Enter the number for reverse multiplication from 10 :");
    scanf("%d", &n);
    for(int i=10; i; i--)
    {
        m = n*i;
        printf("%d x %d = %d \n", n, i, m);
    }
    
    return 0;
}
