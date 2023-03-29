#include<stdio.h>

int main()
{
    int i =0, n;
    printf("Enter the number upto which you want to print even number: ");
    scanf("%d", &n);

    do{
        printf("The value of i is %d \n", i); // do-while loop executes at leat once; firts print then check conditions
        i+=2;
    }while(i<=n);

    return 0;
}
