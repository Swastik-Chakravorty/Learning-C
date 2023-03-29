#include<stdio.h>

int main()
{
    char s[34];
    printf("Enter your name: ");
    gets(s); // used to receive a multi word string
    puts(s); // prints the string & places the cursor on the next line
    // printf("Your name is: %s", s);
    return 0;
}