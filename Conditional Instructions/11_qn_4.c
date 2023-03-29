#include<stdio.h>

int main()
{
    int year;
    printf("Enter the year \n");
    scanf("%d", &year);
    if (year%4==0)
    {        
        printf("Yes %d is a leap year", year);
    }
    else{
        printf("No %d is not a leap year", year);
    }
    
    return 0;
}
