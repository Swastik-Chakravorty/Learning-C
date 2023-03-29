#include<stdio.h>

int main()
{
    int n;
    float sum = 0;
    printf("Please enter the terms: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        if(i<n)
        {
            printf("1/%d + ", i);
        }
        if(i==n)
        {
            printf("1/%d", i);
        }

        sum = sum + 1/(float)i;
    }
    printf("\n");
    printf("Sum of Series upto %d terms : %f", n, sum);
    return 0;
}
