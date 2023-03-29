#include<stdio.h>

int main()
{
    int n, a, b, c, d, e, f, rev;
    printf("Please enter a four digit number: ");
    scanf("%d", &n);
    if(n/10000<1 && n/1000>=1){
        a=n/1000;
        b=n%1000;
        c=b/100;
        d=b%100;
        e=d/10;
        f=d%10;
        rev=(f*1000)+(e*100)+(c*10)+a;
        printf("New number with digits reversed you entered is: %d", rev);
    }
    else{
        printf("Please enter 'FOUR digit' number!");
    }
    return 0;
}
