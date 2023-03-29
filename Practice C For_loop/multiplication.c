#include<stdio.h>

int main()
{
    int num, multi;
    printf("Please enter the number: ");
    scanf("%d", &num);
    printf("Multiplication table of %d is: \n", num);
    for(int i=1; i<=10; i++){
        multi = num*i;
        printf("%d X %d = %d \n", num, i, multi);
    }
    return 0;
}
