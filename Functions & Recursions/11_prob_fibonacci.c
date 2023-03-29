#include<stdio.h>
int fibonacci(int m);

int main()
{
    int n;
    printf("Enter the number");
    scanf("%d", &n);
    printf("Fibonacci series %dth term is: %d\n", n, fibonacci(n-1));
    printf("Fibonacci series terms are: \n");
    for (int i=0; i<n; i++)
    {
        printf("%d \n", fibonacci(i));
    }
    
    return 0;
}

int fibonacci(int m){
    if(m==0)
    {
        return 0;
    }
    else if(m==1 || m==2)
    {
        return 1;
    }
    else{
        return (fibonacci(m-1) + fibonacci(m-2));
    }
    
}