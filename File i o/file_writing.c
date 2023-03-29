#include<stdio.h>

int main()
{
    FILE *fptr;
    int num = 50;
    fptr = fopen("Swagata.txt", "w");
    fprintf(fptr, "The number is %i\n", num);
    fprintf(fptr, "Thanks for using fprintf");
    fclose(fptr);
    return 0;
}
