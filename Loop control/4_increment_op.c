#include<stdio.h>

int main()
{
    int i = 5, r = 2;
    printf("The value after i++ is: %d \n", i++); // first print then increment    ***"+++ operator doesn't exist"***
    printf("The value after i is: %d \n", i);

    printf("The value after i++ is: %d \n", ++r); // first increment then print
    printf("The value after i is: %d \n", r);

    i+=10; // --> Increment i by 10
    printf("The value after i is: %d \n", i);

    i-=10; // --> Increment i by 10
    printf("The value after i is: %d \n", i);

    i*=10; // --> Increment i by 10
    printf("The value after i is: %d \n", i);

    i%=7; // --> Increment i by 10
    printf("The value after i is: %d \n", i);

    return 0;
}
