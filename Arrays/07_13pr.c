#include<stdio.h>
void printTable(int *multable, int num, int n){
    printf("The multiplication table of %d is ; \n", num);
    for(int i=0; i<n; i++){
        multable[i] = num*(i+1);
        printf("%d X %d = %d \n", num, (i+1), multable[i]);
    }
    printf("************************************************\n");
}

int main()
{
    int num, mul, quant;
    printf("Enter the quantity: ");
    scanf("%d", &quant);
    printf("Enter the multiplier: ");
    scanf("%d", &mul);
    int multable[quant][mul];
    for(int i=quant; i>0; i--){
        printf("Enter the %d number: \n", (quant-i)+1);
        scanf("%d", &num);
        printTable(multable[quant-i], num, mul);
    }
    
    return 0;
}
