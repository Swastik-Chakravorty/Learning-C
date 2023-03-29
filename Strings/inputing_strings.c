#include<stdio.h>

int main()
{
    char s[34];
    printf("Enter your name: ");
    scanf("%s", &s); //'s' is a bunch of arrays, so 's' has already 's[0]' address of the string, so we'll write either '&s[0]' or only 's'
    printf("Your name is: %s", s);
    return 0;
}
