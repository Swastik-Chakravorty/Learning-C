#include<stdio.h>
int positive(int *arr, int n){
    int count=0;
    for(int i=0; i<n; i++){
        if(arr[i]>0){
            count++;
        }
    }
    return count;
}

int main()
{
    int n=10, arr[10], count;
    for(int i=0; i<10; i++){
        printf("Enter the value of element number %d is: \n", (i+1));
        scanf("%d", &arr[i]);
    }
    count = positive(arr, n);
    printf("Number of positive integers in the array are: %d", count);

    return 0;
}
