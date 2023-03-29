#include<stdio.h>

int main()
{
    int a = 5;
    int *ptr;
    ptr = &a;
    printf("Value of 'a' is %d \n", a);
    printf("Address of 'a' is %u \n", ptr);
    printf("Value of 'a' is %d \n", *ptr);
    return 0;
}
