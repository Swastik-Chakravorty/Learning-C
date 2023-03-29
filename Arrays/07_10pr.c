#include<stdio.h>

int main()
{
    int n, mul[10];
    printf("Enter the multiplication table for number: ");
    scanf("%d", &n);
    for(int i=0; i<10; i++){
        mul[i] = n*(i+1);
        printf("%d X %d = %d \n", n, i+1, mul[i]);
    }

    return 0;
}
