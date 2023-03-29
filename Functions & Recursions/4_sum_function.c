#include<stdio.h>
// Sum is a function which takes a and b as input and returns an integer as an output
int sum(int a, int b); // function prototype declaration

int main()
{
    int c;
    c = sum(2, 15); // function call
    printf("The sum of a and b is %d \n", c);
    return 0;
}

int sum(int a, int b){
    int result;
    result = a + b;
    return result;
}
