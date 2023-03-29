#include<stdio.h>

int main()
{
    float num;
    printf("Please enter a number: ");
    scanf("%f", &num);
    if(num>0){
        printf("%f is a positive number", num);
    }
    else if(num==0){
        printf("%f is zero", num);
    }
    else if(num<0){
        printf("%f is a negative number", num);
    }

    return 0;
}
