#include<stdio.h>

int main()
{
    float basic, salary;
    printf("Please enter your basic pay in Rs.: ");
    scanf("%f", &basic);
    if(basic<=10000){
        salary=basic+(basic*.2)+(basic*.8);
        printf("Your gross salary is Rs. %f/-", salary);
    }
    else if(basic<=20000){
        salary=basic+(basic*.25)+(basic*.9);
        printf("Your gross salary is Rs. %f/-", salary);
    }
    else if(basic>20000){
        salary=basic+(basic*.3)+(basic*.95);
        printf("Your gross salary is Rs. %f/-", salary);
    }

    return 0;
}
