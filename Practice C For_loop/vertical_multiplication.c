#include<stdio.h>

int main()
{
    int num_start, num_end, multi;
    printf("Please enter the start number: ");
    scanf("%d", &num_start);
    printf("Please enter the end number: ");
    scanf("%d", &num_end);
    printf("Vertical Multiplication table  from %d to %d is: \n", num_start, num_end);
    for(int i=num_start; i<=num_end; i++){
        for(int j=1; j<=10; j++){
        multi = i*j;
        printf("%d X %d = %d \t", i, j, multi);
        }
        printf("\n \n \n");
    }

    return 0;
}
