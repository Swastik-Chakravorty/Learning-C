#include<stdio.h>

int main()
{
    int a;
    printf("Please enter a number");
    scanf("%d", &a);
    // while(a>10){ --> THIS LEAD TO AN INFINITE LOOP
    while(a<10){
        printf("%d \n", a);
        a++;
    }

    return 0;
}
