#include<stdio.h>

int main()
{
    float income, tax = 0;
    printf("Please enter your yearly income in Rs. :");
    scanf("%f", &income);
    if (income>=250000 && income<500000)
    {
        tax = tax + (income-250000)*5/100;
    }
    if (income>=500000 && income<1000000)
    {
        tax = tax + 12500 + (income-500000)*20/100;
    }
    if (income>=1000000)
    {
        tax = tax + 112500 + (income-1000000)*30/100;
    }    
        printf("Your net income tax to be paid by 31st of this month is Rs.: %f", tax);
    
    return 0;
}
