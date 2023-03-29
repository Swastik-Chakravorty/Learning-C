#include<stdio.h>

int main()
{
    float a, b;
    printf("Enter first number:");
    scanf("%f", &a);
    printf("Enter second number:");
    scanf("%f", &b);
    if(a>(a+b)/2){
        printf("%f is the bigger number", a);
    }
    else if(b>(a+b)/2){
        printf("%f is the bigger number", b);
    }
    else{
        printf("Both are equal number");
    }

    return 0;
}
