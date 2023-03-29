#include<stdio.h>

int main()
{
    int year, month;
    printf("Please enter the year: ");
    scanf("%d", &year);
    printf("Please enter the month: ");
    scanf("%d", &month);

    if(year%4000==0 && year>=1000 && year<=9999 && month==2){
        printf("%d is a leap year and %d is February with 29 days", year, month);
    }

    else if(year%4000!=0 && month>=1 && month<=12 && year>=1000 && year<=9999 && month==2){
        printf(" %d is February with 28 days of %d year", month, year);
    }

    else if(month>=1 && month<=12 && year>=1000 && year<=9999 && month==1){
        printf("%d is January with 31 days of %d year", month, year);
    }
    else if(month>=1 && month<=12 && year>=1000 && year<=9999 && month==3){
        printf("%d is March with 31 days of %d year", month, year);
    }
    else if(month>=1 && month<=12 && year>=1000 && year<=9999 && month==4){
        printf("%d is April with 30 days of %d year", month, year);
    }
    else if(month>=1 && month<=12 && year>=1000 && year<=9999 && month==5){
        printf("%d is May with 31 days of %d year", month, year);
    }
    else if(month>=1 && month<=12 && year>=1000 && year<=9999 && month==6){
        printf("%d is June with 30 days of %d year", month, year);
    }
    else if(month>=1 && month<=12 && year>=1000 && year<=9999 && month==7){
        printf("%d is July with 31 days of %d year", month, year);
    }
    else if(month>=1 && month<=12 && year>=1000 && year<=9999 && month==8){
        printf("%d is August with 31 days of %d year", month, year);
    }
    else if(month>=1 && month<=12 && year>=1000 && year<=9999 && month==9){
        printf("%d is September with 30 days of %d year", month, year);
    }
    else if(month>=1 && month<=12 && year>=1000 && year<=9999 && month==10){
        printf("%d is October with 31 days of %d year", month, year);
    }
    else if(month>=1 && month<=12 && year>=1000 && year<=9999 && month==11){
        printf("%d is November with 30 days of %d year", month, year);
    }
    else if(month>=1 && month<=12 && year>=1000 && year<=9999 && month==12){
        printf("%d is December with 31 days of %d year", month, year);
    }
     else{
        printf("Please enter a valid year or valid month!");
     }
    return 0;
}
