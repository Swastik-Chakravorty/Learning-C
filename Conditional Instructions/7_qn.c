#include<stdio.h>

int main()
{
    float num;
    printf("Enter your number ");
    scanf("%f", &num);

    if(num>=90 && num<=100){
        printf("You are 'A' grade student \n");
    }
    else if(num>=80 && num<=89.9999){
        printf("You are 'B' grade student");
    }
    else if(num>=70 && num<=79.9999){
        printf("You are 'C' grade student");
    }
    else if(num>=60 && num<=69.9999){
        printf("You are 'D' grade student");
    }
    else{
        printf("Sorry you failed");
    }
    return 0;
}
