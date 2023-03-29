#include<stdio.h>

// void printarray(int *ptr, int n)
// {
//     for(int i=0; i<n; i++)
//     {
//         printf("The value of element %d is: %d \n", (i+1), *(ptr+i));
//     }
// }

// void printarray(int arr[], int n)
// {
//     for(int i=0; i<n; i++)
//     {
//         printf("The value of element %d is: %d \n", (i+1), *(arr+i));
//     }
// }

void printarray(int ptr[], int n)
{
    for(int i=0; i<n; i++)
    {
        printf("The value of element %d is: %d \n", (i+1), ptr[i]);
    }
    ptr[2] = 5555; // This value wiil be changed in main array "arr[]" also as well
}

int main()
{
    int arr[] = {23,56,78,564,11,0,98};
    printarray(arr, 7);
    printf("New value of element 2 is: %d", arr[2]);
    return 0;
}
