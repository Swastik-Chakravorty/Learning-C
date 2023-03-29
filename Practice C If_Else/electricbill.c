#include<stdio.h>

int main()
{
    float unit, bill;
    printf("Please enter the unit you consumed:");
    scanf("%f", &unit);
    if(unit<=50){
        bill = (unit*.5)*1.2;
        printf("Your total electricity bill is Rs. %f/-", bill);
    }
    else if(unit>50 && unit<=150){
        bill = ((unit-50)*.75+(50*.5))*1.2;
        printf("Your total electricity bill is Rs. %f/-", bill);
    }
    else if(unit>150 && unit<=250){
        bill = ((unit-150)*1.2+(50*.5)+(100*.75))*1.2;
        printf("Your total electricity bill is Rs. %f/-", bill);
    }
    else if(unit>250){
        bill = ((unit-250)*1.5+(50*.5)+(100*.75)+(100*1.2))*1.2;
        printf("Your total electricity bill is Rs. %f/-", bill);
    }
    return 0;
}
