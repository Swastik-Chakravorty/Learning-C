#include<stdio.h>

int main()
{
    char alph;
    printf("Please enter the charecter: ");
    scanf("%c", &alph);
    if(alph=='a' || alph=='e' || alph=='i' || alph=='o' || alph=='u' || alph=='A' || alph=='E' || alph=='I' || alph=='O' || alph=='U'){
        printf("%c is a Vowel", alph);
    }
    else if(alph>='a' && alph<='z' && alph!='a' && alph!='e' && alph!='i' && alph!='o' && alph!='u' || alph>='A' && alph<='Z' && alph!='A' && alph!='E' && alph!='I' && alph!='O' && alph!='U'){
        printf("%c is a Consonant", alph);
    }
    else{
        printf("Please enter an 'Alphabet'!");
    }
    return 0;
}
