#include<stdio.h>
float force(float mass);

int main()
{
    float m;
    printf("Please enter the mass in Kg: ");
    scanf("%f", &m);
    printf("Force of the earth on the mass is: %.2f Newton", force(m)); // .2f means upto 2 decimal points
    return 0;
}

float force(float mass){
    float result = mass * 9.8;
    return result;
}