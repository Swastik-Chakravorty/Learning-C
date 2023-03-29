#include<stdio.h>

int main()
{
    FILE *fptr;
    // fgetc demo for reading a file
    // fptr = fopen("getcdemo.txt", "r");
    // char c = fgetc(fptr);
    // printf("The value of my character is %c\n", fgetc(fptr));
    // printf("The value of my character is %c\n", fgetc(fptr));
    // printf("The value of my character is %c\n", fgetc(fptr));
    // printf("The value of my character is %c\n", fgetc(fptr));
    // printf("The value of my character is %c\n", fgetc(fptr));
    // printf("The value of my character is %c\n", fgetc(fptr));

    fptr = fopen("putcdemo.txt", "w");
    putc('c', fptr);
    putc('c', fptr);
    putc('c', fptr);
    putc('c', fptr);
    fclose(fptr);
    return 0;
}
