#include<stdio.h>

int main()
{
    int n, nine = 9, sum = 0;
    printf("Please enter the number of terms: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        sum += nine;
        if(i<n)
        {
            printf("%d + ", nine);
        }
        else if(i==n)
        {
            printf("%d", nine);
        }
        nine = nine*10 + 9;
    }
    printf("\nThe sum of the saries: %d", sum);
    return 0;
}
