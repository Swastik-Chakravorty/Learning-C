#include<stdio.h>
#include<stdlib.h>

int main()
{
    float *ptr;
    //sizeof() operator in c
    // printf("The size of short on my pc is: %dbytes (1 Byte = 4 Bits)\n", sizeof(short));
    // printf("The size of int on my pc is: %dbytes (1 Byte = 4 Bits)\n", sizeof(int));
    // printf("The size of long on my pc is: %dbytes (1 Byte = 4 Bits)\n", sizeof(long));
    // printf("The size of float on my pc is: %dbytes (1 Byte = 4 Bits)\n", sizeof(float));
    // printf("The size of double on my pc is: %dbytes (1 Byte = 4 Bits)\n", sizeof(double));
    // printf("The size of char on my pc is: %dbytes (1 Byte = 4 Bits)\n", sizeof(char));
    ptr = (float *) malloc(6 * sizeof(float));
    for (int i = 0; i<6; i++){
        printf("Enter the value of %d element: \n", (i+1));
        scanf("%f", &ptr[i]);
    }
    
    for (int i = 0; i<6; i++){
        printf("The value of %d element is: %0.2f\n", (i+1), ptr[i]);
    }
    free(ptr);
    return 0;
}
