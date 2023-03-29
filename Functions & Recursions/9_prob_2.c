#include<stdio.h>
float temp(float c);

int main()
{
    float c;
    printf("Enter the temperature in celcius: ");
    scanf("%f", &c);
    printf("The temperature in Fahrenheit will be: %f", temp(c));
    return 0;
}

float temp(float c){
    float f;
    f = (c * 1.8) + 32;
    return f;
}