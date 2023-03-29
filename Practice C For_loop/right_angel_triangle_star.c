#include<stdio.h>

int main()
{
    int num, l=1;
    printf("Enter the lines: ");
    scanf("%d", &num);
    for (int i=1; i<=num; i++)
    {
        for (int j=1; j<=(num-i); j++)
        {
            printf(" ");
        }

        for (int k=1;k<=i;k++)
        {
            // printf("*");
            printf("%d ", l++);

        }
        printf("\n");
    }
    return 0;
}
