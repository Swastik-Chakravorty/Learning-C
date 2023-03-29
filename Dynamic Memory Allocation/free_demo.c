#include<stdio.h>
#include<stdlib.h>

int main()
{
    float *ptr;
    float *ptr2;
    ptr = (float *) malloc(600 * sizeof(float));
    for (int i = 0; i<600; i++){
        ptr2 = (float *) malloc(600 * sizeof(float));
        printf("Enter the value of %d element: \n", (i+1));
        scanf("%f", &ptr[i]);
        free(ptr2);
    }
    
    for (int i = 0; i<6; i++){
        printf("The value of %d element is: %0.2f\n", (i+1), ptr[i]);
    }
    free(ptr);
    return 0;
}
