#include <stdio.h>

int main()
{
    float c;
    printf("Enter the temperature in Celcius ");
    scanf("%f", &c);
    printf("Temperature in Farenheit is %f", (c * 9 / 5) + 32 );
    return 0;
}