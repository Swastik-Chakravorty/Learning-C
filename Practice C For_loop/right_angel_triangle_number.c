#include<stdio.h>

int main()
{
    int num, k=1;
    printf("Enter the lines: ");
    scanf("%d", &num);
    for (int i=1; i<=num; i++)
    {
        for (int j=1;j<=(2*i-1);j++)
        {
            printf("%d", k++);
        }
        printf("\n");
    }
    return 0;
}
