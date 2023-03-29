#include<stdio.h>

int main()
{
    float num1, num2, num3, num4;
    printf("Enter first numbers \n:");
    scanf("%f", &num1);
    printf("Enter second numbers \n:");
    scanf("%f", &num2);
    printf("Enter third numbers \n:");
    scanf("%f", &num3);
    printf("Enter fourth numbers \n:");
    scanf("%f", &num4);
    if(num1>num2 && num1>num3 && num1>num4){
        printf("'%f' is the greatest number", num1);
    }
    if(num2>num1 && num2>num3 && num2>num4){
        printf("'%f' is the greatest number", num2);
    }
    if(num3>num2 && num3>num1 && num3>num4){
        printf("'%f' is the greatest number", num3);
    }
    if(num4>num2 && num4>num3 && num4>num1){
        printf("'%f' is the greatest number", num4);
    }
    return 0;
}
