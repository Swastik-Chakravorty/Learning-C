#include<stdio.h>
#include<string.h>

// int strlen(char *st)
// {
//     char *ptr = st;
//     int len=0;
//     while(*ptr!='\0'){
//         len++;
//         ptr++;
//     }
//     return len;
// }

int main()
{
    char st[] = "Swastik";

    // int len = strlen(st);

    int len = strlen(st); //In short lenth
    printf("The length of string st is %d", len);
    return 0;
}
