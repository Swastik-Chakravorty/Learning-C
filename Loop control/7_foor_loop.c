#include<stdio.h>

int main(){
    int n;
    printf("Please enter the value of n :");
    scanf("%d", &n);

    // for(int i=0; i<n; i++){
    //     printf("The natural numbers are %d \n", i+1);
    // }
    for(int i=n; i; i--){
        printf("The natural numbers in reverse order %d \n", i);
    }
    return 0;
}