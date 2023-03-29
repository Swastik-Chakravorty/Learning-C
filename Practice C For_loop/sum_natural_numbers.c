#include<stdio.h>

int main()
{
    int num, sum=0, avg=0;
    printf("Please enter the end number: ");
    scanf("%d", &num);
    for(int i=1; i<=num; i++){
        sum += i;
    }
    avg = sum/num;
    printf("Sum of all natural numbers upto %d is: %d and average in intiger is %d" , num, sum, avg);
    return 0;
}
