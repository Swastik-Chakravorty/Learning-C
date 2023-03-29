#include<stdio.h>

int main()
{
    int year;
    printf("Please enter a year in between 1000 to 9999 : ");
    scanf("%d", &year);
    if(year/1000>=1 && year%4==0){
        printf("%d is a leap year.", year);
    }
    else{
        printf("Plaese enter a valid year!");
    }
    return 0;
}
