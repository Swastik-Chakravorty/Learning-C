#include<stdio.h>

int main()
{
    // for(int a = 0; a<10; a++){
    //     printf("The value of a is %d \n", a);
    // }

    int n, count = 0;
    printf("Enter the value of n :");
    scanf("%d", &n);
    for(int a=0; a<=n; a+=2){
        count++;
    }
    count--; //(as 0 will not be counted)
    printf("Total even number in '%d' is %d \n", n, count);
    printf("And the sum of total even number in '%d' is %d", n, count*(count+1));

    return 0;
}
