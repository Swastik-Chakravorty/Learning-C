#include<stdio.h>

int main()
{
    float x, exponen=1, fac, sum=1;
    int t;
    printf("Enter the value: ");
    scanf("%f", &x);
    printf("Enter the number of terms: ");
    scanf("%d", &t);

    for(int i=1; i<t; i++)
    {
        fac = 2*i*(2*i-1);
        exponen = -exponen*x*x/fac;
        sum = sum + exponen;
    }

    printf("the sum of the series is: %f", sum);
    
    return 0;
}
