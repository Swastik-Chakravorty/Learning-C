#include<stdio.h>

int main()
{
    FILE *fptr1;
    FILE *fptr2;
    char c;
    fptr1 = fopen("a.txt", "r");
    fptr2 = fopen("b.txt", "w");

    c = fgetc(fptr1);
    while (c != EOF)
    {
        fputc(c, fptr2);
        fputc(c, fptr2);
        fprintf(fptr2, " ");
        c = fgetc(fptr1);
    }
    fclose(fptr1);
    fclose(fptr2);
    return 0;
}
