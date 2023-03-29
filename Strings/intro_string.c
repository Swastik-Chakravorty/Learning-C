#include<stdio.h>

int main()
{
    // char str[] = {'S', 'W', 'A', 's', 'T', 'I', 'K', '\0'};
    // char str[] = "SWASTIK"; //same as above
    char *str = "SWASTIK"; //same as above
    // char *ptr = str;
    while(*str!='\0'){
        printf("%c", *str);
        str++;
    }
    return 0;
}
