#include <stdio.h>

int main()
{
    FILE *fptr;
    int a, b, c;
    fptr = fopen("Swastik.txt", "r");
    fscanf(fptr, "%d %d %d", &a, &b, &c);
    printf("The values of a, b and c are: %d, %d & %d\n", a, b, c);
    fclose(fptr);
    return 0;
}
