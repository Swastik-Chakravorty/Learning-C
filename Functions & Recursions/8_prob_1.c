#include<stdio.h>
float avg(int a, int b, int c);

int main()
{
    int a, b, c;
    printf("Please enter number1 \n");
    scanf("%d", &a);
    printf("Please enter number2 \n");
    scanf("%d", &b);
    printf("Please enter number3 \n");
    scanf("%d", &c);
    printf("The average will be: %f", avg(a, b, c));
    return 0;
}

float avg(int a, int b, int c){
    float result;
    result = (float)(a + b + c)/3; // declaring (float) is called typecasting
    return result;
}
