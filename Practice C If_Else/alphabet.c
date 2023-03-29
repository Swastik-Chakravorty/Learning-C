#include<stdio.h>

int main()
{
    char alph;
    printf("Please enter a charecter: ");
    scanf("%c", &alph);
    if(alph>='a' && alph<='z' || alph>='A' && alph<='Z'){
        printf("%c is an alphabet", alph);
    }
    else{
        printf("%c is not an alphabet", alph);
    }
    return 0;
}
