#include <stdio.h>

int main()
{
    int t;
    float a, p, r;
    printf("Enter the Principle amount \n");
    scanf("%f", &p);

    printf("Enter the Rate of Interest \n");
    scanf("%f", &r);

    printf("Enter the number of Years \n");
    scanf("%d", &t);
    a = p * (1 + r * t);

    printf("Total amount you will receive Rs. %f after %d years", a, t);

    return 0;
}