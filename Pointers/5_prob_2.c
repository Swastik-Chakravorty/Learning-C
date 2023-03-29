#include<stdio.h>
void printAdd(int a);

int main()
{
    int i = 4;
    printf("Value of i is %d \n", i);
    printf("Address of i is %u \n", &i);
    printAdd(i);
    printf("Address of i after function call is %d \n", &i);
    return 0;
}
void printAdd(int a){
    printf("Address of a is %u \n", &a);
}