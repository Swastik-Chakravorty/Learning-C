#include<stdio.h>

int main()
{
    float a, b, c;
    printf("Enter first number:");
    scanf("%f", &a);
    printf("Enter second number:");
    scanf("%f", &b);
    printf("Enter third number:");
    scanf("%f", &c);
    if(a>(a+b+c)/3){
        printf("%f is the bigger number", a);
    }
    else if(b>(a+b+c)/3){
        printf("%f is the bigger number", b);
    }
    else if(c>(a+b+c)/3){
        printf("%f is the bigger number", c);
    }
    else{
        printf("All are equal number");
    }

    return 0;
}
