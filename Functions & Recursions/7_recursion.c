#include<stdio.h>
int factorial(int x);

int main()
{
    int a;
    printf("Enter the value :");
    scanf("%d", &a);
    printf("The value of factorial %d is %d", a , factorial(a));
    return 0;
}

int factorial(int x){
    printf("calling factorial (%d) \n", x);
    if(x==1 || x==0){
        return 1;
    }
    // if(0){} --> Due to mistake a recursive function can keep running without return. An thus it is resulting in a memory error.
    else{
        return x * factorial(x-1);
    }
}
