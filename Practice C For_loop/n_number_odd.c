#include<stdio.h>

int main(){
    int num, sum=0;
    printf("Please enter required number: ");
    scanf("%d", &num);
        printf("Odd numbers in %d are following: \n", num);
    for(int i=1; i<=num; i+=2){
        printf("%d ", i);
        sum += i;
    }
    printf("\n");
    printf("Sum of total odd numbers upto %d is: %d", num, sum);
    return 0;
}
