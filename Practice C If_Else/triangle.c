#include<stdio.h>

int main()
{
    int a, b, c;
    printf("Please enter 1st side of trianle in cm: ");
    scanf("%d", &a);
    printf("Please enter 2nd side of trianle in cm: ");
    scanf("%d", &b);
    printf("Please enter 3rd side of trianle in cm: ");
    scanf("%d", &c);
    if(a==b && b==c){
        printf("The triangle is a Equilateral triangle");
    }
    else if(a==b || b==c || a==c){ //this will work only if it added in 2nd line, else more correct form is if(a==b){} else if(b==c){} else if(a==c){}
        printf("The triangle is a Isosceles triangle");
    }
    else if(a!=b && b!=c && a!=c){
        printf("The triangle is a Scalene triangle");
    }
    return 0;
}
