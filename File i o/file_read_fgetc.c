#include<stdio.h>

int main()
{
    FILE *fptr;
    char c;
    fptr = fopen("getcdemo.txt", "r");
    c = fgetc(fptr);
    while (c != EOF)
    {
        printf("%c", c);
        c = fgetc(fptr);

    } 
    
    return 0;
    fclose(fptr);
}
