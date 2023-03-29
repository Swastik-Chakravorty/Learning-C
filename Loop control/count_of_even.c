#include<stdio.h>

int main()
{
    int i = 0, n, count = 0;
    printf("Enter the number upto which you want to count the number of even numbers: ");
    scanf("%d", &n);
    while(i<=n){
        i+=2;
        count++;
    }
    printf("Total even number in %d is %d \n", n, count);
    count--; // as 0 will not be counted
    printf("And the sum of total even number in %d is %d", n, count*(count+1));

    return 0;
}
