#include<stdio.h>
void printPattern(int n);

int main()
{
    int n;
    printf("Enter how many lines you want to print :");
    scanf("%d", &n);
    printPattern(n);
    return 0;
}
// for n=3
// *
// ***
// *****

// 1 - 1
// 2 - 3
// 3 - 5
// n - (2*n - 1)
void printPattern(int n){
    if (n==1)
    {
        printf("*\n");
        return;
    }
    printPattern(n-1);
    for (int i = 0; i < (2*n - 1); i++)
    {
        printf("*");
    }
    printf("\n"); 
    
}