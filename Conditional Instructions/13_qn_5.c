#include<stdio.h>

int main()
{
    // 97-122 = a-z ASCII values
    // 65-90 = A-Z ASCII values
    char ch;
    printf("Enter the character \n:");
    scanf("%c", &ch);
    if(ch>=97 && ch<=122){
        printf("It starts with lowercase");
    }
    else if(ch>=65 && ch<=90){
        printf("It starts with uppercase");
    }
    else{
        printf("Please enter a character");
    }
    return 0;
}
