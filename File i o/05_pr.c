#include<stdio.h>

int main()
{
    FILE *ptr;
    int num;
    ptr = fopen("Swastik.txt", "r");
    fscanf(ptr, "%d", &num);
    printf("The number befor chage is %d\n", num);
    ptr = fopen("Swastik.txt", "w");
    num *= 2;
    fprintf(ptr, "%d", num);
    fclose(ptr);
    printf("The number after change is %d\n", num);
    return 0;
}