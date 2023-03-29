#include <stdio.h>

int main()
{
    float r, a, h, v;
    printf("Enter the value of circle redius ");
    scanf("%f", &r);
    a = 3.1416 * r * r;
    printf("Area of the circle is %f \n", a);

    printf("Enter the height of the cylinder ");
    scanf("%f", &h);
    v = 3.1416 * r * r * h;
    printf("Volume of the cylinder is %f", v);

    return 0;
}