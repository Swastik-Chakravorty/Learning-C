#include<stdio.h>
int value(int *a);

int main()
{
    int i = 5;
    value(&i);
    printf("The final value after 10 times will be %d", i);
    return 0;
}
int value(int *a){
    int temp;
    *a *= 10;
    return *a;
}