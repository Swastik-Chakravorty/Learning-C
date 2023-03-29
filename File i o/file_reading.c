#include<stdio.h>

int main()
{
    FILE *ptr;
    int num;
    int num2;
    ptr = fopen("Swastik.txt", "r");
    fscanf(ptr, "%i", &num);
    fscanf(ptr, "%i", &num2);
    fclose(ptr);
    printf("The number1 is %i\n", num);
    printf("The number2 is %i\n", num2);
    return 0;
}
