#include<stdio.h>
#include<math.h>

int main()
{
    int a = 4;
    int b = 8;
        
    printf("The value of a + b is: %d \n", a + b);
    printf("The value of a - b is: %d \n", a - b);
    printf("The value of a * b is: %d \n", a * b);
    printf("The value of a / b is: %d \n", a / b);

    int z;
    z = a * b; // or z = b * a; these are legal
    //b * a = z; // this is illegal
    printf("The value of z is: %d \n", z);

    printf("5 when divided by 2 leaves a remainder of %d \n", 5%2);
    printf("-5 when divided by 2 leaves a remainder of %d \n", -5%2); // Sign is same as of numerator only
    printf("5 when divided by -2 leaves a remainder of %d \n", 5%-2); // Sign is same as of numerator only not denominator

    // No operator is assumed to be present
    // printf("The value of 4 * 5 is %d \n", (4)(5)); or z = ab; --> Will not retun 20/ wrong!!
    printf("The value of 4 * 5 is %d \n", (4)*(5));

    // There is no operator to perform exponentiation in C
    printf("The value of 4 ^ 5 is %d \n", 4^5); // --> Will not produce 4 to the power 5
    printf("The value of 4 ^ 5 is %f \n", pow(4, 5)); // --> have to add #include<math.h> anf Double %f

    printf("The value of 6 + 5.6 is %d \n", 6 + 5);
    printf("The value of 6 + 5.6 is %f \n", 6 + 5.6);
    printf("The value of 6.1 + 5.6 is %f \n", 6.1 + 5.6);
    printf("The value of 5.0 / 2.0 is %f \n", 5.0 / 2.0);
    printf("The value of 2 / 5 is %d \n", 2 / 5);
    printf("The value of 2.0 / 5.0 is %f \n", 2.0 / 5.0);
    printf("The value of 3.0 / 9 is %f \n", 3.0 / 9);

    return 0;
}
