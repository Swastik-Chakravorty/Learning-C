#include <stdio.h>
void tree(int);
void pole(int);

int main()
{
    int num;
    printf("Please enter the number of lines: ");
    scanf("%d", &num);
    printf("\n *** CHRISTMAS TREE ***\n\n");
    tree(num);
    tree(num);
    pole(num);
    return 0;
}

   void tree(int n) 
   {
    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=(n-i); j++)
        {
            printf(" ");
        }

        for (int k=1;k<=(2*i-1);k++)
        {
            printf("*");
        }
        printf("\n");
    }
   }

   void pole(int n) 
   {
    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=(n-2); j++)
        {
            printf(" ");
        }
        printf("***\n");
    }
   }