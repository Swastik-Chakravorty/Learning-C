#include<stdio.h>

typedef struct date
{
    int day, month, year;
} date;

void display(date d)
{
    printf("The date is: %d/%d/%d\n", d.day, d.month, d.year);
}

int dateCmp(date *d)
{
    // Make decision on the basis of year comparison
    if(d[0].year>d[1].year){
        return 1;
    }
    if(d[0].year<d[1].year){
        return -1;
    }

    // Make decision on the basis of month comparison
    if(d[0].month>d[1].month){
        return 1;
    }
    if(d[0].month<d[1].month){
        return -1;
    }

    // Make decision on the basis of day comparison
    if(d[0].day>d[1].day){
        return 1;
    }
    if(d[0].day<d[1].day){
        return -1;
    }
    return 0;
}

int main()
{
    date d[2];

    for(int i = 0; i<2; i++)
    {
        do
        {
            printf("Enter the day(Max 30th day of the month) of the Month: ");
            scanf("%d", &d[i].day);
        } while (d[i].day > 31 || d[i].day < 1);

        do
        {
            printf("Enter the month of the Year: ");
            scanf("%d", &d[i].month);
        } while (d[i].month > 12 || d[i].month < 0);

        do
        {
            printf("Enter the Year(from 1900 to 2100): ");
            scanf("%d", &d[i].year);
        } while (d[i].year > 2100 || d[i].year < 1900);
        
    }

    for(int i = 0; i<2; i++)
    {
        display(d[i]);
    }

    int a = dateCmp(d);
    if(a > 0){
        printf("First date is greater than second date");
    }

    else if(a < 0){
        printf("Second date is greater than first date");
    }

    else if(a == 0){
        printf("Both the dates are same");
    }

    return 0;
}
