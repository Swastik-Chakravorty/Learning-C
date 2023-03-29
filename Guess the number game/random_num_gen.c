#include<stdio.h>
#include<stdlib.h> // header to rectify the error occurs due to random number
#include<time.h> // header to rectify the error occurs due to using time

int main()
{
    int number;
    srand(time(0)); // Using time to generate number within fraction of second
    number = rand()%100 +1; // Generate a random number between 1 and 100
    printf("The number is %d", number);


    return 0;
}
