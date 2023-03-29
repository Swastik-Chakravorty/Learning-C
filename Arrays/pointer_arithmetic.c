#include<stdio.h>

int main()
{
    int i = 34;
    int *ptr = &i;
    printf("The value of ptr is %u \n", ptr);
    // ptr = ptr + 1;
    ptr++;
    printf("The value of ptr is %u \n", ptr);

    char a = 'A';
    char *ptr1 = &a;
    printf("The value of ptr is %u \n", ptr1);
    ptr1++;
    printf("The value of ptr is %u \n", ptr1);

    float x = 3.5;
    float *ptr2 = &x;
    printf("The value of ptr is %u \n", ptr2);
    ptr2++;
    printf("The value of ptr is %u \n", ptr2);

    return 0;
}
