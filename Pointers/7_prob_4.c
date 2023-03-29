#include<stdio.h>
int sumAvg(int i, int j, int *sum, float *avg);

int main()
{
    int a, b, sum;
    float avg;
    printf("Enter a number :");
    scanf("%d", &a);
    printf("Enter another number :");
    scanf("%d", &b);
    sumAvg(a, b, &sum, &avg);
    printf("The value of sum is %d \n", sum);
    printf("The value of avg is %f \n", avg);
    return 0;
}
int sumAvg(int i, int j, int *sum, float *avg){
    *sum = i + j;
    *avg = *sum/2;
}